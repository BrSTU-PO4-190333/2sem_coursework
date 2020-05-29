#ifndef _SUB_MENU_H_
    #define _SUB_MENU_H_

    #include <stdio.h>

    #include "../main.h"
    #include "../menu/menu.h"
    #include "../libs/getch/getch.h"
    #include "sort_elements/sort_elements.h" //2
    #include "add_element_before/add_element_before.h" //3

    void submenu(struct data* array, int length);
#endif