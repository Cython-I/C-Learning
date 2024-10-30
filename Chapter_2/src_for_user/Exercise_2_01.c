/*
 * Exercise 2-1 : Tested
 * ================================================================
 * Write a program to determine the ranges of char, short, int, and
 * long variables, both signed and unsigned, by printing appropriate values from
 * standard headers and by direct computation. Harder if you compute them:
 * determine the ranges of the various floating-point types.
 */

#include "../include/ranges.h"
#include <float.h>
// #include <math.h>

void getCharRanges(int *signed_min, int *signed_max, unsigned int *unsigned_max)
{
}

void getShortRanges(int *signed_min, int *signed_max, unsigned int *unsigned_max)
{
}

void getIntRanges(int *signed_min, int *signed_max, unsigned int *unsigned_max)
{
}

void getLongRanges(long int *signed_min, long int *signed_max, unsigned long int *unsigned_max)
{
}

// Printing the ranges gets in the way of testing
//  #include <stdio.h>
//  int main()
//  {
//      printf("The Standard Header Ranges:\n");

//     printf("The range for char is: %d to %d\n", 0, 0);
//     printf("The range for signed char is: %d to %d\n", 0, 0);
//     printf("The range for unsigned char is 0 to %u\n", 0);

//     printf("The range of signed short is: %d to %d\n", 0, 0);
//     printf("The range of unsigned short is: 0 to %u\n", 0);

//     printf("The range of int is: %d to %d\n", 0, 0);
//     printf("The range of unsigned int is: 0 to %u\n", 0);

//     printf("The range of signed long is: %ld to %ld\n", 0, 0);
//     printf("The range of unsigned long is: 0 to %lu\n", 0);

//     printf("The range for float is: %.2f to %.2f\n", 0.0, 0.0);
//     printf("The range for double is %.2e to %.2e\n", 0.0, 0.0);
//     printf("The range for long double is %Le to %Le\n", 0.0, 0.0);
//     // Note on floats requires knowledge of the IEEE 754 standard....yeah no
//     return 0;
// }