#include <stdio.h>

//Deletes all c from s
void squeeze(char s[],int c);
//Deletes any char in s1 that matches any char in s2
void squeeze2(char s1[],char s2[]);
int main()
{
    char s[3] = {'a','c','b'};
    squeeze(s,'c');
    printf("%s\n",s);
}
void squeeze(char s[],int c)
{
    int i, j;
    i = j = 0;
    for(; s[i] != '\0'; i++)
    {
        if(s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void squeeze2(char s1[], char s2[])
{
   //Sounds like an O(n^2) on the top of my head
   
}