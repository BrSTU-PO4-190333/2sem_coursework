#include "write_table_on_range.h"

void write_table_on_range(struct reservoirs_of_the_country* array, int left_border, int right_border)
{
    for (int i = left_border; i <= right_border; i++)
    { 
        printf("%d", i);
        write_one_element(array, i);
    }
}