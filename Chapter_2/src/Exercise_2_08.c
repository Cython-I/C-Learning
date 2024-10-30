/*
* Exercise 2-8 : Tested
* ================================================================
* Write a function rightrot(x,n) that returns the value of the
* integer x rotated to the right by n positions.
*/

#include "../include/bits.h"

int rightRot(int x, int n)
{
    int mask = ~0;
    mask <<= n; // do recall that we push in signed bits with this, this will get intresting....
    mask = ~mask;
    int v = x & mask;
    v <<= ((sizeof(int) * 8) - n);
    int og = x >> n;

    return og | v;
}

unsigned char rightRotChar(unsigned char x, int n)
{
    unsigned char mask = ~0;
    mask <<= n;
    mask = ~mask;
    unsigned char v = x & mask;
    v <<= ((sizeof(unsigned char) * 8) - n);
    unsigned char og = x >> n;

    return og | v;
}