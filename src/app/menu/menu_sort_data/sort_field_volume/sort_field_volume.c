#include "sort_field_volume.h"

void sort_field_volume(struct reservoirs_of_the_country *array, int length, int* indices_array)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (array[indices_array[i]].volume < array[indices_array[j]].volume)
            {
                int_swap(&indices_array[i], &indices_array[j]);
            }
        }
    }  
}