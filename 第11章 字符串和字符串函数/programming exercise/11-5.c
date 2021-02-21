#include <stdio.h>
#include <string.h>
#define SIZE 80
int is_within (char *st, char cha)
{
    char *ptr = st;
    while (*ptr != cha && *ptr != '\0')
        ptr++;
    return *ptr;
}
int main (void)
{
    char str[SIZE];
    char ch;
    int found;

    while (gets (str) && str[0] != '\0')
        {
            while ((ch = getchar ()) != '\n')
                continue;
            found = is_within (str, ch);
            if (found == 0)
                puts ("No");
            else
                puts ("Yes");
        }

    return 0;
}
