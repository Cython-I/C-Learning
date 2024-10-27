#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    printf("The range of int is: %d to %d\n", INT_MIN, INT_MAX);
    printf("The range of unsigned int is: 0 to %u\n", UINT_MAX);

    printf("The range for char is: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("The range for unsigned char is 0 to %u\n", CHAR_MAX);

    printf("The range for float is: %f to %f\n", FLT_MIN, FLT_MAX);
    printf("The range for double is %f to %f\n", DBL_MIN, DBL_MAX);
    printf("The range for long double is %Lf to %Lf\n", LDBL_MIN, LDBL_MAX);
}