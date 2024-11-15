#define ALLOOCSIZE 10000 // avaliable space

static char allocbuf[ALLOOCSIZE]; // storage for alloc
static char *allocp = allocbuf;   // next free pos (this is similar to saying = &allocbuf[0])

char *alloc(int n) // return ptr to n characters
{
    if (allocbuf + ALLOOCSIZE - allocp >= n) // if it fits
    {
        allocp += n;
        return allocp - n; // old p
    }
    else
    {
        return 0;
    }
}

void afree(char *p) // free storage pointed to by p
{
    if (p >= allocbuf && p < allocbuf + ALLOOCSIZE)
    {
        allocp = p;
    }
}
