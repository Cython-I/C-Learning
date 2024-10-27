#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>

void calculateCharRanges();

int main()
{
    printf("The Standard Header Ranges:\n");
    // Char is a bit intresting, since char itself can be implemented as signed or unsigned we have some redudancy
    /*
        CHAR_MIN CHAR_MAX     //Machine Dependent
        SCHAR_MIN SCHAR_MAX   //Signed
        0         UCHAR_MAX   //Unsigned
    */

    printf("The range for char is: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("The range for signed char is: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("The range for unsigned char is 0 to %u\n", UCHAR_MAX);

    // Note short -> short int
    printf("The range of signed short is: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("The range of unsigned short is: 0 to %u\n", USHRT_MAX);

    printf("The range of int is: %d to %d\n", INT_MIN, INT_MAX);
    printf("The range of unsigned int is: 0 to %u\n", UINT_MAX);

    // Note long -> long int
    printf("The range of signed long is: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("The range of unsigned long is: 0 to %lu\n", ULONG_MAX);

    // Note we now have long long which is in C99, but that is not in K&R (C89...I think)

    printf("The range for float is: %.2f to %.2f\n", FLT_MIN, FLT_MAX);
    printf("The range for double is %.2e to %.2e\n", DBL_MIN, DBL_MAX);
    printf("The range for long double is %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    // Calculate all the limits:
    // This requires a bit of understanding of signed and unsigned bits. check the notes
    printf("\nThe Caluclated Ranges:\n");
    calculateCharRanges();
    // May come back an implement a test for this, but kind of time consumming ...
}

void calculateCharRanges()
{
    // unsigned
    unsigned char bits = sizeof(unsigned char) * 8;
    unsigned char max = pow(2, bits) - 1;
    printf("The calculated range of unsigned char is: 0 to %u\n", max);

    // signed
}