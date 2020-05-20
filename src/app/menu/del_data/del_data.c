#include "del_data.h"

void del_data(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    int delete_id = 0;
    printf("Какой элемент удалить: ");
    scanf("%d", &delete_id);

    if (delete_id <= length) //если удаляемый индекс меньше размера строки
    {
        length--;
        for (int i = delete_id; i < length; i++)
        {
            array[i] = array[i + 1];
        }
    }

    menu(array, length);
}