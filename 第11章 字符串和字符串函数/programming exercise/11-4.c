#include <stdio.h>
#include <string.h>
#define SIZE 80
char *returnchar (char *st, char cha)
{
    char *ptr;
    ptr = strchr (st, cha);
    //puts (ptr);
    if (ptr)
        return ptr;
    else
        return NULL;
}

int main (void)
{
    char str[SIZE];
    char ch;

    while (gets (str) != NULL && (ch = getchar ()) != NULL)
        puts (returnchar (str, ch));

    return 0;
}
