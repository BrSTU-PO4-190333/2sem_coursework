#include "del_data_from.h"

void del_data_from(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    write_head_table();
    for (int i = 0; i < length; i++)
    {
        print_sep();
        printf("%-4d", i);
        print_sep();
        write_one_element(array, i);
    }

    int delete_id;
    printf("С какого элемента удалить: ");
    scanf("%d", &delete_id);
    if (delete_id < length && delete_id >= 0) //если удаляемый индекс меньше размера строки
    {
        int iterations_need = length - delete_id;

        for (int i = 0; i < iterations_need; i++)
        {
            length--;
            for (int i = delete_id; i < length; i++)
            {
                array[i] = array[i + 1];
            }
        }

        write_head_table();
        for (int i = 0; i < length; i++)
        {
            print_sep();
            printf("%-4d", i);
            print_sep();
            write_one_element(array, i);
        }

        make_indiced_array(length);
    }
    else
    {
        printf("Индекс выходит за пределы массива\n");
    }

    pause_console();

    menu(array, length);
}