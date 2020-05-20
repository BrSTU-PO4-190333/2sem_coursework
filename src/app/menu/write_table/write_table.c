#include "./write_table.h"

void print_line(int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("-");
    }
}

void print_sep()
{
    printf(" | ");
}

void write_table(struct reservoirs_of_the_country *array, int length)
{
    clear_console();
    if (length == 0)
    {
        printf("Нет данных\n");
    }
    else
    {
        //название колонок
        print_sep();
        printf("#   ");
        print_sep();
        printf("байт ");
        printf("Название");
        print_sep();
        printf("Длина   ");
        print_sep();
        printf("Ширина  ");
        print_sep();
        printf("Глубина ");
        print_sep();
        printf("Объем   ");
        print_sep();
        printf("Тип           ");
        print_sep();
        printf("\n");

        //подчеркивающая линия колонок
        print_sep();
        print_line(4); //#
        print_sep();
        print_line(4 + 1 + 8); //байт + Название
        print_sep();
        print_line(8); //длина
        print_sep();
        print_line(8); //ширина
        print_sep();
        print_line(8); //глубина
        print_sep();
        print_line(8); //объем
        print_sep();
        print_line(14); //тип
        print_sep();
        printf("\n");

        //сама таблица
        for (int i = 0; i < length; i++)
        {
            print_sep();
            printf("%4d", i);
            print_sep();
            printf("%4d ", array[length].name_size);
            printf("%8s", array[i].name);
            print_sep();
            printf("%8ld", array[i].length);
            print_sep();
            printf("%8ld", array[i].width);
            print_sep();
            printf("%8ld", array[i].depth);
            print_sep();
            printf("%8ld", array[i].volume);
            print_sep();
            if (array[i].water_type == artificial) //если искусственный источник, то
            {
                printf("искусственный ");
            }
            else if (array[i].water_type == natural) //если натуральное происхождение, то
            {
                printf("природный     ");
            }
            print_sep();
            printf("\n");
        }
    }
    pause_console();
    menu(array, length);
}