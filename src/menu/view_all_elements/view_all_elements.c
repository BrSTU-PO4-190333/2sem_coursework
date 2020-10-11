#include "view_all_elements.h"

void view_all_elements(struct data* array, int length)
{
    clear_console();

    if (length == 0)
    {
        printf("Массив данных путой\n");
    }
    else
    {
        print_head_table();
        for (int i = 0; i < length; i++)
        {
            print_one_element(array, i);
        }
    }
    
    pause_console();
    menu(array, length);
}

void print_one_element(struct data* array, int position)
{
    print_separator();
    printf("%-4d", position);
    print_separator();
    printf("%-4d ", array[position].name_size);
    printf("%-16s", array[position].name);
    print_separator();
    printf("%-16ld", array[position].length);
    print_separator();
    printf("%-16ld", array[position].area);
    print_separator();
    printf("%-16d", array[position].number_of_ports);
    print_separator();
    array[position].water_type == artificial?
        printf("искусственный   "):
        array[position].water_type == natural?
            printf("природный       "):
            printf("                ");
    print_separator();
    printf("\n");
}

void print_head_table()
{
    print_separator();
    printf("#   ");
    print_separator();
    printf("байт ");
    printf("Строка          ");
    print_separator();
    printf("Длина           ");
    print_separator();
    printf("Площадь         ");
    print_separator();
    printf("Кол-во портов   ");
    print_separator();
    printf("Тип             ");
    print_separator();
    printf("\n");

    print_separator();
    print_line(4);
    print_separator();
    print_line(4 + 1 + 16);
    print_separator();
    print_line(16);
    print_separator();
    print_line(16);
    print_separator();
    print_line(16);
    print_separator();
    print_line(16);
    print_separator();
    printf("\n");
}

void print_line(int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("-");
    }
}

void print_separator()
{
    printf(" | ");
}