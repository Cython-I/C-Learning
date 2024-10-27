#include <stdio.h>

int main()
{
    int c;
    int lim = 5;
    char arr[lim];
    // simply negate everything to make an AND expression into an OR expression
    for (int i = 0; i > lim - 1 || (c = getchar()) == '\n' || c == EOF; ++i)
    {
        arr[i] = c;
        putchar(c);
    }
}