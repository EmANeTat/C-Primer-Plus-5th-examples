#include<stdio.h>
int maxindex (double ar[], int size);
int main(void)
{
    double a[] = {2.3, 3.5, 1.3, 4.4, 5.5, 6.7, 8.3};
    int size = sizeof a / sizeof a[0];
    maxindex (a, size);

    return 0;
}
int maxindex (double ar[], int size)
{
    int i,j;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (ar[i] > ar[j])
                count++;
        }
        if (count == 6)
            printf ("%d", i);
        count = 0;
    }
}
