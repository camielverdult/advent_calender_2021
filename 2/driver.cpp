//
// Created by Camiel Verdult on 12/3/2021.
//

#include "driver.h"

driver::driver() {
    x, z = 0;
}

void driver::go_up() {
    z++;
}

void driver::go_down() {
    z--;
}

void driver::go_forward() {
    x++;
}

void driver::parse(std::pair<std::string, int> movement) {
    switch (movement.first) {
        case ("forward") {

        }
    }
}

