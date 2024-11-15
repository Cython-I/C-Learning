/*
 * Exercise 5-3
 *================================================================
 * Write a pointer version of the function strcat that we showed in Chapter 2:
 * strcat(s,t) copies the string t to the end of s.
 */

#include <stdio.h>
#include <stdbool.h>

void strcat(char *s, char *t)
{
    while (*s != '\0')
    {
        s++;
    }
    while (*t != '\0')
    {
        *s++ = *t++;
    }
    *s = '\0';
}

// TODO
int main(void)
{
    char s[10] = "hi";
    char t[] = {" tom"};

    strcat(s, t); // Concatenate t to s
    printf("str: %s\n", s);

    return 0;
}
