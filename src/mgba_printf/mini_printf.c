/*
 * The Minimal snprintf() implementation
 *
 * Copyright (c) 2013,2014 Michal Ludvig <michal@logix.cz>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the auhor nor the names of its contributors
 *       may be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ----
 *
 * This is a minimal snprintf() implementation optimised
 * for embedded systems with a very limited program memory.
 * mini_snprintf() doesn't support _all_ the formatting
 * the glibc does but on the other hand is a lot smaller.
 * Here are some numbers from my STM32 project (.bin file size):
 *      no snprintf():      10768 bytes
 *      mini snprintf():    11420 bytes     (+  652 bytes)
 *      glibc snprintf():   34860 bytes     (+24092 bytes)
 * Wasting nearly 24kB of memory just for snprintf() on
 * a chip with 32kB flash is crazy. Use mini_snprintf() instead.
 *
 */

/*
 * mini-printf courtesy of https://github.com/mludvig/mini-printf
 * stripped to reduce file size for mgba_printf needs
 */

#include "mgba_printf/mini_printf.h"
#include "gba/types.h"
#include "gba/defines.h"
#include "characters.h"

struct mini_buff 
{
    char *buffer, *pbuffer;
    u32 buffer_len;
};

//This converts the number used to represent a character in the game code to a regular char (character).
static u8 decodeChar(u8 input)
{
    switch(input)
    {
    case CHAR_a: return 'a';
    case CHAR_b: return 'b';
    case CHAR_c: return 'c';
    case CHAR_d: return 'd';
    case CHAR_e: return 'e';
    case CHAR_f: return 'f';
    case CHAR_g: return 'g';
    case CHAR_h: return 'h';
    case CHAR_i: return 'i';
    case CHAR_j: return 'j';
    case CHAR_k: return 'k';
    case CHAR_l: return 'l';
    case CHAR_m: return 'm';
    case CHAR_n: return 'n';
    case CHAR_o: return 'o';
    case CHAR_p: return 'p';
    case CHAR_q: return 'q';
    case CHAR_r: return 'r';
    case CHAR_s: return 's';
    case CHAR_t: return 't';
    case CHAR_u: return 'u';
    case CHAR_v: return 'v';
    case CHAR_w: return 'w';
    case CHAR_x: return 'x';
    case CHAR_y: return 'y';
    case CHAR_z: return 'z';
    case CHAR_A: return 'A';
    case CHAR_B: return 'B';
    case CHAR_C: return 'C';
    case CHAR_D: return 'D';
    case CHAR_E: return 'E';
    case CHAR_F: return 'F';
    case CHAR_G: return 'G';
    case CHAR_H: return 'H';
    case CHAR_I: return 'I';
    case CHAR_J: return 'J';
    case CHAR_K: return 'K';
    case CHAR_L: return 'L';
    case CHAR_M: return 'M';
    case CHAR_N: return 'N';
    case CHAR_O: return 'O';
    case CHAR_P: return 'P';
    case CHAR_Q: return 'Q';
    case CHAR_R: return 'R';
    case CHAR_S: return 'S';
    case CHAR_T: return 'T';
    case CHAR_U: return 'U';
    case CHAR_V: return 'V';
    case CHAR_W: return 'W';
    case CHAR_X: return 'X';
    case CHAR_Y: return 'Y';
    case CHAR_Z: return 'Z';
    case CHAR_0: return '0';
    case CHAR_1: return '1';
    case CHAR_2: return '2';
    case CHAR_3: return '3';
    case CHAR_4: return '4';
    case CHAR_5: return '5';
    case CHAR_6: return '6';
    case CHAR_7: return '7';
    case CHAR_8: return '8';
    case CHAR_9: return '9';
    case CHAR_EXCL_MARK: return '!';
    case CHAR_QUESTION_MARK: return '?';
    case CHAR_PERIOD: return '.';
    case CHAR_HYPHEN: return '-';
    case CHAR_SPACE: return ' ';
    }
    return '_';
}

static s32 _puts(char *s, s32 len, void *buf)
{
    char *p0;
    s32 i;
    struct mini_buff *b;

    if (!buf) 
        return len;
    
    b = buf;
    p0 = b->buffer;

    /* Copy to buffer */
    for (i = 0; i < len; i++) {
        if(b->pbuffer == b->buffer + b->buffer_len - 1) {
            break;
        }
        *(b->pbuffer ++) = s[i];
    }
    *(b->pbuffer) = 0;
    return b->pbuffer - p0;
}

static s32 _puts2(char *s, s32 len, void *buf)
{
    char *p0;
    s32 i;
    struct mini_buff *b;

    if (!buf) 
        return len;
    
    b = buf;
    p0 = b->buffer;

    /* Copy to buffer */
    for (i = 0; i < len; i++) {
        if(b->pbuffer == b->buffer + b->buffer_len - 1) {
            break;
        }
        *(b->pbuffer ++) = decodeChar(s[i]);
    }
    *(b->pbuffer) = 0;
    return b->pbuffer - p0;
}

static s32 mini_strlen(const char *s)
{
    s32 len = 0;
    while (s[len] != '\0') len++;
    return len;
}

static s32 mini_itoa(u32 value, u32 radix, s32 uppercase, bool32 unsig, char *buffer)
{
    char *pbuffer = buffer;
    s32 negative = 0;
    s32 i, len;

    /* No support for unusual radixes. */
    if (radix > 16)
        return 0;

    if (value < 0 && !unsig)
    {
        negative = 1;
        value = -value;
    }

    /* This builds the string back to front ... */
    do 
    {
        s32 digit = value % radix;
        *(pbuffer++) = (digit < 10 ? '0' + digit : (uppercase ? 'A' : 'a') + digit - 10);
        value /= radix;
    } while (value > 0);

    if (negative)
        *(pbuffer++) = '-';

    *(pbuffer) = '\0';

    /* ... now we reverse it (could do it recursively but will
     * conserve the stack space) */
    len = (pbuffer - buffer);
    for (i = 0; i < len / 2; i++)
    {
        char j = buffer[i];
        buffer[i] = buffer[len-i-1];
        buffer[len-i-1] = j;
    }

    return len;
}

static s32 mini_pad(char* ptr, s32 len, char pad_char, s32 pad_to, char *buffer)
{
    s32 i;
    bool32 overflow = FALSE;
    char * pbuffer = buffer;
    if(pad_to == 0)
        pad_to = len;
    if (len > pad_to) {
        len = pad_to;
        overflow = TRUE;
    }
    for(i = pad_to - len; i > 0; i --)
    {
        *(pbuffer++) = pad_char;
    }
    for(i = len; i > 0; i --)
    {
        *(pbuffer++) = *(ptr++);
    }
    len = pbuffer - buffer;
    if(overflow)
    {
        for (i = 0; i < 3 && pbuffer > buffer; i ++)
        {
            *(pbuffer-- - 1) = '*';
        }
    }
    return len;
}

s32 mini_vsnprintf(char *buffer, u32 buffer_len, const char *fmt, va_list va)
{
    struct mini_buff b;
    s32 n;
    b.buffer = buffer;
    b.pbuffer = buffer;
    b.buffer_len = buffer_len;
    if (buffer_len == 0)
        buffer = NULL;
    n = mini_vpprintf(_puts,_puts2, (buffer != NULL) ? &b : NULL, fmt, va);
    if (buffer == NULL)
        return n;
    return b.pbuffer - b.buffer;
}

s32 mini_vpprintf(s32 (*puts)(char* s, s32 len, void* buf),s32 (*puts2)(char* s, s32 len, void* buf), void* buf, const char *fmt, va_list va)
{
    char bf[24];
    char bf2[24];
    char ch;
    s32 n;
    if(puts == NULL)
    {
        /* run puts in counting mode. */
        puts2 = _puts2; puts = _puts; buf = NULL;
    }
    n = 0;
    while ((ch=*(fmt++)))
    {
        s32 len;
        if (ch != '%')
        {
            len = 1;
            len = puts(&ch, len, buf);
        } else 
        {
            char pad_char = ' ';
            s32 pad_to = 0;
            char l = 0;
            char *ptr;

            ch=*(fmt++);

            /* Zero padding requested */
            if (ch == '0')
                pad_char = '0';
            while (ch >= '0' && ch <= '9')
            {
                pad_to = pad_to * 10 + (ch - '0');
                ch= *(fmt++);
            }
            if(pad_to > (s32) sizeof(bf))
            {
                pad_to = sizeof(bf);
            }
            if (ch == 'l')
            {
                l = 1;
                ch=*(fmt++);
            }

            switch (ch) 
            {
                case 0:
                    goto end;
                case 'u':
                case 'd':
                    if(l)
                    {
                        len = mini_itoa(va_arg(va, u32), 10, 0, (ch=='u'), bf2);
                    } else
                    {
                        if(ch == 'u')
                        {
                            len = mini_itoa((u32) va_arg(va, u32), 10, 0, 1, bf2);
                        }
                        else
                        {
                            len = mini_itoa((s32) va_arg(va, s32), 10, 0, 0, bf2);
                        }
                    }
                    len = mini_pad(bf2, len, pad_char, pad_to, bf);
                    len = puts(bf, len, buf);
                    break;

                case 'x':
                case 'X':
                    if(l)
                    {
                        len = mini_itoa(va_arg(va, u32), 16, (ch=='X'), 1, bf2);
                    }
                    else
                    {
                        len = mini_itoa((u32) va_arg(va, u32), 16, (ch=='X'), 1, bf2);
                    }
                    len = mini_pad(bf2, len, pad_char, pad_to, bf);
                    len = puts(bf, len, buf);
                    break;

                case 'c' :
                    ch = (char)(va_arg(va, s32));
                    len = mini_pad(&ch, 1, pad_char, pad_to, bf);
                    len = puts(bf, len, buf);
                    break;

                case 's' :
                    ptr = va_arg(va, char*);
                    len = mini_strlen(ptr);
                    if (pad_to > 0)
                    {
                        len = mini_pad(ptr, len, pad_char, pad_to, bf);
                        len = puts(bf, len, buf);
                    } else
                    {
                        len = puts(ptr, len, buf);
                    }
                    break;
                case 'S' :
                    ptr = va_arg(va, char*);
                    len = mini_strlen(ptr);
                    if (pad_to > 0)
                    {
                        len = mini_pad(ptr, len, pad_char, pad_to, bf);
                        len = puts2(bf, len, buf);
                    } else
                    {
                        len = puts2(ptr, len, buf);
                    }
                    break;
                default:
                    len = 1;
                    len = puts(&ch, len, buf);
                    break;
                    // MODIFIED: Use %S to convert to Ascii
      
            }
        }
        n = n + len;
    }
end:
    return n;
}
