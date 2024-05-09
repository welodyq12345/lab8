#ifndef LAB_7_STACK_LIST_H
#define LAB_7_STACK_LIST_H

#include <iostream>
#include "D_list.h"

using namespace std;

template <typename T>

class StackList
{
    DoubleLinkedList<T> list;

public:
    StackList() : list() {}

    int Size() const
    {
        return list.getSize();
    }

    bool isEmpty()
    {
        return list.isEmpty();
    }

    T peek() const
    {
        if (list.isEmpty())
        {
            throw out_of_range("Stack is empty!!!");
        }
        return list[Size() - 1];
    }

    void push(const T& obj)
    {
        list.insertAtEnd(obj);
    }

    T pop()
    {
        if (isEmpty())
        {
            throw underflow_error("Stack is empty");
        }
        T obj = list[Size() - 1 ];
        list.removeFromEnd();
        return obj;
    }

    friend ostream &operator<<(ostream &os, StackList<T> &stack)
    {
        os << stack.list;
        return os;
    }

};

#endif
