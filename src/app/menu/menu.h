#ifndef _MENU_H_
    #define _MENU_H_

    #include <stdio.h>

    #include "open_file/open_file.h" //1
    #include "add_element/add_element.h" //2
    #include "out_data/out_data.h" //3
    #include "save_file/save_file.h" //4
    #include "correct_field/correct_field.h" //5
    #include "menu_del_data/menu_del_data.h" //6
    #include "add_element/add_element_on_position.h" //7
    #include "menu_sort_data/menu_sort_data.h" //8
    #include "../../my_libs/clear_console/clear_console.h"

    void menu(struct reservoirs_of_the_country*, int);
#endif