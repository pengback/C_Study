//
// Created by aliber on 2018/5/23.
//

#include "auxiliary_means.h"

void init_value(int **value)
{
    printf("printf: \n");
    int i = 0;
    scanf("%d", *value);
//    *value = &i;
    printf("-------------\n%d\n", **value);
}

int *input_sort_array(int** length)
{
    int value[BASE_SIEZ];
    char swap_array[BASE_SIEZ];
    char *swap_p = swap_array;
    printf("请输入等待排序的数组（整数，数值间用空格分隔）：\n");
    int len = 0;
    int *len_p = &len;
    while(1)
    {
        char c = getchar();
        if(c != '\n' && c != ' ')
        {
            *swap_p = c;
            swap_p++;
            *swap_p = '\0';    // 对需要输入的位置初始化
        }
        else
        {
            swap_p = swap_array;
            int v = atoi(swap_array);
            value[len] = v;
            //printf("%d\n", v);
            len++;
            if(c == '\n')
            {
                break;
            }
        }
    }
    printf("输入数值个数：%d\n", len);
    int (*value_p)[len];
    value_p = &value;
    int i = 0;
    int *q = *value_p;
    for(i=0; i<len; i++)
    {
        printf("%d ", (int) *(q+i));
    }
    printf("\n");

    *length = len_p;
//    printf("---------2---------\nlength:%d\n", **length);
    return q;
}

void output_sort_array(int* p, int* len)
{
//    printf("排序数组个数为: %d\n", *len);
    int i = 0;
    printf("排序数组个数为: %d\n", *len);
    for(i=0; i<*len; i++)
    {
        printf("%d ", (int) *(p + i));
    }
    printf("\n");
}

void exchangeValue(int** a, int** b)
{
    **a = **a + **b;
    **b = **a - **b;
    **a = **a - **b;
}


