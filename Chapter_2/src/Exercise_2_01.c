#include "../include/ranges.h"
#include <float.h>
#include <math.h>

// Printing the ranges gets in the way of testing
//  #include <stdio.h>
//  int main()
//  {
//      printf("The Standard Header Ranges:\n");

//     printf("The range for char is: %d to %d\n", CHAR_MIN, CHAR_MAX);
//     printf("The range for signed char is: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
//     printf("The range for unsigned char is 0 to %u\n", UCHAR_MAX);

//     printf("The range of signed short is: %d to %d\n", SHRT_MIN, SHRT_MAX);
//     printf("The range of unsigned short is: 0 to %u\n", USHRT_MAX);

//     printf("The range of int is: %d to %d\n", INT_MIN, INT_MAX);
//     printf("The range of unsigned int is: 0 to %u\n", UINT_MAX);

//     printf("The range of signed long is: %ld to %ld\n", LONG_MIN, LONG_MAX);
//     printf("The range of unsigned long is: 0 to %lu\n", ULONG_MAX);

//     printf("The range for float is: %.2f to %.2f\n", FLT_MIN, FLT_MAX);
//     printf("The range for double is %.2e to %.2e\n", DBL_MIN, DBL_MAX);
//     printf("The range for long double is %Le to %Le\n", LDBL_MIN, LDBL_MAX);
//     // Note on floats requires knowledge of the IEEE 754 standard....yeah no
//     return 0;
// }

void getCharRanges(int *signed_min, int *signed_max, unsigned int *unsigned_max)
{
    unsigned char bits = sizeof(unsigned char) * 8;
    *unsigned_max = pow(2, bits) - 1;
    *signed_min = -1 * (pow(2, bits - 1));
    *signed_max = (pow(2, bits - 1)) - 1;
}

void getShortRanges(int *signed_min, int *signed_max, unsigned int *unsigned_max)
{
    unsigned short bits = sizeof(unsigned short) * 8;
    *unsigned_max = pow(2, bits) - 1;
    *signed_min = -1 * (pow(2, bits - 1));
    *signed_max = (pow(2, bits - 1)) - 1;
}

void getIntRanges(int *signed_min, int *signed_max, unsigned int *unsigned_max)
{
    unsigned int bits = sizeof(int) * 8;
    *unsigned_max = pow(2, bits) - 1;
    *signed_min = -1 * (pow(2, bits - 1));
    *signed_max = (pow(2, bits - 1)) - 1;
}

void getLongRanges(long int *signed_min, long int *signed_max, unsigned long int *unsigned_max)
{
    unsigned long int bits = sizeof(unsigned long) * 8;
    // Note needed to cast to long double here
    *unsigned_max = (long double)pow(2, bits) - 1.0;
    *signed_min = -1 * ((long double)(pow(2, bits - 1)));
    *signed_max = (long double)(pow(2, bits - 1)) - 1;
}
