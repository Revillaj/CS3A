//
// Created by Jose Revilla on 3/23/22.
//

#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H
#include "Linkedlist.h"
template <class T>
class stack
{
private:
    Linkedlist<T> list;

public:
    void pop();
    void push(T item);

};


#endif //LINKED_LIST_STACK_H
