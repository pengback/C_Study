#include <stdio.h>
#include <stdlib.h>
#include "auxiliary_means.h"
#include "bubble_sort.h"

int main()
{

    int *length_p = (int *)malloc(sizeof(int));
    int *p = input_sort_array(&length_p);
    int length = *length_p;

    // sort
    p = do_bubble_sort(p, &length);

    output_sort_array(p, &length);

    return 0;
}