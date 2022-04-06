//
// Created by Jose Revilla on 3/14/22.
//

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

template<class T>
struct Node
{
    T data;
    Node<T>* next = nullptr;
};

#endif //LINKED_LIST_NODE_H
