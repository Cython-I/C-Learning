/*
 * Exercise 1-12 : Tested
 * ================================================================
 * Write a program that prints its input one word per line.
 */

#include "../include/oneword.h"

void oneWordPerLine()
{
    int currentChar;
    bool prevIsBlank;

    prevIsBlank = false;
    while ((currentChar = getchar()) != EOF)
    {
        if (prevIsBlank && (currentChar == ' ' || currentChar == '\n' || currentChar == '\t'))
        {
            continue;
        }
        if (!prevIsBlank && (currentChar == ' ' || currentChar == '\n' || currentChar == '\t'))
        {
            printf("\n");
            prevIsBlank = true;
            continue;
        }

        printf("%c", currentChar);
        prevIsBlank = false;
    }
}

//TODO remove
int main()
{
    oneWordPerLine();
}