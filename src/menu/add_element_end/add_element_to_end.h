#ifndef _ADD_ELEMENT_TO_END_H_
    #define _ADD_ELEMENT_TO_END_H_

    #include <stdlib.h>

    #include "../menu.h"
    #include "../../main.h"
    #include "../../libs/clear_console/clear_console.h"
    #include "../../libs/pause_console/pause_console.h"
    #include "../../libs/getch/getch.h"

    void add_element_to_end(struct data* array, int length);
    void input_name(struct data* array, int length);
    void input_length(struct data* array, int length);
    void input_area(struct data* array, int length);
    void input_number_of_ports(struct data* array, int length);
    void input_type(struct data* array, int length);
#endif