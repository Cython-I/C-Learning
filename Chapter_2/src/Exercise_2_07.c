/*
* Exercise 2-7 : Testesd
* ================================================================
* Write a function invert(x,p,n) that returns x with the n bits
* that begin at position p inverted (i.e., 1 changed into 0 and vice versa),
* leaving the others unchanged.
*/

#include "../include/bits.h"

unsigned invert(unsigned char x, int p, int n)
{
    unsigned char mask = 0x7F;
    mask <<= n;
    mask = ~mask;
    mask <<= (p + 1 - n);

    return x ^ mask;
}
