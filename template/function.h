//
// Created by Jose Revilla on 2/10/22.
//

#ifndef TEMPLATE_FUNCTION_H
#define TEMPLATE_FUNCTION_H
#include <cstdlib>
#include <iostream>

template <class T>
void fillArray(T arr, int size);

template <class T>
void printArray(T arr, int size);

#include "function.cpp"
#endif //TEMPLATE_FUNCTION_H
