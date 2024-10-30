/*
* Exercise 2-6 : Tested
* ================================================================
* Write a function setbits(x,p,n,y) that returns x with the n bits
* that begin at position p set to the rightmost n bits of y, leaving the other
* bits unchanged.
*/

#include "../include/bits.h"

unsigned setBits(unsigned char x, int p, int n, unsigned char y)
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
