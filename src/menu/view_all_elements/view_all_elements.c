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
            print_separator();
            printf("%-4d ", array[i].name_size);
            printf("%-16s", array[i].name);
            print_separator();
            printf("%-16ld", array[i].length);
            print_separator();
            printf("%-16ld", array[i].area);
            print_separator();
            printf("%-16d", array[i].number_of_ports);
            print_separator();
            array[i].water_type == artificial?
                printf("искусственный   "):
                array[i].water_type == natural?
                    printf("природный       "):
                    printf("                ");
            print_separator();
            printf("\n");
        }
    }
    
    pause_console();
    menu(array, length);
}

void print_head_table()
{
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
}

void print_separator()
{
    printf(" | ");
}