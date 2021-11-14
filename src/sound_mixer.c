#include "global.h"
#include "music_player.h"
#include "sound_mixer.h"
#include "mp2k_common.h"
#include "CGB_sound.h"
#include "CGB_tables.h"

#define VCOUNT_VBLANK 160
#define TOTAL_SCANLINES 228

struct AudioCGB gb;
float soundChannelPos[4];
s16 soundChannel4Bit;
const s16 *PU1Table;
const s16 *PU2Table;
const u8 *PU4Table;
u16 PU4TableLen;
u32 gbFrame, apuFrame;
u8 apuCycle;
float outputL, outputR;
#define SAMPLE_RATE 42048

static inline void GenerateAudio(struct SoundMixerState *mixer, struct MixerSource *chan, struct WaveData2 *wav, float *outBuffer, u16 samplesPerFrame, float sampleRateReciprocal);
void SampleMixer(struct SoundMixerState *mixer, u32 scanlineLimit, u16 samplesPerFrame, float *outBuffer, u8 dmaCounter, u16 maxBufSize);
static inline bool32 TickEnvelope(struct MixerSource *chan, struct WaveData2 *wav);
void GeneratePokemonSampleAudio(struct SoundMixerState *mixer, struct MixerSource *chan, s8 *current, float *outBuffer, u16 samplesPerFrame, float sampleRateReciprocal, s32 samplesLeftInWav, signed envR, signed envL);

void RunMixerFrame(void) {
    if(!PU1Table) PU1Table = PU0;
    if(!PU2Table) PU2Table = PU0;
    if(!PU4Table){
        PU4Table = lfsr15;
        PU4TableLen = 0x7FFF;
    }
    struct SoundMixerState *mixer = SOUND_INFO_PTR;
    
    if (mixer->lockStatus != MIXER_UNLOCKED) {
        return;
    }
    mixer->lockStatus = MIXER_LOCKED;
    
    u32 maxScanlines = mixer->maxScanlines;
    if (mixer->maxScanlines != 0) {
        u32 vcount = REG_VCOUNT;
        maxScanlines += vcount;
        if (vcount < VCOUNT_VBLANK) {
            maxScanlines += TOTAL_SCANLINES;
        }
    }
    
    if (mixer->firstPlayerFunc != NULL) {
        mixer->firstPlayerFunc(mixer->firstPlayer);
    }
    
    mixer->cgbMixerFunc();
    
    s32 samplesPerFrame = mixer->samplesPerFrame;
    float *outBuffer = mixer->outBuffer;
    s32 dmaCounter = mixer->dmaCounter;
    
    if (dmaCounter > 1) {
        outBuffer += samplesPerFrame * (mixer->framesPerDmaCycle - (dmaCounter - 1)) * 2;
    }
    
    //MixerRamFunc mixerRamFunc = ((MixerRamFunc)MixerCodeBuffer);
    SampleMixer(mixer, maxScanlines, samplesPerFrame, outBuffer, dmaCounter, MIXED_AUDIO_BUFFER_SIZE);
}



//__attribute__((target("thumb")))
void SampleMixer(struct SoundMixerState *mixer, u32 scanlineLimit, u16 samplesPerFrame, float *outBuffer, u8 dmaCounter, u16 maxBufSize) {
    u32 reverb = mixer->reverb;
    if (reverb) {
        // The vanilla reverb effect outputs a mono sound from four sources:
        //  - L/R channels as they were mixer->framesPerDmaCycle frames ago
        //  - L/R channels as they were (mixer->framesPerDmaCycle - 1) frames ago
        float *tmp1 = outBuffer;
        float *tmp2;
        if (dmaCounter == 2) {
            tmp2 = mixer->outBuffer;
        } else {
            tmp2 = outBuffer + samplesPerFrame * 2;
        }
        uf16 i = 0;
        do {
            float s = tmp1[0] + tmp1[1] + tmp2[0] + tmp2[1];
            s *= ((float)reverb / 512.0f);
            tmp1[0] = tmp1[1] = s;
            tmp1+=2;
            tmp2+=2;
        }
        while(++i < samplesPerFrame);
    } else {
        // memset(outBuffer, 0, samplesPerFrame);
        // memset(outBuffer + maxBufSize, 0, samplesPerFrame);
        for (int i = 0; i < samplesPerFrame; i++) {
            float *dst = &outBuffer[i*2];
            dst[1] = dst[0] = 0.0f;
        }
    }
    
    float sampleRateReciprocal = mixer->sampleRateReciprocal;
    sf8 numChans = mixer->numChans;
    struct MixerSource *chan = mixer->chans;
    
    for (int i = 0; i < numChans; i++, chan++) {
        struct WaveData2 *wav = chan->wav;
        
        if (scanlineLimit != 0) {
            uf16 vcount = REG_VCOUNT;
            if (vcount < VCOUNT_VBLANK) {
                vcount += TOTAL_SCANLINES;
            }
            if (vcount >= scanlineLimit) {
                goto returnEarly;
            }
        }
        
        if (TickEnvelope(chan, wav)) 
        {
            GenerateAudio(mixer, chan, wav, outBuffer, samplesPerFrame, sampleRateReciprocal);
        }
    }
    GenerateAudioCGB(outBuffer, samplesPerFrame);
returnEarly:
    mixer->lockStatus = MIXER_UNLOCKED;
}

// Returns TRUE if channel is still active after moving envelope forward a frame
//__attribute__((target("thumb")))
static inline bool32 TickEnvelope(struct MixerSource *chan, struct WaveData2 *wav) {
    // MP2K envelope shape
    //                                                                 |
    // (linear)^                                                       |
    // Attack / \Decay (exponential)                                   |
    //       /   \_                                                    |
    //      /      '.,        Sustain                                  |
    //     /          '.______________                                 |
    //    /                           '-.       Echo (linear)          |
    //   /                 Release (exp) ''--..|\                      |
    //  /                                        \                     |
    
    u8 status = chan->status;
    if ((status & 0xC7) == 0) {
        return FALSE;
    }
    
    u8 env = 0;
    if ((status & 0x80) == 0) {
        env = chan->envelopeVol;
        
        if (status & 4) {
            // Note-wise echo
            --chan->echoVol;
            if (chan->echoVol <= 0) {
                chan->status = 0;
                return FALSE;
            } else {
                return TRUE;
            }
        } else if (status & 0x40) {
            // Release
            chan->envelopeVol = env * chan->release / 256U;
            u8 echoVol = chan->echoVol;
            if (chan->envelopeVol > echoVol) {
                return TRUE;
            } else if (echoVol == 0) {
                chan->status = 0;
                return FALSE;
            } else {
                chan->status |= 4;
                return TRUE;
            }
        }
        
        switch (status & 3) {
        uf16 newEnv;
        case 2:
            // Decay
            chan->envelopeVol = env * chan->decay / 256U;
            
            u8 sustain = chan->sustain;
            if (chan->envelopeVol <= sustain && sustain == 0) {
                // Duplicated echo check from Release section above
                if (chan->echoVol == 0) {
                    chan->status = 0;
                    return FALSE;
                } else {
                    chan->status |= 4;
                    return TRUE;
                }
            } else if (chan->envelopeVol <= sustain) {
                chan->envelopeVol = sustain;
                --chan->status;
            }
            break;
        case 3:
        attack:
            newEnv = env + chan->attack;
            if (newEnv > 0xFF) {
                chan->envelopeVol = 0xFF;
                --chan->status;
            } else {
                chan->envelopeVol = newEnv;
            }
            break;
        case 1: // Sustain
        default:
            break;
        }
        
        return TRUE;
    } else if (status & 0x40) {
        // Init and stop cancel each other out
        chan->status = 0;
        return FALSE;
    } else {
        // Init channel
        chan->status = 3;
#ifdef POKEMON_EXTENSIONS
        chan->current = wav->data + chan->ct;
        chan->ct = wav->size - chan->ct;
#else
        chan->current = wav->data;
        chan->ct = wav->size;
#endif
        chan->fw = 0;
        chan->envelopeVol = 0;
        if (wav->loopFlags & 0xC0) {
            chan->status |= 0x10;
        }
        goto attack;
    }
}

//__attribute__((target("thumb")))
static inline void GenerateAudio(struct SoundMixerState *mixer, struct MixerSource *chan, struct WaveData2 *wav, float *outBuffer, u16 samplesPerFrame, float sampleRateReciprocal) {/*, [[[]]]) {*/
    uf8 v = chan->envelopeVol * (mixer->masterVol + 1) / 16U;
    chan->envelopeVolR = chan->rightVol * v / 256U;
    chan->envelopeVolL = chan->leftVol * v / 256U;
    
    s32 loopLen = 0;
    s8 *loopStart;
    if (chan->status & 0x10) {
        loopStart = wav->data + wav->loopStart;
        loopLen = wav->size - wav->loopStart;
    }
    s32 samplesLeftInWav = chan->ct;
    s8 *current = chan->current;
    signed envR = chan->envelopeVolR;
    signed envL = chan->envelopeVolL;
#ifdef POKEMON_EXTENSIONS
    if (chan->type & 0x30) {
        GeneratePokemonSampleAudio(mixer, chan, current, outBuffer, samplesPerFrame, sampleRateReciprocal, samplesLeftInWav, envR, envL);
    }
    else
#endif
    if (chan->type & 8) {
        for (u16 i = 0; i < samplesPerFrame; i++, outBuffer+=2) {
            sf8 c = *(current++);
            
            outBuffer[1] += (c * envR) / 32768.0f;
            outBuffer[0] += (c * envL) / 32768.0f;
            if (--samplesLeftInWav == 0) {
                samplesLeftInWav = loopLen;
                if (loopLen != 0) {
                    current = loopStart;
                } else {
                    chan->status = 0;
                    return;
                }
            }
        }
        
        chan->ct = samplesLeftInWav;
        chan->current = current;
    } else {
        float finePos = chan->fw;
        float romSamplesPerOutputSample = chan->freq * sampleRateReciprocal;

        sf16 b = current[0];
        sf16 m = current[1] - b;
        current += 1;
        
        for (u16 i = 0; i < samplesPerFrame; i++, outBuffer+=2) {
            // Use linear interpolation to calculate a value between the current sample in the wav
            // and the next sample. Also cancel out the 9.23 stuff
            float sample = (finePos * m) + b;
            
            outBuffer[1] += (sample * envR) / 32768.0f;
            outBuffer[0] += (sample * envL) / 32768.0f;
            
            finePos += romSamplesPerOutputSample;
            u32 newCoarsePos = finePos;
            if (newCoarsePos != 0) {
                finePos -= (int)finePos;
                samplesLeftInWav -= newCoarsePos;
                if (samplesLeftInWav <= 0) {
                    if (loopLen != 0) {
                        current = loopStart;
                        newCoarsePos = -samplesLeftInWav;
                        samplesLeftInWav += loopLen;
                        while (samplesLeftInWav <= 0) {
                            newCoarsePos -= loopLen;
                            samplesLeftInWav += loopLen;
                        }
                        b = current[newCoarsePos];
                        m = current[newCoarsePos + 1] - b;
                        current += newCoarsePos + 1;
                    } else {
                        chan->status = 0;
                        return;
                    }
                } else {
                    b = current[newCoarsePos - 1];
                    m = current[newCoarsePos] - b;
                    current += newCoarsePos;
                }
            }
        }
        
        chan->fw = finePos;
        chan->ct = samplesLeftInWav;
        chan->current = current - 1;
    }
}

void GenerateAudioCGB(float *outBuffer, u16 samplesPerFrame) {/*, [[[]]]) {*/
    switch(REG_NR11 & 0xC0){
        case 0x00:
            PU1Table = PU0;
        break;
        case 0x40:
            PU1Table = PU1;
        break;
        case 0x80:
            PU1Table = PU2;
        break;
        case 0xC0:
            PU1Table = PU3;
        break;
    }

    switch(REG_NR21 & 0xC0){
        case 0x00:
            PU2Table = PU0;
        break;
        case 0x40:
            PU2Table = PU1;
        break;
        case 0x80:
            PU2Table = PU2;
        break;
        case 0xC0:
            PU2Table = PU3;
        break;
    }

    switch(REG_NR43 & 0x08){
        case 0x00:
            PU4Table = lfsr15;
            PU4TableLen = 0x7FFF;
        break;
        case 0x08:
            PU4Table = lfsr7;
            PU4TableLen = 0x7F;
        break;
    }

    for (u16 i = 0; i < samplesPerFrame; i++, outBuffer+=2) {
        apuFrame += 512;
        if(apuFrame >= SAMPLE_RATE){
            apuFrame -= SAMPLE_RATE;
            apuCycle++;

            if((apuCycle & 1) == 0){  // Length
                for(u8 ch = 0; ch < 4; ch++){
                    if(gb.Len[ch]){
                        if(--gb.Len[ch] == 0 && gb.LenOn[ch]){
                            REG_NR52 &= (0xFF ^ (1 << ch));
                        }
                    }
                }
            }

            if((apuCycle & 7) == 7){  // Envelope
                for(u8 ch = 0; ch < 4; ch++){
                    if(ch == 2) continue;  // Skip wave channel
                    if(gb.EnvCounter[ch]){
                        if(--gb.EnvCounter[ch] == 0){
                            if(gb.Vol[ch] && !gb.EnvDir[ch]){
                                gb.Vol[ch]--;
                                gb.EnvCounter[ch] = gb.EnvCounterI[ch];
                            }else if(gb.Vol[ch] < 0x0F && gb.EnvDir[ch]){
                                gb.Vol[ch]++;
                                gb.EnvCounter[ch] = gb.EnvCounterI[ch];
                            }
                        }
                    }
                }
            }

            if((apuCycle & 3) == 2){  // Sweep
                if(gb.ch1SweepCounterI && gb.ch1SweepShift){
                    if(--gb.ch1SweepCounter == 0){
                        gb.ch1Freq = REG_SOUND1CNT_X & 0x7FF;
                        if(gb.ch1SweepDir){
                            gb.ch1Freq -= gb.ch1Freq >> gb.ch1SweepShift;
                            if(gb.ch1Freq & 0xF800) gb.ch1Freq = 0;
                        }else{
                            gb.ch1Freq += gb.ch1Freq >> gb.ch1SweepShift;
                            if(gb.ch1Freq & 0xF800){
                                gb.ch1Freq = 0;
                                gb.EnvCounter[0] = 0;
                                gb.Vol[0] = 0;
                            }
                        }
                        REG_NR13 = gb.ch1Freq & 0xFF;
                        REG_NR14 &= 0xF8;
                        REG_NR14 += (gb.ch1Freq >> 8) & 0x07;
                        gb.ch1SweepCounter = gb.ch1SweepCounterI;
                    }
                }
            }
        }
        //Sound generation loop
        soundChannelPos[0] += freqTable[REG_SOUND1CNT_X & 0x7FF] / (SAMPLE_RATE / 32);
        soundChannelPos[1] += freqTable[REG_SOUND2CNT_H & 0x7FF] / (SAMPLE_RATE / 32);
        soundChannelPos[2] += freqTable[REG_SOUND3CNT_X & 0x7FF] / (SAMPLE_RATE / 32);
        soundChannelPos[3] += freqTableNSE[REG_SOUND4CNT_H & 0xFF] / SAMPLE_RATE;
        while(soundChannelPos[0] >= 32) soundChannelPos[0] -= 32;
        while(soundChannelPos[1] >= 32) soundChannelPos[1] -= 32;
        while(soundChannelPos[2] >= 32) soundChannelPos[2] -= 32;
        if(soundChannelPos[3] >= PU4TableLen) soundChannelPos[3] = 0;
        outputL = 0;
        outputR = 0;
        if(REG_NR52 & 0x80){
            soundChannel4Bit = 7 - (int)(soundChannelPos[3]) & 7;
            if((REG_NR51 & 0x01) && (gb.DAC[0]) && (REG_NR52 & 0x01)) outputL += gb.Vol[0] * PU1Table[(int)(soundChannelPos[0])];
            if((REG_NR51 & 0x10) && (gb.DAC[0]) && (REG_NR52 & 0x01)) outputR += gb.Vol[0] * PU1Table[(int)(soundChannelPos[0])];
            if((REG_NR51 & 0x02) && (gb.DAC[1]) && (REG_NR52 & 0x02)) outputL += gb.Vol[1] * PU2Table[(int)(soundChannelPos[1])];
            if((REG_NR51 & 0x20) && (gb.DAC[1]) && (REG_NR52 & 0x02)) outputR += gb.Vol[1] * PU2Table[(int)(soundChannelPos[1])];
            if((REG_NR51 & 0x04) && (REG_NR30 & 0x80) && (REG_NR52 & 0x04)) outputL += gb.WAVRAM[(int)(soundChannelPos[2])] >> gb.Vol[2];
            if((REG_NR51 & 0x40) && (REG_NR30 & 0x80) && (REG_NR52 & 0x04)) outputR += gb.WAVRAM[(int)(soundChannelPos[2])] >> gb.Vol[2];
            if((REG_NR51 & 0x08) && (gb.DAC[3]) && (REG_NR52 & 0x08)) outputL += gb.Vol[3] * (((PU4Table[(int)(soundChannelPos[3]/8)] >> soundChannel4Bit) & 1) ? 1 : -1);
            if((REG_NR51 & 0x80) && (gb.DAC[3]) && (REG_NR52 & 0x08)) outputR += gb.Vol[3] * (((PU4Table[(int)(soundChannelPos[3]/8)] >> soundChannel4Bit) & 1) ? 1 : -1);
        }
        outBuffer[0] += outputL / 64.0f;
        outBuffer[1] += outputR / 64.0f;
    }
}

struct WaveData
{
    u16 type;
    u16 status;
    u32 freq;
    u32 loopStart;
    u32 size; // number of samples
    s8 data[1]; // samples
};

void GeneratePokemonSampleAudio(struct SoundMixerState *mixer, struct MixerSource *chan, s8 *current, float *outBuffer, u16 samplesPerFrame, float sampleRateReciprocal, s32 samplesLeftInWav, signed envR, signed envL) {
    struct WaveData *wav = chan->wav; // r6
    float finePos = chan->fw;
    if((chan->status & 0x20) == 0) {
        chan->status |= 0x20;
        if(chan->type & 0x10) {
            s8 *waveEnd = wav->data + wav->size;
            current = wav->data + (waveEnd - current);
            chan->current = current;
        }
        if(wav->type != 0) {
            current -= (uintptr_t)&wav->data;
            chan->current = current;
        }
    }
    float romSamplesPerOutputSample = chan->type & 8 ? 1.0f : chan->freq * sampleRateReciprocal;
    if(wav->type != 0) { // is compressed
        chan->extra1 = 0;
        chan->extra2 = 0xFF00;
        if(chan->type & 0x20) {

        }
        else {

        } 
        //TODO: implement compression
    }
    else {
        if(chan->type & 0x10) {
            current -= 1;
            sf16 b = current[0];
            sf16 m = current[-1] - b;
            
            for (u16 i = 0; i < samplesPerFrame; i++, outBuffer+=2) {
                float sample = (finePos * m) + b;
                
                outBuffer[1] += (sample * envR) / 32768.0f;
                outBuffer[0] += (sample * envL) / 32768.0f;
                
                finePos += romSamplesPerOutputSample;
                int newCoarsePos = finePos;
                if (newCoarsePos != 0) {
                    finePos -= (int)finePos;
                    samplesLeftInWav -= newCoarsePos;
                    if (samplesLeftInWav <= 0) {
                        chan->status = 0;
                        break;
                    }
                    else {
                        current -= newCoarsePos;
                        b = current[0];
                        m = current[-1] - b;
                    }
                }
            }
            
            chan->fw = finePos;
            chan->ct = samplesLeftInWav;
            chan->current = current + 1;
        }
    }
}
