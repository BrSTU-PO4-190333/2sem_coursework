#ifndef _VIEW_ALL_ELEMENTS_H_
    #define _VIEW_ALL_ELEMENTS_H_


    #include "../menu.h"
    #include "../../main.h"
    #include "../../libs/clear_console/clear_console.h"
    #include "../../libs/pause_console/pause_console.h"

    void view_all_elements(struct data* array, int length);
    void print_one_element(struct data* array, int position);
    void print_head_table();
    void print_separator();
    void print_line(int k);
#endif