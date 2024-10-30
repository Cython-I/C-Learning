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
    char c;
    int start, end, len;
    int power, result;
    double base;

    /*
     * We are using string literals in the test, so I can NOT modify the string directly
     * This is where the strcpy function comes in handy. I simply copy s over to sCopy and use the copy which is
     * modifiable. I limited the size to COPYSIZE, if you go over that that's on you buddy
     */
    char sCopy[COPYSIZE];
    strcpy(sCopy, s);
    preprocessString(sCopy, ' ');

    len = strlen(sCopy);
    start = len - 1;
    end = -1;
    power = result = 0;
    base = BASE;

    if (len == 0)
    {
        return -1;
    }
    /*Check if 0x is present size must atleast be 2*/
    if (len >= 2)
    {
        if (sCopy[0] == '0' && (toupper(sCopy[1]) == 'X'))
        {
            end = 1;
        }
    }

    while (start > end)
    {
        c = sCopy[start];
        if (isHex(c))
        {
            double digit = 0;
            if ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'))
            {
                c = toupper(c);
                digit = 10 + (c - 'A');
            }
            else
            {
                digit = c - '0';
            }

            result += digit * pow(base, power);
        }
        else
        {
            return -1;
        }
        --start;
        ++power;
    }

    return result;
}

// #include <stdio.h>
// int main()
// {
//     printf("Result jh should be -1 it is: %d\nResult 0x54 should be 84 it is %d\nResult 0XdC should be 220 it is% d\n
//     ",
//            htoiModified("jh"), htoiModified("   0x54   "), htoiModified("0XdC"));
// }