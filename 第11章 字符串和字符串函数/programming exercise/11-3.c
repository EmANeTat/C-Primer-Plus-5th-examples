#include <stdio.h>
#include <string.h>
void getword (char *str)
{
    char word[10];
    int i = 0;
    for (i = 0; str[i] != ' '; i++);
    //printf ("%d", i);
    strncpy (word, str, i); // 如果要复制的字符数小于target的大小，strncpy 会自动在target末尾添加\0
    //word[i] = '\0';

    puts (word);


}
int main (void)
{
    char strings[40];
    gets (strings);
    getword (strings);

    return 0;
}
