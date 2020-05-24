#include "out_min_values_in_line.h"

void out_min_values_in_line(struct reservoirs_of_the_country* array, int length)
{
    int
        min_length = array[0].length,
        min_width = array[0].width,
        min_depth = array[0].depth,
        min_volume = array[0].volume;

    for (int i = 1; i < length; i++)
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