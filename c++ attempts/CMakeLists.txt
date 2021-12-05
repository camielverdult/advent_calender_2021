cmake_minimum_required(VERSION 3.21)
project(2)

set(CMAKE_CXX_STANDARD 23)

add_executable(2 main.cpp file_reader.cpp file_reader.h driver.cpp driver.h parser.cpp parser.h i_movement.h)
