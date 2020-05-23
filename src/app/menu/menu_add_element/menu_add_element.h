#ifndef _MENU_ADD_ELEMENT_H_
    #define __MENU_ADD_ELEMENT_H_

    #include <stdio.h>

    #include "../menu.h"
    #include "../../../my_libs/clear_console/clear_console.h"
    #include "../../../my_libs/pause_console/pause_console.h"
    #include "add_element_on_end/add_element_on_end.h"
    #include "add_element_before_element/add_element_before_element.h"
    #include "add_element_on_position/add_element_on_position.h"
    #include "add_element_after_element/add_element_after_element.h"
    #include "replace_element/replace_element.h"

    void menu_add_element(struct reservoirs_of_the_country*, int);
#endif