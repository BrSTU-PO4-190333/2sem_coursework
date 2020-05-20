#include "menu.h"

void menu()
{
    clear_console();

    printf("Меню:\n");
    printf("1. Открыть файл\n");
    printf("2. Добавить элемент\n");
    printf("3. Просмотр данных\n");
    printf("4. Сохранить как\n");
    printf("5. Корректировать поле\n");
    printf("6. Удаление элемента\n");
    printf("0. Выйти из программы\n");

    int choosen_case; //переменная для содержания пункта меню
    choosen_case = getch();

    switch (choosen_case)
    {
        case '0':
            break;
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
        case '6':
            break;
        default:
            menu();
    }
}