/*
 * Exercise 1-3 : Not Tested
 * ================================================================
 * Modify the temperature conversion program to print a heading above the table.
 */

#include "../include/temp.h"

void fahrenheitToCelsius()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temp table
    upper = 300; // upper limit
    step = 20;   // step size

    fahr = lower;
    printf("Fahrenheit-Celsius table\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int main()
{
    fahrenheitToCelsius();
}