#ifndef _MENU_SORT_DATA_H_
    #define _MENU_SORT_DATA_H_

    #include <stdio.h>
    #include <stdlib.h>

    #include "../menu.h"
    #include "../../../my_libs/pause_console/pause_console.h"
    #include "sort_field_name/sort_field_name.h"
    #include "sort_field_length/sort_field_length.h"
    #include "sort_field_width/sort_field_width.h"
    #include "sort_field_depth/sort_field_depth.h"
    #include "sort_field_volume/sort_field_volume.h"
    #include "sort_field_water_type/sort_field_water_type.h"

    void menu_sort_data(struct reservoirs_of_the_country*, int);
#endif