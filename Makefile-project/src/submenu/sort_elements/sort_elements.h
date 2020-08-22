#ifndef _SORT_ELEMENTS_H_
    #define _SORT_ELEMENTS_H_

    #include <string.h>

    #include "../../main.h"
    #include "../../menu/menu.h"
    #include "../../libs/getch/getch.h"
    #include "../../libs/clear_console/clear_console.h"
    #include "../../libs/pause_console/pause_console.h"

    void sort_elements(struct data* array, int length);
    void data_swap(struct data* a, struct data* b);
    void sort_by_field_name(struct data* array, int length);
    void sort_by_field_length(struct data* array, int length);
    void sort_by_field_area(struct data* array, int length);
    void sort_by_field_number_of_ports(struct data* array, int length);
    void sort_by_field_water_type(struct data* array, int length);
#endif