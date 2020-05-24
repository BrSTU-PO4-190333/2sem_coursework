#include "del_if_less_depth.h"

void del_if_less_depth(struct reservoirs_of_the_country *array, int length)
{
    int number;
    printf("Удалить поля 'Глубин', которые меньше, чем: ");
    scanf("%d", &number);

    for (int i = 0; i <= length; i++)
    {
        if(array[i].depth < number)
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
        write_one_element(array, i);
    }

    FILE* indices_file_pointer = fopen("indices.txt", "wt");
    if (indices_file_pointer == NULL)
    {
        printf("Индексный файл не записался. Возможны проблемы...\n");
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            fprintf(indices_file_pointer, "%d\n", i);
        }
    }
    fclose(indices_file_pointer);

    pause_console();

    menu(array, length);
}