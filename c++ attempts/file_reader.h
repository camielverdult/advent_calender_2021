//
// Created by Camiel Verdult on 12/3/2021.
//

#ifndef INC_2_FILE_READER_H
#define INC_2_FILE_READER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

class file_reader {
public:
    static std::vector<std::string> parse_file(std::string path);
};


#endif //INC_2_FILE_READER_H
