#ifndef _DEL_IF_MORE_VOLUME_H_
    #define _DEL_IF_MORE_VOLUME_H_

    #include <stdio.h>
    #include <stdlib.h>

    #include "../../../menu.h"
    #include "../../../out_data/write_head_table/write_head_table.h"
    #include "../../../out_data/write_one_element/write_one_element.h"
    #include "../../../out_data/print_sep/print_sep.h"
    #include "../../../../app.h"
    #include "../../../../../my_libs/pause_console/pause_console.h"
    #include "../../../../../my_libs/indices_array/make_indiced_array.h"

    void del_if_more_volume(struct reservoirs_of_the_country*, int);
#endif