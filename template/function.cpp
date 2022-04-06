//
// Created by Jose Revilla on 2/10/22.
//

#ifndef TEMPLATE_FUNCTION_CPP
#define TEMPLATE_FUNCTION_CPP

#include "function.h"

template <class T>
void fillArray(T arr, int size)
{
    for(int i(0); i < size; i++)
        arr[i] = (rand() % ((65 + 26) - 65 + 1) + 65);
}
template <class T>
void printArray(T arr, int size)
{
    for(int i(0); i < size; i++)
        std::cout << arr[i] << " ";
    std::cout <<std::endl;
}
#endif