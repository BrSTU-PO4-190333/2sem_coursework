#include "menu.h"

void menu(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    printf("Меню:\n");
    printf("1. Открыть файл\n");
    printf("2. Добавить элемент\n");
    printf("3. Просмотр данных\n");
    printf("4. Сохранить как\n");
    printf("5. Корректировать поле\n");
    printf("6. Удаление элемента\n");
    printf("7. Добавить элемент после\n");
    printf("0. Выйти из программы\n");

    int choosen_case; //переменная для содержания пункта меню
    choosen_case = getch();

    switch (choosen_case)
    {
    case '0':
        break;
    case '1':
        open_file(array, length);
        break;
    case '2':
        add_element(array, length);
        break;
    case '3':
        write_table(array, length);
        break;
    case '4':
        save_file(array, length);
        break;
    case '5':
        break;
    case '6':
        del_data(array, length);
        break;
    case '7':
        add_element_on_position(array, length);
        break;
    default:
        menu(array, length);
    }
}