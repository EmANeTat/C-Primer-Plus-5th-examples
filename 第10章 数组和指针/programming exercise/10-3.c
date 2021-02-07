#include<stdio.h>
int max (int ar[], int size);
int main(void)
{
    int a[] = {1, 4, 5, 3, 6, 7, 9};
    int size = sizeof (a) / sizeof (a[0]);

    max (a, size);

    return 0;
}


/*
int max (int ar[], int size)
{
    int maxnum = ar[0];
    int t,i;
    for (i = 0; i < size; i++)
    {
        if (maxnum < ar[i])
        {
          t = maxnum;
          maxnum = ar[i];
          ar[i] = t;
        }
    }

    printf ("%d\n", maxnum);
}
*/
int max (int ar[], int size) // 冒泡排序
{
    int i,j,t;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
        {
            if (ar[j] < ar[j+1])
            {
                t = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = t;
            }
        }

        printf ("%d\n", ar[0]);
}
