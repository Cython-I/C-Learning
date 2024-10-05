#include <stdio.h>

void echo();
void verifyEcho();
void printEOF();

int main()
{
    echo();
    //verifyEcho();
    //printEOF();
}

/*
    Echos input
*/
void echo()
{
    int c;                         // use int so we can compare with EOF which is not any valid char type
    while ((c = getchar()) != EOF) // not that != has more precedence than = so need ()
    {
        putchar(c);
    }
}

/*
    Verify that c=getchar() != EOF is 0 or 1
*/
void verifyEcho()
{
    int c;
    int result = (c = getchar()) != EOF;
    if (result != 1 && result != 0)
    {
        printf("An error has occured! Result:%d\n",result);
        return;
    }
    printf("Verifed!\n");
}

/*
    Print value of EOF
*/
void printEOF()
{
    printf("The value of EOF is: %d\n",EOF);
}