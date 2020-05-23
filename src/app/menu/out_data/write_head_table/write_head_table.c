#include "write_head_table.h"

void write_head_table()
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
}