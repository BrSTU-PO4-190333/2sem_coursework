#include "input_width.h"

void input_width(struct reservoirs_of_the_country *array, int length)
{
    printf("Ширина: ");
    scanf("%ld", &array[length].width);
}