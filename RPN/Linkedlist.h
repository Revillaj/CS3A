//
// Created by Jose Revilla on 3/14/22.
//

#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H

#include "Node.h"
#include <iostream>
#include <ostream>

template <class T>
class Linkedlist {

private:

    Node<T>* head = nullptr, * tail = nullptr;
    void addFirstNode(T item);
    Node<T>* createNode(T item);


public:

    Linkedlist();
    Linkedlist(const Linkedlist<T>& list);
    ~Linkedlist();

    void push_front(T item);
    void push_back(T item);

    void insert_after(T inserting, T after);
    void insert_before(T inserting, T before);

    void remove_target(T item);
    void pop_front();
    void pop_back();

    void print();

    T& front();
    T& back();

    bool empty();
    int size();



    void searchValue(T target);
    Node<T>* search(T target);

    friend std::ostream& operator <<(std::ostream& out, const Linkedlist<T>& list);

};

#include "Linkedlist.cpp"
#endif //LINKED_LIST_LINKEDLIST_H
