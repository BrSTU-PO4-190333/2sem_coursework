#include "sort_field_name.h"

void sort_field_name(struct reservoirs_of_the_country *array, int length, int* indices_array)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (strcmp(array[indices_array[i]].name, array[indices_array[j]].name) < 0)
            {
                int_swap(&indices_array[i], &indices_array[j]);
            }
        }
    }
    
}