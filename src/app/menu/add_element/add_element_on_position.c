#include "add_element_on_position.h"

void input_fields(struct reservoirs_of_the_country *array, int length, int position)
{
    input_name(array, position);
    input_length(array, position);
    input_width(array, position);
    input_depth(array, position);
    input_volume(array, position);
    input_type(array, position);
}

void add_element_on_position(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    int position;
    printf("После какого элемента вставить: ");
    scanf("%d", &position);

    array = (struct reservoirs_of_the_country*) realloc(array, (length + 1)*sizeof(struct reservoirs_of_the_country));
    if (position <= 0) //если пользователь ввел 0 или меньше, то
    {
        for (int i = length; i > 0; i--)
        {
            array[i] = array[i - 1];
        }
        position = 0;
        input_fields(array, length, position);
    }
    else if (position >= length) //если пользователь ввел последний элемент или конец строки
    {
        input_fields(array, length, length);
    }
    else //если два условия не сработали, то
    {
        for (int i = length; i > position; i--)
        {
            array[i] = array[i - 1];
        }
        input_fields(array, length, position);
    } //конец условия

    FILE* indices_file_pointer = fopen("indices.txt", "at");
    if (indices_file_pointer == NULL)
    {
        printf("[!] Индексный файл не может октрыться!!!\n");
        pause_console();
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            fprintf(indices_file_pointer, "%d\n", length);
        }
        fclose(indices_file_pointer);
    }

    length++;

    menu(array, length);
}