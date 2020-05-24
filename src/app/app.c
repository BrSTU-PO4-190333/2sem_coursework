#include "app.h"

void app()
{
    int length = 0;
    struct reservoirs_of_the_country* array;
    array = (struct reservoirs_of_the_country*) calloc(length, sizeof(struct reservoirs_of_the_country));

    FILE* file_pointer = fopen("indices.txt", "wt");
   // fprintf(file_pointer, " ");
    fclose(file_pointer);

    menu(array, length);
}