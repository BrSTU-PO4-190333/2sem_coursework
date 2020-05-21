#include "add_element.h"

void add_element(struct reservoirs_of_the_country* array, int length)
{
    clear_console();
    
    array = (struct reservoirs_of_the_country*) realloc(array, (length + 1)*sizeof(struct reservoirs_of_the_country));

    input_name(array, length);
    input_length(array, length);
    input_width(array, length);
    input_depth(array, length);
    input_volume(array, length);
    input_type(array, length);

    FILE* indices_file_pointer = fopen("indices.txt", "at");
    if (indices_file_pointer == NULL)
    {
        printf("[!] Индексный файл не может октрыться!!!\n");
        pause_console();
    }
    else
    {
        fprintf(indices_file_pointer, "%d\n", length);
        fclose(indices_file_pointer);
    }
    
    length++;

    menu(array, length);
}