#include "del_one_element.h"

void del_one_element(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    write_head_table();
    for(int i = 0; i < length; i++)
    {
        print_sep();
        printf("%-4d", i);
        print_sep();
        write_one_element(array, i);
    }

    int delete_id = 0;
    printf("Какой элемент удалить: ");
    scanf("%d", &delete_id);

    if (delete_id < length && delete_id >= 0) //если удаляемый индекс меньше размера строки
    {
        length--;

        for (int i = delete_id; i < length; i++)
        {
            array[i] = array[i + 1];
        }

        write_head_table();
        for(int i = 0; i < length; i++)
        {
            print_sep();
            printf("%-4d", i);
            print_sep();
            write_one_element(array, i);
        }
        
        make_indiced_array(length);

        pause_console();
    }

    menu(array, length);
}