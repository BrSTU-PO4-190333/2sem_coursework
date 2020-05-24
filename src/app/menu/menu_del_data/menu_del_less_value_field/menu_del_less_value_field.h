#ifndef _MENU_DEL_LESS_VALUE_FIELD_H_
    #define _MENU_DEL_LESS_VALUE_FIELD_H_

    #include "../../../app.h"
    #include "../../menu.h"
    #include "del_if_less_length/del_if_less_length.h"
    #include "del_if_less_width/del_if_less_width.h"
    #include "del_if_less_depth/del_if_less_depth.h"
    #include "del_if_less_volume/del_if_less_volume.h"
    #include "../../out_data/write_head_table/write_head_table.h"
    #include "../../out_data/write_one_element/write_one_element.h"
    #include "../../out_data/print_sep/print_sep.h"
    #include "../../../../my_libs/clear_console/clear_console.h"

    void menu_del_less_value_field(struct reservoirs_of_the_country*, int);
#endif