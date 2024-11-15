#include <stdio.h>
#include <string.h>

int strcmp_mac2(char *s, char *t)
{
    for (; *s == *t; s++, t++)
    {
        if (*s == '\0')
        {
            return 0;
        }
    }
    return *s - *t;
}
int main()
{
    printf("%d\n", strcmp_mac2("a", "b"));
}
