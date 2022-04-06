//
// Created by Jose Revilla on 3/14/22.
//


#ifndef LINKED_LIST_LINKEDLIST_CPP
#define LINKED_LIST_LINKEDLIST_CPP
#include "Linkedlist.h"

template<class T>
void Linkedlist<T>::addFirstNode(T item)
{
    Node<T>* n = createNode(item);
    head = tail = n;
}

template<class T>
Node<T> * Linkedlist<T>::createNode(T item)
{
    Node<T>* node = new Node<T>;
    node->data = item;
    node->next = nullptr;
    return node;
}

template<class T>
void Linkedlist<T>::push_front(T item)
{
    if(head == nullptr)
    {
        addFirstNode(item);
    }
    else
    {
        Node<T>* n = createNode(item);
        n->next = head;
        head = n;
    }
}

template<class T>
void Linkedlist<T>::push_back(T item)
{
    if(head == nullptr)
    {
        addFirstNode(item);
        return;
    }
    else
    {
        Node<T>* n = createNode(item);
        tail->next = n;
        tail = n;
    }
}

template<class T>
void Linkedlist<T>::remove_target(T item)
{
    if (head->data == item)
    {
        pop_front();
        return;
    }
    Node<T>* walker = head;
    while(walker->next != nullptr)
    {
        if(walker->next->data == item)
        {
            Node<T>* n = walker->next;
            walker->next = walker->next->next;
            delete(n);
            return;
        }
        walker = walker->next;
    }
    if(tail->data == item)
    {
        pop_back();
        return;
    }
    std::cout << "couldnt find '" << item << "', nothing has been changed." << std::endl;
}

template<class T>
void Linkedlist<T>::insert_after(T inserting, T after)
{
    if(head->data == after || tail->data == after)
    {
        push_back(inserting);
        return;
    }
    Node<T>* walker = head;
    while(walker != nullptr)
    {
        if(walker->data == after)
        {
            Node<T>* n = createNode(inserting);
            n->next = walker->next;
            walker->next = n;
            return;
        }
        walker = walker->next;
    }
    std::cout<<"Couldn't find " << after << ", nothing has been changed." << std::endl;
}

template<class T>
void Linkedlist<T>::insert_before(T inserting, T before)
{
    Node<T>* walker = head;
    if(head->data == before)
    {
        push_front(inserting);
        return;
    }
    while(walker != nullptr)
    {
        if(walker->next == nullptr)
        {
            std::cout<<"Couldn't find '" << before << "', nothing has been changed." << std::endl;
            return;
        }
        if(walker->next->data == before)
        {
            Node<T>* n = createNode(inserting);
            n->next = walker->next;
            walker->next = n;
            return;
        }
        walker = walker->next;
    }
}

template<class T>
void Linkedlist<T>::print()
{
    Node<T>* walker = head;
    if(head == nullptr)
    {
        std::cout << "Error: cannot print if no node exists";
    }
    while (walker != nullptr)
    {
        std::cout << walker->data << " ";
        walker = walker->next;
    }
    std::cout << std::endl;
}

template<class T>
Node<T> *Linkedlist<T>::search(T target)
{
    Node<T>* walker = head;
    while(walker != nullptr)
    {
        if(walker->data == target)
        {
            searchValue(target);
            return walker;
        }
        walker = walker->next;
    }
    std::cout << "Target '"<< target <<"' not found ";
    return nullptr;
}

template<class T>
void Linkedlist<T>::searchValue(T target)
{
    Node<T>* walker = head;
    while(walker != nullptr)
    {
        if(walker->data == target)
        {
            std::cout << "Found target '" << walker->data << "' at memory location ";
        }
        walker = walker->next;
    }
}

template<class T>
void Linkedlist<T>::pop_front()
{

    Node<T>* walker = head;
    head = walker->next;
    delete walker;
}

template<class T>
void Linkedlist<T>::pop_back()
{

    Node<T>* walker = head;
    while(walker != nullptr)
    {
        if(walker->next == tail)
        {
            delete (tail);
            walker->next = nullptr;
            tail = walker;
            return;
        }
        walker = walker->next;
    }
}

template<class T>
std::ostream& operator << (std::ostream& out, const Linkedlist<T>& list)
{
    Node<T>* walker = list.head;
    while(walker != nullptr)
    {
        std::cout << walker->data;
        walker = walker->next;
    }
}

template<class T>
T &Linkedlist<T>::front()
{
    if(head != nullptr)
        return head->data;
    std::cout << "No value in head";
    return head->data;
}

template<class T>
T &Linkedlist<T>::back()
{
    if(tail != nullptr)
        return tail->data;
    std::cout << "No value in tail";
    return tail->data;
}

template<class T>
Linkedlist<T>::Linkedlist() = default;

template<class T>
Linkedlist<T>::Linkedlist(const Linkedlist<T>& list)
{

}

template<class T>
Linkedlist<T>::~Linkedlist()
{
    while(head != nullptr)
    {
        remove_target(head->data);
    }
}

template<class T>
bool Linkedlist<T>::empty()
{
    if(head == nullptr)
        return true;
    return false;
}

template<class T>
int Linkedlist<T>::size()
{
    int _size;
    Node<T>* w = head;
    while(w != tail)
    {
        _size++;
        w = w->next;
    }
    return _size;
}


#endif