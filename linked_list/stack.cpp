//
// Created by Jose Revilla on 3/23/22.
//

#include "stack.h"

template<class T>
void stack<T>::pop()
{
    list.pop_front();
}

template<class T>
void stack<T>::push(T item)
{
    list.push_front(item);
}
