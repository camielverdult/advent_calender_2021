//
// Created by Camiel Verdult on 12/3/2021.
//

#ifndef INC_2_DRIVER_H
#define INC_2_DRIVER_H

#include <string>

class driver {
public:

    driver();
    void go_up();
    void go_down();
    void go_forward();

    void parse(std::pair<std::string, int> movement);

private:
    int x, z;
};


#endif //INC_2_DRIVER_H
