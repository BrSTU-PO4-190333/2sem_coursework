#ifndef _MENU_H_
    #define _MENU_H_

    #include "../libs/getch/getch.h"
    #include "../libs/clear_console/clear_console.h"
    #include "open_file/open_file.h" //1
    #include "add_element_end/add_element_to_end.h" //2
    #include "view_all_elements/view_all_elements.h" //3
    #include "save_to_tsv_file/save_to_tsv_file.h" //4
    #include "correct_field/correct_field.h" //5
    #include "delete_element/delete_element.h" //6

    void menu(struct data* array, int length);
#endif