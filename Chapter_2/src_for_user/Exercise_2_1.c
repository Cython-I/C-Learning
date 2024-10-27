#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    printf("The range of int is: %d to %d\n", 0, 0);
    printf("The range of unsigned int is: 0 to %u\n", 0);

    printf("The range for char is: %d to %d\n", 0, 0);
    printf("The range for unsigned char is 0 to %u\n", 0);

    printf("The range for float is: %f to %f\n", 0.0f, 0.0f);
    printf("The range for double is %f to %f\n", 0.0, 0.0);
    printf("The range for long double is %Lf to %Lf\n", 0.0l, 0.0l);
}