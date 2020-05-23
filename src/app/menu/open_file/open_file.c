#include "open_file.h"

void open_file(struct reservoirs_of_the_country *array, int length)
{
    clear_console();

    free(array);
    length = 0;
    array = (struct reservoirs_of_the_country *)calloc(length, sizeof(struct reservoirs_of_the_country));

    int path_size;
    printf("Размер файла: ");
    scanf("%d", &path_size);

    char *path;
    path = (char *)calloc(path_size, sizeof(char));
    printf("Path: ");
    scanf("%s", path);

    FILE *file_pointer = fopen(path, "r");
    free(path);

    if (file_pointer == NULL)
    {
        printf("Файл не открылся!\n");
    }
    else
    {
        int word_size = 0;
        int number_collum = 0;
        char *word = (char *)calloc(0, sizeof(char));
        while (!feof(file_pointer)) // пока не достигнут конец файла
        {
            char ch = fgetc(file_pointer);
            if (ch == '\t' || ch == '\n') //если это табуляция или конец строки
            {
                printf("%s\n", word);
                number_collum++;
                switch (number_collum)
                {
                case 1:

                    array = (struct reservoirs_of_the_country *)realloc(array, (length + 1) * sizeof(struct reservoirs_of_the_country));
                    array[length].name_size = atoi(word);
                    break;
                case 2:
                    array[length].name = (char *)calloc(array[length].name_size, sizeof(char));
                    strcpy(array[length].name, word);
                    break;
                case 3:
                    array[length].length = atoi(word);
                    break;
                case 4:
                    array[length].width = atoi(word);
                    break;
                case 5:
                    array[length].depth = atoi(word);
                    break;
                case 6:
                    array[length].volume = atoi(word);
                    break;
                case 7:
                    printf("word = %s\n", word);
                    printf("ch =%c", ch);
                    printf("word = %d\n", atoi(word));
                    array[length].water_type = atoi(word);
                    printf("length = %d\n", length);
                    number_collum = 0;
                    length++;
                    break;
                }

                free(word);
                word_size = 0;
                word = (char *)calloc(word_size, sizeof(char));
            }
            else
            {
                word = (char *)realloc(word, (word_size + 1) * sizeof(char));
                word[word_size] = ch;
                word_size++;
            }
        }
        free(word);
        fclose(file_pointer);

        FILE *indices_file_pointer = fopen("indices.txt", "wt");
        if (indices_file_pointer == NULL)
        {
            printf("[!] Индексный файл не может сохраниться!!!\n");
            pause_console();
        }
        else
        {
            for (int i = 0; i < length; i++)
            {
                fprintf(indices_file_pointer, "%d\n", i);
            }
            fclose(indices_file_pointer);
        } //конес условия открытости индексного файла
    } //конец условия открытости файла

    pause_console();
    menu(array, length);
}