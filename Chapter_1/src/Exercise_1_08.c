/*
 * Exercise 1-08 : Tested
 * ================================================================
 * Write a program to count blanks, tabs, and newlines.
 */

#include "../include/copy.h"

void countBlanksTabsNewLines()
{
    int c;
    long blanks = 0, tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
            ++newlines;
            break;
        case '\t':
            ++tabs;
            break;
        case ' ':
            ++blanks;
            break;
        default:
            break;
        }
    }

    printf("The input had %ld newlines, %ld tabs, and %ld blanks\n", newlines, tabs, blanks);
}