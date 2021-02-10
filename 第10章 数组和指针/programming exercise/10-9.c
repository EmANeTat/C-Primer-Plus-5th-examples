#include<stdio.h>
void plus (int ar1[], int ar2[], int ar3[], int size);
int main (void)
{
    int a1[] = {2, 4, 5, 8};
    int a2[] = {1, 0, 4, 6};
    int a3[4] = {0};

    int size = sizeof a1 / sizeof a1[0];

    plus (a1, a2, a3, size);

    int i;
    for (i = 0; i < size; i++)
        printf ("a1[%d] = %d\t", i, a1[i]);
    putchar ('\n');
    for (i = 0; i < size; i++)
        printf ("a2[%d] = %d\t", i, a2[i]);
    putchar ('\n');
    for (i = 0; i <size; i++)
        printf ("a3[%d] = %d\t", i, a3[i]);
    putchar ('\n');
}
void plus (int ar1[], int ar2[], int ar3[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        ar3[i] = ar1[i] + ar2[i];
    }
}
