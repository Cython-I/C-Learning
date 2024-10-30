#include <stdio.h>

#define MAXLINE 1000
//reverses input array
void reverse(char input[],int len);
//gets a line of input, and returns its length
int get_line(char c[]);

int main()
{

int length;
char line[MAXLINE];

while((length = get_line(line)) > 0)
{
    reverse(line,length);
    printf("%s",line);
}
}

void reverse(char input[],int len)
{
int start = 0;
int end = len - 2;
char temp;

while(start < end)
{
temp = input[start];
input[start] = input[end];
input[end] = temp;
++start;
--end;
}

}

int get_line(char c[])
{
    int size = 0;
    int currChar = '\0';
    while(size < MAXLINE-1 && ((currChar = getchar()) != EOF) && currChar != '\n')
    {
        c[size] = currChar;
        ++size;
    }
    if(currChar == '\n')
    {
        c[size] = '\n';
        ++size;
    }
    c[size] = '\0';
    return size;
}