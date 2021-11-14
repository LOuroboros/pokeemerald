#include "global.h"
#include "cgb_audio.h"
#include "cgb_tables.h"

struct AudioCGB gb;
float soundChannelPos[4];
s16 soundChannel4Bit;
const s16 *PU1Table;
const s16 *PU2Table;
const u8 *PU4Table;
u16 PU4TableLen;
u32 apuFrame;
u8 apuCycle;
u32 sampleRate;


void _cgb_audio_init(u32 rate){
    gb.ch1Freq = 0;
    gb.ch1SweepCounter = 0;
    gb.ch1SweepCounterI = 0;
    gb.ch1SweepDir = 0;
    gb.ch1SweepShift = 0;
    for (u8 ch = 0; ch < 4; ch++){
        gb.Vol[ch] = 0;
        gb.VolI[ch] = 0;
        gb.Len[ch] = 0;
        gb.LenI[ch] = 0;
        gb.LenOn[ch] = 0;
        gb.EnvCounter[ch] = 0;
        gb.EnvCounterI[ch] = 0;
        gb.EnvDir[ch] = 0;
        gb.DAC[ch] = 0;
        soundChannelPos[ch] = 0;
    }
    soundChannelPos[1] = 1;
    PU1Table = PU0;
    PU2Table = PU0;
    PU4Table = lfsr15;
    PU4TableLen = 0x7FFF;
    sampleRate = rate;
}


void cgb_set_sweep(u8 sweep){
    gb.ch1SweepDir = (sweep & 0x08) >> 3;
    gb.ch1SweepCounter = gb.ch1SweepCounterI = (sweep & 0x70) >> 4;
    gb.ch1SweepShift = (sweep & 0x07);
}


void cgb_set_wavram(){
    for(u8 wavi = 0; wavi < 0x10; wavi++){
        gb.WAVRAM[(wavi << 1)] = -15 + (((*(REG_ADDR_WAVE_RAM0 + wavi)) & 0xF0) >> 3);
        gb.WAVRAM[(wavi << 1) + 1] = -15 + (((*(REG_ADDR_WAVE_RAM0 + wavi)) & 0x0F) << 1);
    }
}


void cgb_toggle_length(u8 channel, bool8 state){
    gb.LenOn[channel] = state;
}


void cgb_set_length(u8 channel, u8 length){
    gb.Len[channel] = gb.LenI[channel] = length;
}


void cgb_set_envelope(u8 channel, u8 envelope){
    if(channel == 2){
        switch((envelope & 0xE0)){
            case 0x00:  // mute
                gb.Vol[2] = gb.VolI[2] = 0;
            break;
            case 0x20:  // full
                gb.Vol[2] = gb.VolI[2] = 4;
            break;
            case 0x40:  // half
                gb.Vol[2] = gb.VolI[2] = 2;
            break;
            case 0x60:  // quarter
                gb.Vol[2] = gb.VolI[2] = 1;
            break;
            case 0x80:  // 3 quarters
                gb.Vol[2] = gb.VolI[2] = 3;
            break;
        }
    }else{
        gb.DAC[channel] = (envelope & 0xF8) > 0;
        gb.Vol[channel] = gb.VolI[channel] = (envelope & 0xF0) >> 4;
        gb.EnvDir[channel] = (envelope & 0x08) >> 3;
        gb.EnvCounter[channel] = gb.EnvCounterI[channel] = (envelope & 0x07);
    }
}


void cgb_trigger_note(u8 channel){
    gb.Vol[channel] = gb.VolI[channel];
    gb.Len[channel] = gb.LenI[channel];
    if(channel != 2) gb.EnvCounter[channel] = gb.EnvCounterI[channel];
}


void cgb_audio_generate(u16 samplesPerFrame){
    float *outBuffer = gb.outBuffer;
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
        if(apuFrame >= sampleRate){
            apuFrame -= sampleRate;
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
        soundChannelPos[0] += freqTable[REG_SOUND1CNT_X & 0x7FF] / (sampleRate / 32);
        soundChannelPos[1] += freqTable[REG_SOUND2CNT_H & 0x7FF] / (sampleRate / 32);
        soundChannelPos[2] += freqTable[REG_SOUND3CNT_X & 0x7FF] / (sampleRate / 32);
        soundChannelPos[3] += freqTableNSE[REG_SOUND4CNT_H & 0xFF] / sampleRate;
        while(soundChannelPos[0] >= 32) soundChannelPos[0] -= 32;
        while(soundChannelPos[1] >= 32) soundChannelPos[1] -= 32;
        while(soundChannelPos[2] >= 32) soundChannelPos[2] -= 32;
        if(soundChannelPos[3] >= PU4TableLen) soundChannelPos[3] = 0;
        float outputL = 0;
        float outputR = 0;
        if(REG_NR52 & 0x80){
            if((gb.DAC[0]) && (REG_NR52 & 0x01)){
                if(REG_NR51 & 0x01) outputL += gb.Vol[0] * PU1Table[(int)(soundChannelPos[0])];
                if(REG_NR51 & 0x10) outputR += gb.Vol[0] * PU1Table[(int)(soundChannelPos[0])];
            }
            if((gb.DAC[1]) && (REG_NR52 & 0x02)){
                if(REG_NR51 & 0x02) outputL += gb.Vol[1] * PU2Table[(int)(soundChannelPos[1])];
                if(REG_NR51 & 0x20) outputR += gb.Vol[1] * PU2Table[(int)(soundChannelPos[1])];
            }
            if((REG_NR30 & 0x80) && (REG_NR52 & 0x04)){
                if(REG_NR51 & 0x04) outputL += (gb.Vol[2] / 4.0f) * gb.WAVRAM[(int)(soundChannelPos[2])];
                if(REG_NR51 & 0x40) outputR += (gb.Vol[2] / 4.0f) * gb.WAVRAM[(int)(soundChannelPos[2])];
            }
            if((gb.DAC[3]) && (REG_NR52 & 0x08)){
                soundChannel4Bit = 7 - (int)(soundChannelPos[3]) & 7;
                if(REG_NR51 & 0x08) outputL += gb.Vol[3] * (((PU4Table[(int)(soundChannelPos[3]/8)] >> soundChannel4Bit) & 1) ? 1 : -1);
                if(REG_NR51 & 0x80) outputR += gb.Vol[3] * (((PU4Table[(int)(soundChannelPos[3]/8)] >> soundChannel4Bit) & 1) ? 1 : -1);
            }
        }
        outBuffer[0] = outputL / 64.0f;
        outBuffer[1] = outputR / 64.0f;
    }
}


float *cgb_get_buffer(){
    return gb.outBuffer;
}
