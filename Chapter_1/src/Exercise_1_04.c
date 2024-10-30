/*
 * Exercise 1-04 : Not Tested
 * ================================================================
 * Write a program to print the corresponding Celsius to Fahrenheit table.

 */
#include "../include/temp.h"

void celsiusToFahrenheit()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temp table
    upper = 300; // upper limit
    step = 20;   // step size

    celsius = lower;
    printf("Celsius-Fahrenheit table\n");
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f_C\t%6.1f_F\n", celsius, fahr);
        celsius += step;
    }
}

int main()
{
    celsiusToFahrenheit();
}