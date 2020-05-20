#ifndef _MENU_H_
    #define _MENU_H_

    #include <stdio.h>

    #include "add_element/add_element.h" //2
    #include "del_data/del_data.h" //6
    #include "open_file/open_file.h" //1
    #include "save_file/save_file.h" //4
    #include "write_table/write_table.h" //3
    #include "../../my_libs/clear_console/clear_console.h"

    void menu(struct reservoirs_of_the_country*, int);
#endif