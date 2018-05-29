//
// Created by aliber on 2018/5/23.
//

#ifndef SORT_AUXILIARY_MEANS_H
#define SORT_AUXILIARY_MEANS_H


#include <stdio.h>
#include <stdlib.h>

#define BASE_SIEZ 100

int *input_sort_array(int** length);
void output_sort_array(int* array, int* length);
void init_value(int** v);

/**
 * 交换两个数字的值
 * @param a
 * @param b
 */
void exchangeValue(int** a, int** b);


#endif //SORT_AUXILIARY_MEANS_H
