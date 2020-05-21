#include "sort_field_water_type.h"

void sort_field_water_type(struct reservoirs_of_the_country *array, int length, int* indices_array)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (array[indices_array[i]].water_type < array[indices_array[j]].water_type)
            {
                int_swap(&indices_array[i], &indices_array[j]);
            }
        }
    }  
}