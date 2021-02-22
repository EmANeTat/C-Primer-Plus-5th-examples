#include <stdio.h>
#include <string.h>
#define SIZE 81
#define MAX 10
void put_origin (char *str)
{
    int i;
    for (i = 0; i < MAX; i++)
        puts (str[i]);
}

void put_ASCII (char *str)
{
    int i,j,index;
    char *temp;
    char *ptr[MAX];
    for (index = 0; index < MAX; index++)
        ptr[index] = str[index];
    for (i = 0; i < MAX - 1; i++)
        for (j = 0; j < MAX - i - 1; j++)
        {
            if (ptr[j][0] > ptr[j + 1][0])
            {
                temp = ptr[j][0];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }

    for (i = 0; i < MAX; i++)
        puts (ptr[i]);

}
int main (void)
{
    char strings[MAX][SIZE] = {"hello", "goodbye", "first", "second", "thrid"};
    int choose;
    puts ("1.输出初始字符串列表");
    puts ("2.按ASCII顺序输出字符串");
    puts ("3.按长度递增顺序输出字符串");
    puts ("4.按字符串中第一个单词的长度输出字符串");
    puts ("5.退出");
    puts ("请选择：");
    scanf ("%d", &choose);

    switch (choose)
    {
        case 1 :
            put_origin (strings);
            break;
        case 2 :
            put_ASCII (strings);
            break;
        case 3 :
            //put_length (strings);
            break;
        case 4 :
            //put_1stwordlength (strings);
            break;
        default :
            puts ("已退出");
            break;
    }

    return 0;
}
