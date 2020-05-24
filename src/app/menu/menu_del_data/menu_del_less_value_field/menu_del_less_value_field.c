#include "menu_del_less_value_field.h"

void menu_del_less_value_field(struct reservoirs_of_the_country *array, int length)
{
    int choosen_case;

    printf("Меню:\n");
    printf("1. Удалить элементы, которые меньше по полю длина\n");
    printf("2. Удалить элементы, которые меньше по полю ширина\n");
    printf("3. Удалить элементы, которые меньше по полю глубина\n");
    printf("4. Удалить элементы, которые меньше по полю объем\n");
    printf("0. Выйти из меню\n");

    switch(choosen_case = getch())
    {
    case '0':
        break;
    case '1':
        del_if_less_length(array, length);
        break;
    default:
        menu_del_less_value_field(array, length);
    }
}