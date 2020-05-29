#include "menu.h"

void menu(struct data* array, int length)
{
    clear_console();
    printf("Меню:\n");
    printf("1. Ввод информации из текстового файла в массив указателей на записи\n");
    printf("2. Добавление новых эементов в конец массива\n");
    printf("3. Просмотр всех элементов массива\n");
    printf("4. Вывод информации из массива в текстовый файл\n");
    printf("5. Корректировка полей выбранного элемента\n");
    printf("6. Удаление выбраного элемента\n");
    printf("7. Дополнительное меню\n");
    printf("0. Выйти из программы\n");
    
    switch(getch())
    {
    case '0':
        break;
    case '1':
        open_file(array, length);
        break;
    case '2':
        add_element_to_end(array, length);
        break;
    case '3':
        view_all_elements(array, length);
        break;
    case '4':
        save_to_tsv_file(array, length);
        break;
    case '5':
        correct_field(array, length);
        break;
    case '6':
        delete_element(array, length);
        break;
    default:
        menu(array, length);
    }
}