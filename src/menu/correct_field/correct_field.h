#ifndef _CORRECT_FIELD_H_
    #define _CORRECT_FIELD_H_

    #include <stdio.h>
    #include <stdlib.h>

    #include "../menu.h"
    #include "../../main.h"
    #include "../../libs/clear_console/clear_console.h"
    #include "../../libs/pause_console/pause_console.h"

    void correct_field(struct data* array, int length);
    void correct_field_menu(struct data* array, int position);
    void correct_name(struct data* array, int position);
    void correct_length(struct data* array, int position);
    void correct_area(struct data* array, int position);
    void correct_number_of_ports(struct data* array, int position);
    void correct_type(struct data* array, int position);
#endif