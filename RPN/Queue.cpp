//
// Created by Jose Revilla on 3/29/22.
//

#ifndef LINKED_LIST1_QUEUE_CPP
#define LINKED_LIST1_QUEUE_CPP
#include "Queue.h"


template<class T>
void Queue<T>::push(T item)
{
    Linkedlist<T>::push_back(item);
}

template<class T>
void Queue<T>::pop()
{
    Linkedlist<T>::pop_front();
}

template<class T>
T& Queue<T>::top()
{
    return Linkedlist<T>::front();
}

#endif
