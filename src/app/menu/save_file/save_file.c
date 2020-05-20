#include "save_file.h"

void fprintf_separator(FILE *file_pointer)
{
    fprintf(file_pointer, "\t");
}

void save_file(struct reservoirs_of_the_country* array, int length)
{
    FILE *file_pointer;
    file_pointer = fopen("data.tsv", "w");

    if(file_pointer == NULL)
    {
        printf("Файл не открылся!");
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            fprintf(file_pointer, "%d", array[i].name_size);
            fprintf_separator(file_pointer);
            
            fprintf(file_pointer, "%s", array[i].name);
            fprintf_separator(file_pointer);

            fprintf(file_pointer, "%ld", array[i].length);
            fprintf_separator(file_pointer);

            fprintf(file_pointer, "%ld", array[i].width);
            fprintf_separator(file_pointer);

            fprintf(file_pointer, "%ld", array[i].depth);
            fprintf_separator(file_pointer);

            fprintf(file_pointer, "%ld", array[i].volume);
            fprintf_separator(file_pointer);

            fprintf(file_pointer, "%d", array[i].water_type);
            fprintf(file_pointer, "\n");
        }    
    }
    
    fclose(file_pointer);
    menu(array, length);
}