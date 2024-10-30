/*
 * Exercise 1-05 : Not Tested
 * ================================================================
 * Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.

 */

#include "../include/temp.h"

void reverseFtoC()
{
    printf("Reverse Fahrenheit-Celsius table\n");

    for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3d_F\t%6.1f_C\n", fahr, celsius);
    }
}
int main()
{
   reverseFtoC();
}