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

    int length_indices_array = 0; 
    int *indices_array = (int *)calloc(length_indices_array, sizeof(int));
    indices_array = get_indices_array_from_file(indices_array, &length_indices_array);

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
        case '3':
            sort_field_width(array, length, indices_array);
            break;
        case '4':
            sort_field_depth(array, length, indices_array);
            break;
        case '5':
            sort_field_volume(array, length, indices_array);
            break;
        case '6':
            sort_field_water_type(array, length, indices_array);
            break;
        default:
            menu_sort_data(array, length);
    }

    save_indices_array_on_file(indices_array, length_indices_array);

    menu(array, length);
}