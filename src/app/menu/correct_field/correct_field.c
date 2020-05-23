#include "correct_field.h"

void correct_field(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    int number_correct_field;
    printf("Какой элемент редактировать: ");
    scanf("%d", &number_correct_field);

    if (number_correct_field >= 0 && number_correct_field < length)
    {
        menu_correct_field(array, length, number_correct_field);
        menu(array, length);
    }
    else //если элемент не существует, то
    {
        printf("[!] Нет такого элемента!!!\n");
        pause_console();
        menu(array, length);
    } //конец условвия существования элемента

}