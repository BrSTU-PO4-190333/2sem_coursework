#include "remove_element_on_array.h"

int* remove_element_on_array(int* arr, int* length, int position)
{
    int k = arr[position];
    for (int i = position; i < ((*length) - 1); i++)
    {
        arr[i] = arr[i + 1];
    }
    

    (*length)--;

    /*for (int i = 0; i < (*length); i++)
    {
        if(arr[i] > k)
        {
            arr[i]--;
        }
    }*/

    arr = (int*) realloc(arr, (*length) * sizeof(int));
 
    return arr;
}