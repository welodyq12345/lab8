#ifndef LAB_7_CIRCULAR_Q_LIST_H
#define LAB_7_CIRCULAR_Q_LIST_H

#include <iostream>
#include <ostream>
#include "D_list.h"

using namespace std;

template <typename T>

class CircularQueueList
{
    DoubleLinkedList<T> list;
    size_t capacity;

public:
    CircularQueueList() = default;
    CircularQueueList(size_t capacity) : list(), capacity(capacity) {}

    bool isEmpty() const
    {
        if (list.getSize() == 0)
            return true;
        return false;
    }

    bool isFull() const {
        return list.getSize() == capacity;
    }

    void enqueue(const T &obj)
    {
        list.insertAtEnd(obj);
    }

    T dequeue()
    {
        if (isEmpty())
        {
            throw underflow_error("Queue is empty!!!");
        }
        T obj = list[0];
        list.removeFromBeginning();
        return obj;
    }

    T peek() const
    {
        if (isEmpty())
        {
            throw out_of_range("Queue is empty!!!");
        }
        return list[0];
    }

    friend ostream &operator<<(ostream &os, CircularQueueList<T> &circularQueue)
    {
        os << circularQueue.list;
        return os;
    }
};

#endif