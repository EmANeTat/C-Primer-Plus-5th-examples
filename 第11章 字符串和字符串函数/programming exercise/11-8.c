#include <stdio.h>
#include <string.h>
#define SIZE 81


void reverse (char str[])
{
    int len = strlen (str);
    char ar1[SIZE];
    strncpy (ar1, str, len);

    int i;
    for (i = 0; i < len; i++)
        str[i] = ar1[len - 1 - i];
}

int main (void)
{
    char strings[SIZE] = "hello";
    reverse (strings);
    puts (strings);

    return 0;

}
