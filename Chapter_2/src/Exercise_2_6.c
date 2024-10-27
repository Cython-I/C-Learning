#include "../include/bits.h"

unsigned setbits(unsigned char x, int p, int n, unsigned char y)
{
    // This was actually pretty hard, the idea is simple, but generating the mask took a minute
    unsigned char mask = 0x7F;
    mask <<= n;
    mask = ~mask;
    mask <<= (p + 1 - n);
    mask = ~mask;

    x = x & mask;

    y = y << (p + 1 - n);
    y = y & ~mask;
    return x | y;
}
