#include <stdio.h>
#define LEN 5
void getnchar (char *st)
{
    int i;
    char ch;
    while ((ch = getchar()) != EOF)
    for (i = 0; (ch = getchar ()) != EOF; i++)
        st[i] = ch;
}

int main (void)
{
    char str[LEN];
    getnchar (str);
    puts (str);

    return 0;
}
