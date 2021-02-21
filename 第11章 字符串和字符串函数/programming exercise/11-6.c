#include <stdio.h>
#include <string.h>
#define SIZE 81
char *mystrncpy (char s1[], char s2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        s1[i] = s2[i];
        if (strlen (s2) < n)
            s2[n] = '\0';
    }

    return s1;
}

int main (void)
{
    char str1[SIZE];
    char str2[SIZE];
    gets (str2);

    puts (mystrncpy (str1, str2, 5));

    return 0;
}
