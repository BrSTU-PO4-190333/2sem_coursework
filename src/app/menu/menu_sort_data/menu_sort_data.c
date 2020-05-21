#include "menu_sort_data.h"

void menu_sort_data(struct reservoirs_of_the_country *array, int length)
{
    clear_console();
    printf("Меню:\n");
    printf("1. Сортировка по названию\n");
    printf("2. Сортировка по длине\n");
    printf("3. Сортировка по ширине\n");
    printf("4. Сортировка по глубине\n");
    printf("5. Сортировка по объему\n");
    printf("6. Сортировка по типу\n");
    printf("0. Выйти из меню\n");

    int choosen_case = getch();

    int *indices_array = (int *)calloc(length, sizeof(int));
    for (int i = 0; i < length; i++)
    {
        indices_array[i] = i;
    }

    switch(choosen_case)
    {
        case '0':
            break;
        case '1':
            sort_field_name(array, length, indices_array);
            break;
        case '2':
            sort_field_length(array, length, indices_array);
            break;
        default:
            menu_sort_data(array, length);
    }

    FILE *indices_file_pointer = fopen("indices.txt", "wt"); //открыли файл для записи как текстовый
    if (indices_file_pointer == NULL)
    {
        printf("Индексный файл не может создаться!!!\n");
        pause_console();
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            fprintf(indices_file_pointer, "%d\n", indices_array[i]); //записали индекс
        }
        fclose(indices_file_pointer); //закрыли файл
    }

    free(indices_array); //очистили массив индексов

    menu(array, length);
}