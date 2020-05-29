#include "save_to_tsv_file.h"

void save_to_tsv_file(struct data* array, int length)
{
    FILE* file_pointer = fopen("data.tsv", "wt");

    if (file_pointer == NULL)
    {
        printf("Файл не открылся\n");
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            fprintf(file_pointer, "%d", array[i].name_size);
            fprint_separator(file_pointer);

            fprintf(file_pointer, "%s", array[i].name);
            fprint_separator(file_pointer);

            fprintf(file_pointer, "%ld", array[i].length);
            fprint_separator(file_pointer);

            fprintf(file_pointer, "%ld", array[i].area);
            fprint_separator(file_pointer);

            fprintf(file_pointer, "%d", array[i].number_of_ports);
            fprint_separator(file_pointer);

            fprintf(file_pointer, "%d", array[i].water_type);
            fprintf(file_pointer, "\n");
        }
    }
    fclose(file_pointer);

    menu(array, length);
}

void fprint_separator(FILE* file_pointer)
{
    fprintf(file_pointer, "\t");
}