#include <stdbool.h>
#include <stdio.h>

#define VISIBLEASCIISTART 32 + 1
#define VISIBLEASCIIEND 126 + 1
void differenceHistogram();
void drawBar(int length);

int main()
{
    differenceHistogram();
}

void differenceHistogram()
{
    int c;
    int length = 0;

    int characters[VISIBLEASCIIEND];
    // init array
    
    for (int i = VISIBLEASCIISTART; i < VISIBLEASCIIEND ; ++i)
    {
        characters[i] = 0;
    }
       
    while ((c = getchar()) != EOF)
    {
        if (c >= VISIBLEASCIISTART && c < VISIBLEASCIIEND )
        {
            ++characters[c];
        }
    }

    for (int i = VISIBLEASCIISTART; i < VISIBLEASCIIEND ; ++i)
    {
        // printf("%d | %d\n",i,lengths[i]);
        printf("%c | ", i);
        drawBar(characters[i]);
    }
}

void drawBar(int length)
{
    for (int i = 0; i < length; ++i)
    {
        printf("*");
    }
    printf("\n");
}