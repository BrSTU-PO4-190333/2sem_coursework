#include "add_element_on_array.h"

int* add_element_on_array(int* arr, int* length, int added_element, int position)
{
    arr = (int*) realloc(arr, (*length) * sizeof(int));
    (*length)++;
    for (int i = (*length); i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = added_element;
    
    return arr;
}