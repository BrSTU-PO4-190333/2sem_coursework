#include "replace_element.h"

void replace_element(struct reservoirs_of_the_country *array, int length)
{
    int replaced_element;
    printf("Какой элемент заменить: ");
    scanf("%d", &replaced_element);

    if (replaced_element < length && replaced_element >= 0)
    {
        write_one_edit_element(array, replaced_element, "\nЗаменяемое поле:\n");
        input_ALL_fields(array, replaced_element);
    }
    else
    {
        printf("\n[!] Такого элемента нет!!!\n");
        pause_console();
    } //конец условия
    
    menu(array, length);
}