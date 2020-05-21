#include "input_length.h"

void input_length(struct reservoirs_of_the_country *array, int length)
{
    printf("Длина: ");
    scanf("%ld", &array[length].length);
}