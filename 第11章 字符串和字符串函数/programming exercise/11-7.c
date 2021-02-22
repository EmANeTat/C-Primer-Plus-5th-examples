#include <stdio.h>
#include <string.h>
char *string_in (char s1[], char s2[])
{
    int i,found;
    int len1 = strlen (s1);
    int len2 = strlen (s2);
    char *ptr1 = s1;
    char *ptr2 = s2;
    if (len1 < len2)
        return NULL;
    else
        for (i = 0; i < len1; i++, ptr1++)
        {
            found = strncmp (ptr1, ptr2, len2);
            if (found == 0)
            {
                break;
                return ptr1;
            }
        }

        //printf ("%d\n", found);
    if (found == 0)
        return ptr1;
    else
        return NULL;
}
int main (void)
{
    char ar1[] = "hello";
    char ar2[] = "hello";

    char *find;
    find = string_in (ar1, ar2);
    //printf ("%p\n", find);

    if (find)
        puts ("Found!!");
    else
        puts ("Not found.");


    return 0;
}
