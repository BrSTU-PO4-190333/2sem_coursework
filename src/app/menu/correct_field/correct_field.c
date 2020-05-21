#include "correct_field.h"

void correct_field(struct reservoirs_of_the_country *array, int length)
{
    clear_console();
    int number_correct_field;
    printf("Какой элемент редактировать: ");
    scanf("%d", &number_correct_field);

    menu_correct_field(array, length, number_correct_field);
    menu(array, length);
}