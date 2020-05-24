#include "out_max_values_in_line.h"

void out_max_values_in_line(struct reservoirs_of_the_country* array, int left_border, int right_border)
{
    int
        max_length = array[left_border].length,
        max_width = array[left_border].width,
        max_depth = array[left_border].depth,
        max_volume = array[left_border].volume;

    for (int i = left_border; i < right_border; i++)
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