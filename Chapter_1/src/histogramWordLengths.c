#include <stdbool.h>
#include <stdio.h>

#define OUTOFRANGE 11
#define ARRAYSIZE (OUTOFRANGE + 1)

void printWordHistogram();
void drawBar(int length);

int main()
{
    printWordHistogram();
}

// Prints a histogram of the lengths of words in its input
void printWordHistogram()
{
    int c;
    int length = 0;
    bool isWord = true;

    // Without using vectors, or a dynamic ds, we need a scopped bound for array
    // 0-10 with 11 being for all values OUTOFRANGE
    int lengths[ARRAYSIZE];
    // init array
    for (int i = 0; i < ARRAYSIZE; ++i)
    {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            isWord = false;
        }
        else
        {
            isWord = true;
        }

        if (isWord)
        {
            length++;
        }
        else
        {
            // printf("word length: %d\n",length );
            if (length > OUTOFRANGE)
            {
                ++lengths[OUTOFRANGE];
            }
            else
            {
                ++lengths[length];
            }
            length = 0;
        }
    }

    for (int i = 0; i < ARRAYSIZE; ++i)
    {
        if (i == OUTOFRANGE)
        {
            // printf("Out of Range | %d\n",lengths[i]);
            printf("Out of range | ");
            drawBar(lengths[i]);
            break;
        }
        // printf("%d | %d\n",i,lengths[i]);
        printf("%d | ", i);
        drawBar(lengths[i]);
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