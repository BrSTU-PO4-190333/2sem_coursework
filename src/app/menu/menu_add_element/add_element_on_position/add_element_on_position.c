#include "add_element_on_position.h"

void add_element_on_position(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    int position;
    printf("Каким элементом вставить: ");
    scanf("%d", &position);

    array = (struct reservoirs_of_the_country*) realloc(array, (length + 1)*sizeof(struct reservoirs_of_the_country));
    if (position <= 0) //если пользователь ввел 0 или меньше, то
    {
        for (int i = length; i > 0; i--)
        {
            array[i] = array[i - 1];
        }
        position = 0;
        input_ALL_fields(array, position);
    }
    else if (position >= length) //если пользователь ввел последний элемент или конец строки
    {
        input_ALL_fields(array, length);
    }
    else //если два условия не сработали, то
    {
        for (int i = length; i > position; i--)
        {
            array[i] = array[i - 1];
        }
        input_ALL_fields(array, position);
    } //конец условия

    add_element_on_indices_file(length, position);

    length++;

    menu(array, length);
}
