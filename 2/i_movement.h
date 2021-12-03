//
// Created by Camiel Verdult on 12/3/2021.
//

#ifndef INC_2_I_MOVEMENT_H
#define INC_2_I_MOVEMENT_H

#include <string>

typedef enum movement_t {
    FORWARD,
    DOWN,
    UP,
} movement;

class i_movement {
public:
    movement movement_type() {
        return id;
    }

private:
    movement id;
};


#endif //INC_2_I_MOVEMENT_H
