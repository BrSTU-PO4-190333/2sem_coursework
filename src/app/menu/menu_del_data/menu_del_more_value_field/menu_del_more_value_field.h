#ifndef _MENU_DEL_MORE_VALUE_FIELD_H_
    #define _MENU_DEL_MORE_VALUE_FIELD_H_

    #include <stdio.h>

    #include "del_if_more_length/del_if_more_length.h"
    #include "del_if_more_width/del_if_more_width.h"
    #include "del_if_more_depth/del_if_more_depth.h"
    #include "del_if_more_volume/del_if_more_volume.h"
    #include "../../menu.h"
    #include "../../out_data/write_head_table/write_head_table.h"
    #include "../../out_data/write_one_element/write_one_element.h"
    #include "../../out_data/print_sep/print_sep.h"
    #include "../../../app.h"
    #include "../../../../my_libs/clear_console/clear_console.h"

    void menu_del_more_value_field(struct reservoirs_of_the_country*, int);
#endif