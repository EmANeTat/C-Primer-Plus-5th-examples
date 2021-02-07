#include<stdio.h>
void difference (double ar[], int size);
int main(void)
{
    double a[] = {1.3, 2.4, 4.1, 5.4, 98.3, 2.3, 4.7, 8.6, 9.9};
    int size = sizeof a / sizeof a[0];
    difference (a, size);

    return 0;
}
void difference (double ar[], int size)
{
    int i, j;
    double t;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
        {
            if (ar[j+1] > ar[j])
            {
                t = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = t;
            }
        }
    for (i = 0; i < size; i++)
        printf ("%.2lf\t", ar[i]);
    printf ("\n%lf\n", ar[0] - ar[0 + size - 1]);
}
