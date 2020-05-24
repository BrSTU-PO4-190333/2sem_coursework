#include "make_indiced_array.h"

void make_indiced_array(int length)
{
    FILE* file_pointer = fopen("indices.txt", "wt");

    if (file_pointer == NULL)
    {
        printf("Индексный файл перезаписаться, т. к. он не открылся\n");
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            fprintf(file_pointer, "%d\n", i);
        }
    }

    fclose(file_pointer);
}