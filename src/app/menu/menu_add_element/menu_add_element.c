#include "menu_add_element.h"

void menu_add_element(struct reservoirs_of_the_country* array, int length)
{
    clear_console();
    
    printf("Меню:\n");
    printf("1. Добавить элемент в конец\n");
    printf("2. Добавить элемент в позицию\n");
    printf("0. Выйти в главное меню\n");

    int choosen_case;

    switch(choosen_case = getch())
    {
    case '0':
        break;
    case '1':
        add_element_on_end(array, length);
        break;
    case '2':
        add_element_on_position(array, length);
        break;
    default:
        menu_add_element(array, length);
    }
}