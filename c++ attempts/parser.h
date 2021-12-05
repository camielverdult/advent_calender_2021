//
// Created by Camiel Verdult on 12/3/2021.
//

#ifndef INC_2_PARSER_H
#define INC_2_PARSER_H

#include <string>
#include <sstream>
#include <vector>
#include <iterator>


class parser {
public:
    static std::pair<std::string, int> parse_line(std::string line, std::string delimiter);
};


#endif //INC_2_PARSER_H
