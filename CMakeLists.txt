cmake_minimum_required(VERSION 3.24)
project(XTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(XTest tests/main.cpp Test.h tests/Creation.cpp)
