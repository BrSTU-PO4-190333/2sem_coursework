#include "input_volume.h"

void input_volume(struct reservoirs_of_the_country *array, int length)
{
    printf("Объем: ");
    scanf("%ld", &array[length].volume);
}