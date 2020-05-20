#include "add_element.h"

void add_element(struct reservoirs_of_the_country* array, int length)
{
    clear_console();

    array = (struct reservoirs_of_the_country*) realloc(array, (length + 1)*sizeof(struct reservoirs_of_the_country));

    printf("Размер строки названия: ");
    scanf("%d", &array[length].name_size);

    array[length].name = (char*) calloc(array[length].name_size, sizeof(char)); //выделение памяти под строку
    printf("Название: ");
    scanf("%s", array[length].name);

    printf("Длина: ");
    scanf("%ld", &array[length].length);

    printf("Ширина: ");
    scanf("%ld", &array[length].width);

    printf("Глубина: ");
    scanf("%ld", &array[length].depth);

    printf("Объем: ");
    scanf("%ld", &array[length].volume);

    input_type(array, length);

    length++;

    menu(array, length);
}