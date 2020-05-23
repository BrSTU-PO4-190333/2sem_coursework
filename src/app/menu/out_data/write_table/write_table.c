#include "./write_table.h"

void write_table(struct reservoirs_of_the_country *array, int length, int* indices_array, int iterations)
{
    clear_console();
    if (length < iterations)
    {
        printf("Нет данных\n");
        length = 0;
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
            write_one_element(array, indices_array[i]);
        }
    }
    pause_console();
}