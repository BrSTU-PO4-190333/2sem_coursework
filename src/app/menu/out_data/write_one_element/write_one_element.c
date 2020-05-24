#include "write_one_element.h"

void write_one_element(struct reservoirs_of_the_country *array, int position)
{
    printf("%-4d ", array[position].name_size);
    printf("%-8s", array[position].name);
    print_sep();
    printf("%-8ld", array[position].length);
    print_sep();
    printf("%-8ld", array[position].width);
    print_sep();
    printf("%-8ld", array[position].depth);
    print_sep();
    printf("%-8ld", array[position].volume);
    print_sep();
    if (array[position].water_type == artificial) //если искусственный источник, то
    {
        printf("искусственный ");
    }
    else if (array[position].water_type == natural) //если натуральное происхождение, то
    {
        printf("природный     ");
    }
    print_sep();
    printf("\n");
}