cmake_minimum_required(VERSION 3.21)
project(DateClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(DateClass main.cpp date.cpp date.h date_struct.h)
