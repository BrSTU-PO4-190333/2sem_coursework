#ifndef _SAVE_TO_TSV_FILE_H_
    #define _SAVE_TO_TSV_FILE_H_

    #include <stdio.h>

    #include "../menu.h"
    #include "../../main.h"

    void save_to_tsv_file(struct data* array, int length);
    void fprint_separator(FILE* file_pointer);
#endif