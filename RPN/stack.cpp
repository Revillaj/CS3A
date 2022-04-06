//
// Created by Jose Revilla on 3/23/22.
//

#ifndef LINKED_LIST_STACK_CPP
#define LINKED_LIST_STACK_CPP
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

template<class T>
int stack<T>::size()
{
    return list.size();
}

template<class T>
bool stack<T>::empty()
{
    return list.empty();
}

template<class T>
T &stack<T>::Top()
{
    return list.front();
}

#endif