/* sum_arr2.c -- 对一个数组的所有元素求和 */
#include<stdio.h>
#define SIZE 10
int sump (int * start, int * end);
int main (void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sump (marbles, marbles + SIZE);
    printf ("The total number of marbles is %ld.\n", answer);
    return 0;
}
/* 使用指针算术 */
int sump (int * start, int * end)
{
    int total = 0;
    while (start < end)
    {
        total = total + *start;
        start++;
        // 或者total = total + *start++
    }

    return total;
}
