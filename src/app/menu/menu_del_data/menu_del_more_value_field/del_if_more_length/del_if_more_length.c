#include "del_if_more_length.h"

void del_if_more_length(struct reservoirs_of_the_country *array, int length)
{
    float number;
    printf("Удалить поля 'Длин', которые больше, чем: ");
    scanf("%f", &number);

    for (int i = 0; i < length; i++)
    {
        if(array[i].length > number)
        {
            length--;
            for (int j = i; j < length; j++)
            {
                array[j] = array[j + 1];
            }
            i--;
            array = (struct reservoirs_of_the_country*) realloc(array, length * sizeof(struct reservoirs_of_the_country));
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

    pause_console();

    menu(array, length);
}