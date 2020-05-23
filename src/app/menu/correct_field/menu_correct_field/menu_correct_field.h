#ifndef _MENU_CORRECT_FIELD_H_
    #define _MENU_CORRECT_FIELD_H_

    #include <stdio.h>

    #include "../../../../my_libs/getch/getch.h"
    #include "../../../../my_libs/clear_console/clear_console.h"
    #include "../../menu_add_element/input_name/input_name.h"
    #include "../../menu_add_element/input_length/input_length.h"
    #include "../../menu_add_element/input_width/input_width.h"
    #include "../../menu_add_element/input_depth/input_depth.h"
    #include "../../menu_add_element/input_volume/input_volume.h"
    #include "../../menu_add_element/input_type/input_type.h"
    #include "../../out_data/write_one_edit_element/write_one_edit_element.h"

    void menu_correct_field(struct reservoirs_of_the_country*, int, int);
#endif