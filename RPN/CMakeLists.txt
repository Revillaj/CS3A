cmake_minimum_required(VERSION 3.21)
project(RPN)

set(CMAKE_CXX_STANDARD 14)

add_executable(RPN main.cpp Linkedlist.cpp Linkedlist.h stack.cpp stack.h Node.h ReversePolishNotation.cpp ReversePolishNotation.h Queue.cpp Queue.h)
