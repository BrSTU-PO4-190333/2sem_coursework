#include "add_element_before.h"

void add_element_before(struct data* array, int length)
{
    clear_console();

    int position;
    printf("Перед каким элементов вставить: ");
    scanf("%d", &position);
    while (position < 0 || position >= length)
    {
        clear_console();
        printf("Нет такого элемента под номером %d в массиве\n", position);
        printf("Перед каким элементов вставить: ");
        scanf("%d", &position);
    }
    printf("1\n");
   // length++;
    array = (struct data*) realloc(array, (length+1)*sizeof(struct data));
    printf("2\n");
    for (int i = length; i > position; i--)
    {
        printf("i %d\n", i);
        array[i] = array[i - 1];

        array[i].name = (char*) calloc(array[i].name_size, sizeof(char));
        strcpy(array[i].name, array[i - 1].name);
    }
    
    correct_name(array, position);
    correct_length(array, position);
    correct_area(array, position);
    correct_number_of_ports(array, position);
    correct_type(array, position);
    menu(array, length+1);
}