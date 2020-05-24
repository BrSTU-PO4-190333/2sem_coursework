#include "find_min_max_on_range.h"

void find_min_max_on_range(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    if (length == 0)
    {
        printf("Нет элементов для поиска min/max\n");
    }
    else
    {
        int left_border = -1;
        while (left_border < 0 || left_border > length)
        {
            printf("Левая граница: ");
            scanf("%d", &left_border);
        }

        int right_border = left_border - 1;
        while (right_border < left_border || right_border > length)
        {
            printf("Правая граница: ");
            scanf("%d", &right_border);
        }

        write_head_table();
        write_table_on_range(array, left_border, right_border);
        out_min_values_in_line(array, left_border, right_border);
        out_max_values_in_line(array, left_border, right_border);
    } //конец условия проверки размера массива

    pause_console();
    
    menu(array, length);
}