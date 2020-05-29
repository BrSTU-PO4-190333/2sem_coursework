#ifndef _OPEN_FILE_H_
    #define _OPEN_FILE_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #include "../menu.h"
    #include "../../main.h"
    #include "../../libs/clear_console/clear_console.h"
    #include "../../libs/pause_console/pause_console.h"

    void open_file(struct data* array, int length);
    void read_file(struct data* array, int length, char* path);
#endif