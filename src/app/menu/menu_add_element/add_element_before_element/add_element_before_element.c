#include "add_element_before_element.h"

void add_element_before_element(struct reservoirs_of_the_country* array, int length)
{
    clear_console();

    int position;
    printf("Перед каким элементом вставить: ");
    scanf("%d", &position);

    position--;

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

    FILE* indices_file_pointer = fopen("indices.txt", "wt");
    if (indices_file_pointer == NULL)
    {
        printf("[!] Индексный файл не может октрыться!!!\n");
        pause_console();
    }
    else
    {
        for (int i = 0; i <= length; i++)
        {
            fprintf(indices_file_pointer, "%d\n", i);
        }
        
    }
    fclose(indices_file_pointer);

    length++;

    menu(array, length);
}

