#include <stdio.h>

#define MAXLINE 1000

//Gets a line from the input up till limit returns the length
int getLine(char s[]);

int main()
{
    int length = 0;
    char currentLine[MAXLINE];

    while((length = getLine(currentLine)) > 0)
    {
        if(length < 80)//magic number...kinda
        {
            continue;
        }
        printf("%s",currentLine);
    }
}

int getLine(char s[])
{
    int index,currChar,charCount;
    index = currChar = charCount = 0;

    //while within length, not endoffile and not the end of the line we are a line
    while(charCount < MAXLINE-1 && ((currChar = getchar()) != EOF) && currChar != '\n')
    {
        s[charCount] = currChar;
        ++charCount;

    }
    if(currChar == '\n')
    {
        s[charCount] = '\n';
        ++charCount;
    }
    s[charCount] = '\0';

    return charCount;
}
