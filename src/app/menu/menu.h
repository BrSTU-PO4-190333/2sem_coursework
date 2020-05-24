#ifndef _MENU_H_
    #define _MENU_H_

    #include <stdio.h>

    #include "open_file/open_file.h" //1
    #include "menu_add_element/menu_add_element.h" //2
    #include "out_data/out_data.h" //3
    #include "save_file/save_file.h" //4
    #include "correct_field/correct_field.h" //5
    #include "menu_del_data/menu_del_data.h" //6
    #include "menu_sort_data/menu_sort_data.h" //7
    #include "find_min_max_on_range/find_min_max_on_range.h" //8
    #include "find_arrange_on_range/find_arrange_on_range.h" //9
    #include "../../my_libs/clear_console/clear_console.h"

    void menu(struct reservoirs_of_the_country*, int);
#endif