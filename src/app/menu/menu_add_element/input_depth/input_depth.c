#include "input_depth.h"

void input_depth(struct reservoirs_of_the_country *array, int length)
{
    printf("Глубина: ");
    scanf("%ld", &array[length].depth);
}