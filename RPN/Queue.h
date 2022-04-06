//
// Created by Jose Revilla on 3/29/22.
//

#ifndef LINKED_LIST1_QUEUE_H
#define LINKED_LIST1_QUEUE_H
#include "Linkedlist.h"

template<class T>
class Queue :  Linkedlist<T>
{
public:
    void push(T item);
    void pop();
    using Linkedlist<T>::size;
    using Linkedlist<T>::empty;
    T& top(); //queue
};

#include "Queue.cpp"
#endif
