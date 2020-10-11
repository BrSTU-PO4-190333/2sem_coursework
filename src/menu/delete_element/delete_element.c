#include "delete_element.h"

void delete_element(struct data* array, int length)
{
    clear_console();

    if (length <= 0)
    {
        printf("В массиве нет элементов - нет чего удалять\n");
    }
    else
    {
        int position;
        printf("Какой элемент удалить: ");
        scanf("%d", &position);
        while(position < 0 || position >= length)
        {
            clear_console();
            printf("Нет такого элемента под номером %d в массиве\n", position);
            printf("Какой элемент удалить: ");
            scanf("%d", &position);
        }
        for (int i = position; i < length; i++)
        {
            array[i] = array[i + 1];
        }
        length--;
        array = (struct data*) realloc(array, length * sizeof(struct data));
    }

    pause_console();
    menu(array, length);
}