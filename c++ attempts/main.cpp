#include <iostream>
#include "file_reader.h"
#include "parser.h"
#include "driver.h"

int main() {

    auto lines = file_reader::parse_file("input.txt");

    if (lines.empty()) {
        // Opening failed

        return 1;
    }

    driver sub_driver;

    for (auto line : lines) {
        std::pair<std::string, int> parsed_line = parser::parse_line(line, " ");

        sub_driver.parse(parsed_line);
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
