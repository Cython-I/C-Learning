#include <stdio.h>

#define TABSTOP 4
/*A function that replaces tabs in the input with proper num
of spaces to spacee to the next tab stop*/
void detab();

//A function that replaces strings of blanks with min numver of tabs and blanks to acheive the same result
//favors tab over blank when equal
void entab();

int main()
{
    //  0123456789ABCDEF
    //      T   T   T
    //  .   .      .   .   
    // A   .
    // A      
    printf("0123456789ABCDEF\n");
    entab();
}

void detab()
{
    int c;
    int currCol = 0;
    int nextCol = TABSTOP;
    int spaces = 0;
    
    while((c=getchar()) != EOF)
    {
       
        if(currCol >= nextCol)
        {
            nextCol += TABSTOP;
        }   
        if(c == '\n')
        {
            currCol = 0;
            nextCol = TABSTOP;
            printf("\n");
            continue;
        }
        if(c == '\t')
        {
            while(currCol < nextCol)
            {
                printf(" ");
                ++currCol;
            }
            continue;
        }
        printf("%c",c);

       
        currCol++;
    }
}

void entab()
{
    int c;
    int currCol = 0;
    int nextCol = TABSTOP;
    int spaces = 0;

    while((c=getchar())!= EOF)
    {
        if(c == ' ')
        {
            spaces++;
            continue;
        }

        if(currCol >= nextCol)
        {
            nextCol += TABSTOP;
        }   
        while(spaces > 0)
        {
            int spacesToTab = nextCol - (currCol-1);
            //printf("Space to next tab: %d", spacesToTab);
            if(spaces >= spacesToTab)
            {
                nextCol += TABSTOP;
                currCol += spacesToTab-1;
                spaces-=spacesToTab;
                printf("\\t");
                //continue;
            }
            else 
            {
                spaces--;
                printf("_");
            }
            currCol++;
            if(currCol >= nextCol)
            {
                nextCol += TABSTOP;
            }   
        }
        
        printf("%c",c);
        currCol++;
    }
}

//essentially 0 - tabstopcolumns for chars, once at the end we need to go to the next row
// so for example
/*
0--------------------------------------------tabstop
hello there bob\tWhat's up?
*/
//should become:
/*
0--------------------------------------------tabstop
hello there bob
What's up?
*/
