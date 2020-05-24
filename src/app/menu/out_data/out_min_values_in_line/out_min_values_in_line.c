#include "out_min_values_in_line.h"

void out_min_values_in_line(struct reservoirs_of_the_country* array, int left_border, int right_border)
{
    int
        min_length = array[left_border].length,
        min_width = array[left_border].width,
        min_depth = array[left_border].depth,
        min_volume = array[left_border].volume;

    for (int i = left_border; i < right_border; i++)
    {
        if (array[i].length < min_length)
        {
            min_length = array[i].length;
        }

        if (array[i].width < min_width)
        {
            min_width = array[i].width;
        }

        if (array[i].depth < min_depth)
        {
            min_depth = array[i].depth;
        }

        if (array[i].volume < min_volume)
        {
            min_volume = array[i].volume;
        }
    }

    print_sep();
    printf("%-4s", "min.");
    print_sep();
    printf("%-4s ", "");
    printf("%-8s", "");
    print_sep();
    printf("%-8d", min_length);
    print_sep();
    printf("%-8d", min_width);
    print_sep();
    printf("%-8d", min_depth);
    print_sep();
    printf("%-8d", min_volume);
    print_sep();
    printf("%-14s", "");
    print_sep();
    printf("\n");    
}