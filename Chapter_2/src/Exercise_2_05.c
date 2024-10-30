/*
 * Exercise 2-5
 * ================================================================
 * Write the function any(s1,s2), which returns the first location
 * in a string s1 where any character from the string s2 occurs, or -1 if s1
 * contains no characters from s2. (The standard library function strpbrk does the
 * same job but returns a pointer to the location.)
 */

int any(char s1[], char s2[])
{
    // pretty similar to squeeze2, without more advanced data structures, brute force comes to mind
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}
// #include <stdio.h>
// int main()
// {
//     char s1[] = {"pillow"};
//     printf("f occurs at index: %d in \"pillow\"\nw occurs at index %d in \"pillow\"\n", any(s1, "f"), any(s1, "w"));
// }