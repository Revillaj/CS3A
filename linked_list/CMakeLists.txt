cmake_minimum_required(VERSION 3.21)
project(linked_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(linked_list main.cpp Node.h Linkedlist.cpp Linkedlist.h stack.cpp stack.h)
