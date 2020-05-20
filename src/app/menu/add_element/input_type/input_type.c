#include "input_type.h"

void input_type(struct reservoirs_of_the_country* array, int length)
{
    int choosen_type_case = 0;

    printf("Тип:\n");
    printf("1. искусственный\n");
    printf("2. природный\n");

    choosen_type_case = getch();

    switch(choosen_type_case)
    {
        case '1':
            array[length].water_type = artificial;
            break;
        case '2':
            array[length].water_type = natural;
            break;
        default:
            input_type(array, length);
    }
}