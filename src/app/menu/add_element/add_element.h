#ifndef _ADD_ELEMENT_H_
    #define _ADD_ELEMENT_H_

    #include <stdio.h>
    #include <stdlib.h>

    #include "../../../my_libs/clear_console/clear_console.h"
    #include "../../../my_libs/pause_console/pause_console.h"
    #include "../../../my_libs/getch/getch.h"
    #include "input_depth/input_depth.h"
    #include "input_length/input_length.h"
    #include "input_name/input_name.h"
    #include "input_type/input_type.h"
    #include "input_volume/input_volume.h"
    #include "input_width/input_width.h"
    #include "../../app.h"
    #include "../menu.h"

    void add_element(struct reservoirs_of_the_country*, int);
#endif