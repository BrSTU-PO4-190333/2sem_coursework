#include "out_data.h"

void out_data(struct reservoirs_of_the_country* array, int length)
{
    clear_console(); //очистка консоли

    int length_indices_array = 0;
    int* indices_array = (int*) calloc(length_indices_array, sizeof(int));

    FILE* file_pointer = fopen("indices.txt", "rt");

    if(file_pointer == NULL)
    {
        printf("Индексный файл не может быть прочтен, т. к. он не открылся.\n");
    }
    else
    {
       indices_array = get_indices_array_from_file(indices_array, &length_indices_array);
    }
    fclose(file_pointer);
    
    if (length <= 0)
    {
        printf("Нет данных\n");
        length = 0;
    }
    else
    {
        write_head_table();

        for (int i = 0; i < length; i++)
        {
            print_sep();
            printf("%-4d", i);
            print_sep();
            write_one_element(array, indices_array[i]);
        }
        out_average_values_in_line(array, 0, length-1);
        out_min_values_in_line(array, 0, length-1);
        out_max_values_in_line(array, 0, length-1);
    }
    
    pause_console();
    
    menu(array, length); //вывод меню
}