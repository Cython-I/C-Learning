/*
 * Exercise 2-4
 * ================================================================
 * Write an alternative version of squeeze(s1,s2) that deletes each
 * character in s1 that matches any character in the string s2.
 */
#include "../include/squeeze.h"

void squeeze(char s[], int c)
{
    int i, j;
    i = j = 0;
    for (; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void altSqueeze(char s1[], char s2[])
{
}

// #include <stdio.h>
// int main()
// {
//     char s1[] = {"pillow"};
//     char s2[] = {"pie"};
//     altSqueeze(s1, s2);
//     printf("%s", s1);
// }