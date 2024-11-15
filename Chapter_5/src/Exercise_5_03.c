/*
 * Exercise 5-3 : Not Tested
 * ================================================================
 * Write a pointer version of the function strcat, copies string t to the end of str s
 */
#include <stdio.h>
#include <string.h>

void strcats(char* s, char* t)
{
    while (*s != '\0')
        s++;

    while (*t != '\0')
        *s++ = *t++;

    *s = '\0';
}
int main(void)
{
    char s[10] = "hi"; /* Make sure s has enough space && S must be declared as an array, since a ptr to a literal is
                          just pointing to a const literal that cannot in itself be modified */
    char* t = " tom";

    strcats(s, t); // Concatenate t to s
    printf("%s\n", s); // Print the result
    return 0;


}
