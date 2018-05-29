//
// Created by aliber on 2018/5/29.
//
// 冒泡排序
//

#include "bubble_sort.h"

int *do_bubble_sort(int *array, int *length)
{
    int *head = array;
    int *current = array;
    int *next = NULL;
    int i=0;
    int j=0;

    for(i=0; i < *length; i++)
    {
        for(j=0; j<*length-1; j++)
        {
            next = current +1;
            if(*current > *next)
            {
                exchangeValue(&current, &next);
            }
            current = current + 1;
        }
        current = head;
    }

    return head;
}