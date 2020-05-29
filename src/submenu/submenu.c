#include "submenu.h"

void submenu(struct data* array, int length)
{
    clear_console();

    printf("Меню:\n");
    printf("1. Удаление элементов по условию (поле < или > заданного значения)\n");
    printf("2. Сортировка массива по числовому полю\n");
    printf("3. Вставка нового элемента перед выбраннным элементом\n");
    printf("0. Выйти из меню\n");

    switch(getch())
    {
        case '0':
            menu(array, length);
            break;
        case '1':
            break;
        case '2':
            break;
        case '3':
            add_element_before(array, length);
            break;
        default:
            submenu(array, length);
    }
}