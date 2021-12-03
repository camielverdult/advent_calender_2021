//
// Created by Camiel Verdult on 12/3/2021.
//

#include "parser.h"

std::pair<std::string, int> parser::parse_line(std::string line, std::string delimiter = " ") {

    std::pair<std::string, int> move;

    int start = 0;
    int end = line.find(delimiter);

    start = end + delimiter.size();
    end = line.find(delimiter, start);

    move.first = line.substr(start, end - start);

    move.second = std::atoi(line.substr(start - end, end).c_str());

    return move;
}
