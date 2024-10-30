/*
 * Exercise 1-06 : Not Tested
 * ================================================================
 * Verify that the expression getchar() != EOF is 0 or 1.

 */

#include "../include/eofvalidate.h"

void verifyEcho()
{
    int c;
    int result = (c = getchar()) != EOF;
    if (result != 1 && result != 0)
    {
        printf("An error has occured! Result:%d\n", result);
        return;
    }
    printf("Verifed!\n");
}

int main()
{
verifyEcho();
    
}