#include "./write_table.h"

void write_table(struct reservoirs_of_the_country *array, int length, int* indices_array, int iterations)
{
    clear_console();

    if (length < iterations)
    {
        printf("Нет данных\n");
        length = 0;
    }
    else
    {
        write_head_table();

        for (int i = 0; i < length; i++)
        {
            write_one_element(array, indices_array[i]);
        }
    }
    
    pause_console();
}