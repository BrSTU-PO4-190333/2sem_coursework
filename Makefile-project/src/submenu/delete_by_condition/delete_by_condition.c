#include "delete_by_condition.h"

void delete_by_condition(struct data* array, int length)
{
    printf("Меню:\n");
    printf("1. Удаление элементов, если поле протяженности < числа\n");
    printf("2. Удаление элементов, если поле площади < числа\n");
    printf("3. Удаление элементов, если поле количества портов < числа\n");
    printf("4. Удаление элементов, если поле протяженности > числа\n");
    printf("5. Удаление элементов, если поле площади > числа\n");
    printf("6. Удаление элементов, если поле количества портов > числа\n");
    printf("0. Выйти из меню\n");

    switch(getch())
    {
        case '0':
            break;
        case '1':
            delete_elements_if_is_less_length(array, length);
            break;
        case '2':
            delete_elements_if_is_less_area(array, length);
            break;
        case '3':
            delete_elements_if_is_less_number_of_ports(array, length);
            break;
        case '4':
            delete_elements_if_is_more_length(array, length);
            break;
        case '5':
            delete_elements_if_is_more_area(array, length);
            break;
        case '6':
            delete_elements_if_is_less_number_of_ports(array, length);
            break;
        default:
            delete_by_condition(array, length);
    }
}

void delete_elements_if_is_less_length(struct data* array, int length)
{
    int number;
    printf("Удалить поля протяженности, если они < чем число: ");
    scanf("%d", &number);
    
    for (int i = 0; i < length; i++)
    {
        if (array[i].length < number)
        {
            for (int j = i; j < length; j++)
            {
                array[j] = array[j + 1];
            }
            length--;
            array = (struct data*) realloc(array, length*sizeof(struct data));
            i--;
        }
    }
    menu(array, length);
}

void delete_elements_if_is_less_area(struct data* array, int length)
{
    int number;
    printf("Удалить поля площади, если они < чем число: ");
    scanf("%d", &number);
    
    for (int i = 0; i < length; i++)
    {
        if (array[i].area < number)
        {
            for (int j = i; j < length; j++)
            {
                array[j] = array[j + 1];
            }
            length--;
            array = (struct data*) realloc(array, length*sizeof(struct data));
            i--;
        }
    }
    menu(array, length);
}

void delete_elements_if_is_less_number_of_ports(struct data* array, int length)
{
    int number;
    printf("Удалить поля кол-ва портов, если они < чем число: ");
    scanf("%d", &number);
    
    for (int i = 0; i < length; i++)
    {
        if (array[i].number_of_ports < number)
        {
            for (int j = i; j < length; j++)
            {
                array[j] = array[j + 1];
            }
            length--;
            array = (struct data*) realloc(array, length*sizeof(struct data));
            i--;
        }
    }
    menu(array, length);
}

void delete_elements_if_is_more_length(struct data* array, int length)
{
    int number;
    printf("Удалить поля протяженности, если они > чем число: ");
    scanf("%d", &number);
    
    for (int i = 0; i < length; i++)
    {
        if (array[i].length > number)
        {
            for (int j = i; j < length; j++)
            {
                array[j] = array[j + 1];
            }
            length--;
            array = (struct data*) realloc(array, length*sizeof(struct data));
            i--;
        }
    }
    menu(array, length);
}

void delete_elements_if_is_more_area(struct data* array, int length)
{
    int number;
    printf("Удалить поля площади, если они > чем число: ");
    scanf("%d", &number);
    
    for (int i = 0; i < length; i++)
    {
        if (array[i].area > number)
        {
            for (int j = i; j < length; j++)
            {
                array[j] = array[j + 1];
            }
            length--;
            array = (struct data*) realloc(array, length*sizeof(struct data));
            i--;
        }
    }
    menu(array, length);
}

void delete_elements_if_is_more_number_of_ports(struct data* array, int length)
{
    int number;
    printf("Удалить поля кол-ва портов, если они > чем число: ");
    scanf("%d", &number);
    
    for (int i = 0; i < length; i++)
    {
        if (array[i].number_of_ports > number)
        {
            for (int j = i; j < length; j++)
            {
                array[j] = array[j + 1];
            }
            length--;
            array = (struct data*) realloc(array, length*sizeof(struct data));
            i--;
        }
    }
    menu(array, length);
}