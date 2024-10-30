/*
 * Exercise 2-2 : Not Tested
 * ================================================================
 * Write a loop equivalent to the for loop above without using && or ||.
 * Loop above originally from Chapter 1.9 Character Arrays and is as follows:
 * for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
 *       s[i] = c;
 */

#include "../include/loop.h"

#define MAXLINE 5
void loopNoAndNoOR(char s[], int lim)
{
    int c;
    int i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            break;
        }
        if (i > lim - 1)
        {
            break;
        }

        s[i] = c;
        // Just here so we dont need to do extra stuff with ending strings correctly, I am a bit lazy and
        // this gets the general idea across
        putchar(c);
        ++i;
    }
}

// int main()
// {
//     int c;
//     int lim = MAXLINE;
//     char s[MAXLINE];

//     loopNoAndNoOR(s, lim);
// }