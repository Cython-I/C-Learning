/*writw a program to fold input lines into two or more shoirter liunes adter the last non-blank char
that occurs before the n-th colum of input
...make sure to do something smart for lines that are very long and if no blanks or tabs before column
*/
#include <stdio.h>

#define WRAPCOUMN 14

void fold();

int main()
{
    fold();
}

void fold()
{
    int c;
    int currentColumn = 0;
    
    int lastSpaceColumn = -1;
    char arr[WRAPCOUMN];

    while((c=getchar()) != EOF)
    {
        arr[currentColumn % WRAPCOUMN] = c;

        if(c == ' ')
        {
            lastSpaceColumn = currentColumn % WRAPCOUMN;
            
        }
        if(currentColumn % WRAPCOUMN == 0)
        {
               //go back to last space, place new line if not possible, newline should split the word
            if(lastSpaceColumn > - 1)
            {

                lastSpaceColumn = -1;
            }

        }
        ++currentColumn;
    }
}