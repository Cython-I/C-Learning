/*
 * Exercise 2-10 : Tested
 * ================================================================
 * Rewrite the function lower, which converts upper case letters to
 * lower case, with a conditional expression instead of if-else.
 */
 
#include "../include/lower.h"

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

// #include <stdio.h>
// int main()
// {
//     printf("%c\t%c\t%c", lower('C'), lower('a'), lower(33));
// }