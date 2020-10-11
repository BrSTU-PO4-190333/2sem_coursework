#include "open_file.h"

void open_file(struct data* array, int length)
{
    clear_console();

    int path_size = -1;
    printf("Размер строки для пути файла: ");
    while (path_size <= 0)
    {
        scanf("%d", &path_size);
    }

    char* path = (char*) calloc(path_size, sizeof(char));
    printf("Путь до файла: ");
    scanf("%s", path);

    read_file(array, length, path);
}

void read_file(struct data* array, int length, char* path)
{
    FILE* file_pointer = fopen(path, "r"); //получили указатель на файл
    free(path);
    if (file_pointer == NULL) //если указателя на файл нет
    {
        printf("Файл не может открыться для чтения\n");
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            free(array[i].name);
        }
        length = 0; //элементов в массиве теперь 0
        free(array); //очистка массива
        array = (struct data*) calloc(length, sizeof(struct data)); //выделение динамической памяти масиву

        int number_field = 0; //какая это колонка таблицы
        int word_size = 0; //размер слова
        char* word = (char*) calloc(word_size, sizeof(char)); //выделение памяти под слово
        while (!feof(file_pointer)) //пока не конец файла
        {
            char ch = fgetc(file_pointer); //взяли одну букву с файла
            if (ch != '\t' && ch != '\n') //если это не \t, \n
            {
                word = (char*) realloc(word, (word_size + 1)*sizeof(char)); //увеличиваем размер слова
                word[word_size] = ch; //записали букву в слово
                word_size++; //перешли к следующему индексу слова
            }
            else
            {
                number_field++; //переходим к следующей колонке таблицы
                switch(number_field)
                {
                    case 1: //data.name_size
                        length++;
                        array = (struct data*) realloc(array, length*sizeof(struct data));
                        array[length - 1].name_size = atoi(word);
                        break;
                    case 2: //data.name
                        array[length - 1].name = (char*) calloc(array[length - 1].name_size, sizeof(char));
                        strcpy(array[length - 1].name, word);
                        break;
                    case 3: //data.length
                        array[length - 1].length = (long int) atoi(word);
                        break;
                    case 4: //data.area
                        array[length - 1].area = (long int) atoi(word);
                        break;
                    case 5: //data.number_of_ports
                        array[length - 1].number_of_ports = atoi(word);
                        break;
                    case 6: //data.water_type
                        array[length - 1].water_type = atoi(word);

                        number_field = 0; //начался новый элемент, поэтому начинаем смотреть case по новой
                        break;
                }
                word_size = 0; //нумерация букв в слове начинается с 0
                free(word); //очистка слова
                word = (char*) calloc(word_size, sizeof(char)); //выделение памяти под слово
            } //конец условия проверки \t, \n
        } //конец цикла проверки не конца файла
        free(word);
        fclose(file_pointer);
    }
    
    pause_console();
    menu(array, length); 
}