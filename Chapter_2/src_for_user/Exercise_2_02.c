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
}

// int main()
// {
//     int c;
//     int lim = MAXLINE;
//     char s[MAXLINE];

//     loopNoAndNoOR(s, lim);
// }