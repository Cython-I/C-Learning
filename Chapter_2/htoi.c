#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
// simply recreate htoi
int htoi2(char s[]);

int main()
{
    // test
    printf(
        "Result 96A should be 2410 it is: %d\nResult 0x54 should be 84 it is %d\nResult 0XDC should be 220 it is %d\n",
        htoi2("96A"), htoi2("0x54"), htoi2("0XDC"));
}

int htoi2(char s[])
{
    // we know the base is 16 so 54 is really just (4 * 16^0) + (5*16^1) = 84
    // Going to make a lot of assumptions... strlen
    int len = strlen(s);
    char c;
    int end = -1;
    int start = len -1;
    int p = 0;
    double base = 16.0;
    int result = 0;

    

    // Check if 0x is present size must atleast be 2
    if (len >= 2)
    {
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        {
            end = 1;
        }
    }
    while (start > end)
    {
        c = s[start];
        if (isdigit(c) || (c >= 'A' && c <= 'F'))
        {
            double digit = 0;
            if((c >= 'A' && c <= 'F'))
            {
                digit = 10 + (c - 'A');

            }else{
                digit = c - '0';
            }
            
            result += digit * pow(base, p); // -lm
        }
        else
        {
            printf("AN ERROR HAS OCCURED %c is not a digit!\n",c);
            return -1;
        }
        --start;
        ++p;
    }

    return result;
}