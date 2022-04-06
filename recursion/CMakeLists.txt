cmake_minimum_required(VERSION 3.21)
project(recursion)

set(CMAKE_CXX_STANDARD 14)

add_executable(recursion main.cpp Linkedlist.cpp Linkedlist.h Node.h recursion.cpp recursion.h)
