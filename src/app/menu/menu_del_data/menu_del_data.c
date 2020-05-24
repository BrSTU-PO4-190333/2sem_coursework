#include "menu_del_data.h"

void menu_del_data(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    printf("Меню:\n");
    printf("1. Удалить элемент\n");
    printf("2. Удалить с элемента\n");
    printf("3. Удалить элементы, которые < (меньше) значения определённого поля\n");
    printf("4. Удалить элементы, которые > (больше) значения определённого поля\n");
    printf("0. Выйти в главное меню\n");

    int choosen_case;

    switch (choosen_case = getch())
    {
    case '0':
        menu(array, length);
        break;
    case '1':
        del_one_element(array, length);
        break;
    case '2':
        del_data_from(array, length);
        break;
    case '3':
        menu_del_less_value_field(array, length);
        break;
    case '4':
        menu_del_more_value_field(array, length);
        break;
    default:
        menu_del_data(array, length);
    }
}