#include "add_element.h"

void add_element(struct reservoirs_of_the_country* array, int length)
{
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

    int choosen_type_case = 0;
    while (choosen_type_case != 1 || choosen_type_case != 2)
    {
        printf("Тип: ");
        printf("1. искусственный\n");
        printf("2. природный\n");
        scanf("%d", &choosen_type_case);
    }
    switch(choosen_type_case)
    {
        case 1:
            array[length].water_type = artificial;
            break;
        case 2:
            array[length].water_type = natural;
            break;
    }

    menu(array, length);
}