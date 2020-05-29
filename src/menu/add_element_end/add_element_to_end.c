#include "add_element_to_end.h"

void add_element_to_end(struct data* array, int length)
{
    clear_console();

    array = (struct data*) realloc(array, (length + 1) * sizeof(struct data));
    
    input_name(array, length);
    input_length(array, length);
    input_area(array, length);
    input_number_of_ports(array, length);
    input_type(array, length);

    pause_console();
    menu(array, length + 1);
}

void input_name(struct data* array, int length)
{
    clear_console();

    printf("Размер строки для названия водоёма: ");
    scanf("%d", &array[length].name_size);

    printf("Названия водоёма: ");
    array[length].name = (char*) calloc(array[length].name_size, sizeof(char));
    scanf("%s", array[length].name);
}

void input_length(struct data* array, int length)
{
    clear_console();

    printf("Протяжёность: ");
    scanf("%ld", &array[length].length);
}

void input_area(struct data* array, int length)
{
    clear_console();

    printf("Площадь: ");
    scanf("%ld", &array[length].area);
}

void input_number_of_ports(struct data* array, int length)
{
    clear_console();

    printf("Количество портов: ");
    scanf("%d", &array[length].number_of_ports);
}

void input_type(struct data* array, int length)
{
    clear_console();
    
    printf("Тип водоема:\n");
    printf("0. Искусственный\n");
    printf("1. Природный\n");

    switch(getch())
    {
    case '0':
        array[length].water_type = artificial;
        break;
    case '1':
        array[length].water_type = natural;
        break;
    default:
        input_type(array, length);
    }
}