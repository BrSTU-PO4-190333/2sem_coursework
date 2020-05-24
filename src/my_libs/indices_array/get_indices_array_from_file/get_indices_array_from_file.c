#include "get_indices_array_from_file.h"

int* get_indices_array_from_file(int* indices_array, int* indices_array_length)
{
    FILE* indices_file_pointer = fopen("indices.txt", "r");
    if (indices_file_pointer == NULL) //если файл не открылся, то
    {
        printf("Не удалось прочесть индексный файл, т. к. он не открылся\n");
    }
    else //если файл открылся, то
    {
        int word_size = 0;
        char* word; //строка, для хранения цифры

        *indices_array_length = 0;

        word = (char*) calloc(word_size, sizeof(char)); //выделение динамической памяти под строку цифр

        while (!feof(indices_file_pointer))
        {
            char geted_char; //переменная для хранения символа полученного из файла
            geted_char = fgetc(indices_file_pointer); //получили символ из файла

            if (geted_char != '\n') //если это ещё не конец строки,то
            {
                word_size++;
                word = (char*) realloc(word, word_size * sizeof(char));
                word[word_size - 1] = geted_char;
            }
            else //если это конец строки, то
            {
                (*indices_array_length)++; //перешли к следующему индексу массива индексов
                indices_array = (int*) realloc(indices_array, ((*indices_array_length)+1) * sizeof(int));
                indices_array[(*indices_array_length) - 1] = atoi(word); //записали число в массив индексов
                
                free(word); //очистка слова в которой было число
                word_size = 0; //слово теперь начинается с нулевого индекса
                word = (char*) calloc(word_size, sizeof(char)); //динамическое выделение памяти слову
            } //конец условия проверки конца строки

        } //конец цикла, проверки конца строки

        free(word);

    } //конец проверки открытия файла

    fclose(indices_file_pointer);

    return indices_array;
}