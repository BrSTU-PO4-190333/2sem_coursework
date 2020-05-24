#ifndef _WRITE_TABLE_H_
    #define _WRITE_TABLE_H_

    #include <stdio.h>

    #include "../../../app.h"
    #include "../../../../my_libs/clear_console/clear_console.h"
    #include "../../../../my_libs/pause_console/pause_console.h"
    #include "../print_sep/print_sep.h"
    #include "../print_line/print_line.h"
    #include "../write_one_element/write_one_element.h"
    #include "../write_head_table/write_head_table.h"
    #include "../out_average_values_in_line/out_average_values_in_line.h"
    #include "../out_min_values_in_line/out_min_values_in_line.h"
    #include "../out_max_values_in_line/out_max_values_in_line.h"

    void write_table(struct reservoirs_of_the_country*, int, int*, int);
#endif