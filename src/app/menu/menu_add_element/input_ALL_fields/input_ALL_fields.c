#include "input_ALL_fields.h"

void input_ALL_fields(struct reservoirs_of_the_country *array, int position)
{
    input_name(array, position);
    input_length(array, position);
    input_width(array, position);
    input_depth(array, position);
    input_volume(array, position);
    input_type(array, position);
    write_one_edit_element(array, position, "\nЭлемент:\n");
}