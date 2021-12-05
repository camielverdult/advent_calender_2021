//
// Created by Camiel Verdult on 12/3/2021.
//

#include "file_reader.h"

std::vector<std::string> file_reader::parse_file(std::string path) {
    std::ifstream file;

    file.open(path);

    if (!file.is_open()) {
        std::cout << "Error opening " << path << std::endl;
        return std::vector<std::string>();
    }

    std::string line;
    std::vector<std::string> lines;

    while (std::getline(file ,line))
    {
        lines.push_back(line);
    }

    return lines;
}
