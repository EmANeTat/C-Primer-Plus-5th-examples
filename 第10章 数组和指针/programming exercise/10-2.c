#include<stdio.h>
#define SIZE 5
void copy_arr (double ar1[], double ar2[], int size);
void copy_ptr (double * ar1, double * ar2, int size);
int main(void)
{
    int i;
    double source[SIZE]  ={1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];

    copy_arr (source, target1, SIZE);
    copy_ptr (source, target2, SIZE);
    /*
    for (i = 0; i < SIZE; i++)
        printf ("%f\t", target1[i]);

    printf ("\n");

    for (i = 0; i < SIZE; i++)
        printf ("%f\t", target2[i]);

    */
    return 0;
}

void copy_arr (double ar1[], double ar2[], int size)
{
    int i;
    for (i = 0;i < size; i++)
        ar2[i] = ar1[i];
}
void copy_ptr (double * ar1, double * ar2, int size)
{
    int i;
    for (i = 0; i < size; i++)
        *(ar2 + i) = *(ar1 + i);
}
