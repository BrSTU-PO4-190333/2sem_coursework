#include "input_name.h"

void input_name(struct reservoirs_of_the_country *array, int length)
{
    printf("Размер строки названия: ");
    scanf("%d", &array[length].name_size);

    array[length].name = (char*) calloc(array[length].name_size, sizeof(char)); //выделение памяти под строку
    printf("Название: ");
    scanf("%s", array[length].name);
}