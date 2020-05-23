#include "write_one_edit_element.h"

void write_one_edit_element(struct reservoirs_of_the_country *array, int position, char* str)
{
    printf("%s", str);
    write_head_table();
    write_one_element(array, position);
    printf("\n");

    pause_console();
}