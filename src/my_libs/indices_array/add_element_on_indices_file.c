#include "add_element_on_indices_file.h"

void add_element_on_indices_file(int added_element, int position)
{
    int length_indices_array = 0;
    int* indices_array = (int*) calloc(length_indices_array, sizeof(int));

    indices_array = get_indices_array_from_file(indices_array, &length_indices_array);
    indices_array = add_element_on_array(indices_array, &length_indices_array, added_element, position);

    save_indices_array_on_file(indices_array, length_indices_array);

    free(indices_array);
}