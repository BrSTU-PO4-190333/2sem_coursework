#include "delete_element_on_indiced_file.h"

void delete_element_on_indices_file(int position)
{
    int length_indices_array = 0;
    int* indices_array = (int*) calloc(length_indices_array, sizeof(int));

    indices_array = get_indices_array_from_file(indices_array, &length_indices_array);

   // indices_array = remove_element_on_array(indices_array, &length_indices_array, position);

  //  save_indices_array_on_file(indices_array, length_indices_array);

    FILE* file_pointer = fopen("indices.txt", "wt");
    if (file_pointer == NULL)
    {
        printf("Не удалось записать данные в индексный файл, т. к. он не открылся\n");
    }
    else
    {
        for (int i = 0; i < length_indices_array; i++)
        {
            if (indices_array[i] == position)
            {

            }
            else if (indices_array[i] > position)
            {
                fprintf(file_pointer, "%d\n", indices_array[i] - 1);
            }
            else
            {
                fprintf(file_pointer, "%d\n", indices_array[i]);
            }  
        }
    }
    fclose(file_pointer);

    free(indices_array);
}