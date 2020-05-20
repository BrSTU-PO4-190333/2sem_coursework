#ifndef _APP_H_
    #define _APP_H_

    #include <stdlib.h>

    enum water_type
    {
        artificial, //искусственный
        natural //природный
    };

    struct reservoirs_of_the_country
    {
        int name_size; //длина названия
        char* name; //название
        long int length; //длина
        long int width; //ширина
        long int depth; //глубина
        long int volume; //объем
        enum water_type water_type; // назначение
    };

    #include "menu/menu.h"

    void app();
#endif