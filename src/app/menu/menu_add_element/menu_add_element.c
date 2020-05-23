#include "menu_add_element.h"

void menu_add_element(struct reservoirs_of_the_country* array, int length)
{
    clear_console();
    
    printf("Меню:\n");
    printf("1. Добавить элемент в конец\n");
    printf("2. Добавить элемент перед элементом\n");
    printf("3. Добавить элемент в позицию\n");
    printf("4. Добавить элемент после элемента\n");
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
        add_element_before_element(array, length);
        break;
    case '3':
        add_element_on_position(array, length);
        break;
    case '4':
        add_element_after_element(array, length);
        break;
    default:
        menu_add_element(array, length);
    }
}