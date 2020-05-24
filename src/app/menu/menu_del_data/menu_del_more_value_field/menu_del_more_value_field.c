#include "menu_del_more_value_field.h"

void menu_del_more_value_field(struct reservoirs_of_the_country *array, int length)
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

    int choosen_case;

    printf("Меню:\n");
    printf("1. Удалить элементы, которые больше по полю длина\n");
    printf("2. Удалить элементы, которые больше по полю ширина\n");
    printf("3. Удалить элементы, которые больше по полю глубина\n");
    printf("4. Удалить элементы, которые больше по полю объем\n");
    printf("0. Выйти из меню\n");

    switch(choosen_case = getch())
    {
    case '0':
        menu(array, length);
        break;
    case '1':
        del_if_more_length(array, length);
        break;
    case '2':
        del_if_more_width(array, length);
        break;
    case '3':
        del_if_more_depth(array, length);
        break;
    case '4':
        del_if_more_volume(array, length);
        break;
    default:
        menu_del_more_value_field(array, length);
    }
}