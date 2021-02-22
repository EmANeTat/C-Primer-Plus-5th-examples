#include <stdio.h>
#include <string.h>
#define SIZE 81
void deletespace (char str[])
{
    int i = 0;
    char ar[SIZE];
    char *ptr = ar;

    int len = strlen (str);
    for (i = 0; i < len; i++)
    {
        if (str[i] != ' ')
            *ptr++ = str[i];
    }

    puts (ar);

}

int main (void)
{
    char strings[SIZE] = "hello, my friends";

    deletespace (strings);

    return 0;
}
