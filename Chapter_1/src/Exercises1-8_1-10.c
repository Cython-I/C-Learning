#include <stdio.h>
void exercise1_8();
void exercise1_9();
int main()
{
    exercise1_9();
    return 0;
}

void exercise1_8()
{
    int c;
    long blanks = 0, tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\n':
            ++newlines;
            break;
        case '\t':
            ++tabs;
            break;
        case ' ':
            ++blanks;
            break;
        default:
            break;
        }
    }

    printf("The input had %ld newlines, %ld tabs, and %ld blanks\n", newlines, tabs, blanks);
}

// Write a program to copy its input to its output,replacing wach string of one or more blanks by a single blank
void exercise1_9()
{
    for (int c = 0; (c = getchar()) != EOF;)
    {
        putchar(c);
    }
}