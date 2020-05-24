#include "out_max_values_in_line.h"

void out_max_values_in_line(struct reservoirs_of_the_country* array, int length)
{
    int
        max_length = array[0].length,
        max_width = array[0].width,
        max_depth = array[0].depth,
        max_volume = array[0].volume;

    for (int i = 1; i < length; i++)
    {
        if (array[i].length > max_length)
        {
            max_length = array[i].length;
        }

        if (array[i].width > max_width)
        {
            max_width = array[i].width;
        }

        if (array[i].depth > max_depth)
        {
            max_depth = array[i].depth;
        }

        if (array[i].volume > max_volume)
        {
            max_volume = array[i].volume;
        }
    }

    print_sep();
    printf("%-4s", "max.");
    print_sep();
    printf("%-4s ", "");
    printf("%-8s", "");
    print_sep();
    printf("%-8d", max_length);
    print_sep();
    printf("%-8d", max_width);
    print_sep();
    printf("%-8d", max_depth);
    print_sep();
    printf("%-8d", max_volume);
    print_sep();
    printf("%-14s", "");
    print_sep();
    printf("\n");    
}