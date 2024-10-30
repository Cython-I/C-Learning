/*
 * Exercise 2-3 : Tested
 * ================================================================
 * Write the function htoi(s), which converts a string of hexadecimal digits
 * (including an optional 0x or 0X) into its equivalent integer value.
 * The allowable digits are 0 through 9, a - f , and A - F
 */

#include "../include/htoi.h"
#define COPYSIZE 256
#define BASE 16.0

/*
 * Helper function that returns whether a char is in hex or not
 */
bool isHex(char c)
{
    return isdigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
}

/*
 * This Preprocess is not terribly important for learning but I will elaborate. I want my test to handle
 * poorly formatted input, such as "   0x54    ". To do this, I need to parse, the string of all remove chars
 * this is normally simple
 */
void preprocessString(char str[], char remove)
{
    if (strlen(str))
    {
        int i, j;
        for (i = j = 0; str[i] != '\0'; i++)
        {
            if (str[i] != remove)
            {
                str[j] = str[i];
                j++;
            }
        }
        str[j] = '\0';
    }
}

int htoiModified(char s[])
{
    return -1;
}

// #include <stdio.h>
// int main()
// {
//     printf("Result jh should be -1 it is: %d\nResult 0x54 should be 84 it is %d\nResult 0XdC should be 220 it is% d\n
//     ",
//            htoiModified("jh"), htoiModified("   0x54   "), htoiModified("0XdC"));
// }