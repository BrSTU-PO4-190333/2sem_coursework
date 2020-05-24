#include "save_indices_array_on_file.h"

void save_indices_array_on_file(int* arr, int length)
{
    FILE* file_pointer = fopen("indices.txt", "wt");
    if (file_pointer == NULL)
    {
        printf("Не удалось записать данные в индексный файл, т. к. он не открылся\n");
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            fprintf(file_pointer, "%d\n", arr[i]);
        }
    }
    fclose(file_pointer);
}