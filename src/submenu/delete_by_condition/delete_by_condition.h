#ifndef _DELETE_BY_CONDITION_H_
    #define _DELETE_BY_CONDITION_H_

    #include "../../main.h"
    #include "../../menu/menu.h"

    void delete_elements_if_is_less_length(struct data* array, int length);
    void delete_elements_if_is_less_area(struct data* array, int length);
    void delete_elements_if_is_less_number_of_ports(struct data* array, int length);
    void delete_elements_if_is_more_length(struct data* array, int length);
    void delete_elements_if_is_more_area(struct data* array, int length);
    void delete_elements_if_is_more_number_of_ports(struct data* array, int length);
#endif