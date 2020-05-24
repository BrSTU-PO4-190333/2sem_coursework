#include "add_element_on_end.h"

void add_element_on_end(struct reservoirs_of_the_country* array, int length)
{
    clear_console();

    array = (struct reservoirs_of_the_country *)realloc(array, (length + 1) * sizeof(struct reservoirs_of_the_country));

    input_ALL_fields(array, length);

    FILE* file_pointer = fopen("indices.txt", "a");
    fprintf(file_pointer, "%d\n", length);
    fclose(file_pointer);

    length++;
    
    menu(array, length);
}