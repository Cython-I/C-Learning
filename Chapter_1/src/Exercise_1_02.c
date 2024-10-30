/*
 * Exercise 1-2 Not Tested
 * ================================================================
 * Experiment to find out what happens when prints's argument string contains \c, where c is some character not listed above.
 */

#include <stdio.h>
int main()
{
    printf("test\etest\ntest\atest\ntest\vtest\ntest\ftest\ntest\rtest\n");
}
