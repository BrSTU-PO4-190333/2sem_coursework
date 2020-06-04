#include "main.h"

int main()
{
    int length = 0;
    struct data* array = (struct data*) calloc(length, sizeof(struct data));
    menu(array, length);
    free(array);
    return 0;
}