#include <stdio.h>

int atoi2(char s[]);

int main()
{
    //narrowing conversion is fine in this language, may generate warning tho
    int i;
    double d;

    d = 12.3;
    i = d;
    printf("%d\n",i);

    //basic atoi
    char s[] = "1234";
    printf("%d\n",atoi2(s));


}

int atoi2(char s[])
{
    int n;
    n = 0;
    for(int i = 0;s[i] >= '0'&& s[i] <= '9';++i)
    {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}