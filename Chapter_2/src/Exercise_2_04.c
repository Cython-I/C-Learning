/*
 * Exercise 2-4 : Tested
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
    // Sounds like an O(n^2) on the top of my head, atleast without a set, or hash map or something
    for (int i = 0; s1[i] != '\0'; i++) // pillow
    {
        for (int j = 0; s2[j] != '\0'; j++) // pie
        {
            if (s1[i] == s2[j])
            {
                s1[i] = ' '; // pillow    pie    ->    __llow  but doesnt really squeeze...
            }
        }
    }
    squeeze(s1, ' '); // hehe cheap, but hey it does the job
}

// #include <stdio.h>
// int main()
// {
//     char s1[] = {"pillow"};
//     char s2[] = {"pie"};
//     altSqueeze(s1, s2);
//     printf("%s", s1);
// }