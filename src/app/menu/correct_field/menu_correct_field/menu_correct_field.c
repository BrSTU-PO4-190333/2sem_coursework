#include "menu_correct_field.h"

void menu_correct_field(struct reservoirs_of_the_country *array, int length, int number_correct_field)
{
    clear_console();

    write_one_edit_element(array, number_correct_field, "Изменяемое поле:\n");

    printf("\nБудет редактироваться элемент: %d\n\n", number_correct_field);

    printf("Меню:\n");
    printf("1. Корректировать поле названия\n");
    printf("2. Корректировать поле длины\n");
    printf("3. Корректировать поле ширины\n");
    printf("4. Корректировать поле глубины\n");
    printf("5. Корректировать поле объема\n");
    printf("6. Корректировать поле типа\n");
    printf("0. Выйти в главное меню\n\n");

    int choosen_menu_case;

    switch (choosen_menu_case = getch())
    {
    case '0':
        break;
    case '1':
        input_name(array, number_correct_field);
        write_one_edit_element(array, number_correct_field, "\nИзменилось поле названия:\n");
        break;
    case '2':
        input_length(array, number_correct_field);
        write_one_edit_element(array, number_correct_field, "\nИзменилось поле длинны:\n");
        break;
    case '3':
        input_width(array, number_correct_field);
        write_one_edit_element(array, number_correct_field, "\nИзменилось поле ширины:\n");
        break;
    case '4':
        input_depth(array, number_correct_field);
        write_one_edit_element(array, number_correct_field, "\nИзменилось поле глубины:\n");
        break;
    case '5':
        input_volume(array, number_correct_field);
        write_one_edit_element(array, number_correct_field, "\nИзменилось поле объема:\n");
        break;
    case '6':
        input_type(array, number_correct_field);
        write_one_edit_element(array, number_correct_field, "\nИзменилось поле типа:\n");
        break;
    default:
        menu_correct_field(array, length, number_correct_field);
    } //конец switch
}