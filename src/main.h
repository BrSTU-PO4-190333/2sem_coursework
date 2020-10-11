#ifndef _MAIN_H_
    #define _MAIN_H_

    #include <stdlib.h>

    #include "menu/menu.h"

    struct data
    {
        int name_size;
        char* name;
        long int length;
        long int area;
        int number_of_ports;
        enum
        {
            artificial,
            natural
        } water_type;
    };

#endif