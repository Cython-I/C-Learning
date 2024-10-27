#include "../include/bits.h"

unsigned invert(unsigned char x, int p, int n)
{
    unsigned char mask = 0x7F;
    mask <<= n;
    mask = ~mask;
    mask <<= (p + 1 - n);

    return x ^ mask;
}
