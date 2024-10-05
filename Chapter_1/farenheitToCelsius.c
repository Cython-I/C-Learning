#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20 .... 300 */
#define LOWER 0
#define UPPER 300
#define STEP 20

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
    fahrenheitToCelsius();
    celsiusToFahrenheit();
    reverseFtoC();
}