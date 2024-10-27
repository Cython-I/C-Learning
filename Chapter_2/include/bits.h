#pragma once
// returns x with the n bits that begin at position p set to the rightmost n bits of y leaving the other bits unchanged
// using unsigned char as easier to workout on paper 8 vs 16 bits
unsigned setbits(unsigned char x, int p, int n, unsigned char y);

// returns x with the n bits that begin at position p to the n spaces. inverted
unsigned invert(unsigned char x, int p, int n);

// I will assume it means to treat the bits as a circular array of sorts, kinda my only issue with k&r
int rightrot(int x, int n);

// not sure why use ints, as this gets the same point across and is easier to debug, but did this for validation of the
// above
unsigned char rightrotsimple(unsigned char x, int n);
