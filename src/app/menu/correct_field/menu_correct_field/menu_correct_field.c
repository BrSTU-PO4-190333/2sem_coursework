void menu_correct_field(struct reservoirs_of_the_country *array, int length, int number_correct_field)
{
    clear_console();
    printf("Редактированный элемент: %d\n", number_correct_field);
    printf("\n");
    printf("Меню:\n");
    printf("1. Корректировать поле названия\n");
    printf("2. Корректировать поле длины\n");
    printf("3. Корректировать поле ширины\n");
    printf("4. Корректировать поле глубины\n");
    printf("5. Корректировать поле объема\n");
    printf("6. Корректировать поле типа\n");
    printf("0. Выйти в главное меню\n");

    int choosen_menu_case;

    switch (choosen_menu_case = getch())
    {
    case '0':
        break;
    case '1':
        input_name(array, number_correct_field);
        break;
    case '2':
        input_length(array, number_correct_field);
        break;
    case '3':
        input_width(array, number_correct_field);
        break;
    case '4':
        input_depth(array, number_correct_field);
        break;
    case '5':
        input_volume(array, number_correct_field);
        break;
    case '6':
        input_type(array, number_correct_field);
        break;
    default:
        menu_correct_field(array, length, number_correct_field);
    }
}