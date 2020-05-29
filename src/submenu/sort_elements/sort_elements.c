#include "sort_elements.h"

void sort_elements(struct data* array, int length)
{
    clear_console();

    printf("Меню:\n");
    printf("1. Сортировка массива по полям названия водоема\n");
    printf("2. Сортировка массива по полям длинны\n");
    printf("3. Сортировка массива по полям площадей\n");
    printf("4. Сортировка массива по полям количества портов\n");
    printf("5. Сортировка массива по полям типа\n");
    printf("0. Выйти из меню\n");

    switch(getch())
    {
        case '0':
            menu(array, length);
            break;
        case '1':
            sort_by_field_name(array, length);
            break;
        case '2':
            sort_by_field_length(array, length);
            break;
        case '3':
            sort_by_field_area(array, length);
            break;
        case '4':
            sort_by_field_number_of_ports(array, length);
            break;
        case '5':
            sort_by_field_water_type(array, length);
            break;
        default:
            sort_elements(array, length);
    }
}

void sort_by_field_name(struct data* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (strcmp(array[i].name, array[j].name) < 0)
            {
                struct data temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    menu(array, length);
}

void sort_by_field_length(struct data* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (array[i].length < array[j].length)
            {
                struct data temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    menu(array, length);
}

void sort_by_field_area(struct data* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (array[i].area < array[j].area)
            {
                struct data temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    menu(array, length);
}

void sort_by_field_number_of_ports(struct data* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (array[i].number_of_ports < array[j].number_of_ports)
            {
                struct data temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    menu(array, length);
}

void sort_by_field_water_type(struct data* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (array[i].water_type < array[j].water_type)
            {
                struct data temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    menu(array, length);
}
