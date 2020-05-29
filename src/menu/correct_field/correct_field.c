#include "correct_field.h"

void correct_field(struct data* array, int length)
{
    clear_console();

    if (length <= 0)
    {
        printf("Массив пуст - нет чего редактировать\n");
    }
    else
    {
        int position = -1;
        while(position < 0 || position > length)
        {
            clear_console();
            printf("Какой элемент редактировать: ");
            scanf("%d", &position);
        }

        correct_field_menu(array, position);
    }
    
    pause_console();
    menu(array, length);
}

void correct_field_menu(struct data* array, int position)
{
    clear_console();

    printf("1. Редактировать поле названия водоема страны\n");
    printf("2. Редактировать поле протяженности\n");
    printf("3. Редактировать поле площади\n");
    printf("4. Редактировать поле количество портов\n");
    printf("5. Редактировать типа водоема\n");
    printf("0. Выйти из меню\n");

    switch(getch())
    {
        case '0':
            break;
        case '1':
            correct_name(array, position);
            break;
        case '2':
            correct_length(array, position);
            break;
        case '3':
            correct_area(array, position);
            break;
        case '4':
            correct_number_of_ports(array, position);
            break;
        case '5':
            correct_type(array, position);
            break;
        default:
            correct_field_menu(array, position);
    }
}

void correct_name(struct data* array, int position)
{
    clear_console();

    printf("Размер строки для названия водоёма: ");
    scanf("%d", &array[position].name_size);

    printf("Названия водоёма: ");
    free(array[position].name);
    array[position].name = (char*) calloc(array[position].name_size, sizeof(char));
    scanf("%s", array[position].name);
}

void correct_length(struct data* array, int position)
{
    clear_console();

    printf("Протяжёность: ");
    scanf("%ld", &array[position].length);
}

void correct_area(struct data* array, int position)
{
    clear_console();

    printf("Площадь: ");
    scanf("%ld", &array[position].area);
}

void correct_number_of_ports(struct data* array, int position)
{
    clear_console();

    printf("Количество портов: ");
    scanf("%d", &array[position].number_of_ports);
}

void correct_type(struct data* array, int position)
{
    clear_console();
    
    printf("Тип водоема:\n");
    printf("0. Искусственный\n");
    printf("1. Природный\n");

    switch(getch())
    {
    case '0':
        array[position].water_type = artificial;
        break;
    case '1':
        array[position].water_type = natural;
        break;
    default:
        correct_type(array, position);
    }
}