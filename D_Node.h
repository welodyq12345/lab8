#ifndef LAB_7_D_NODE_H
#define LAB_7_D_NODE_H

#include <iostream>
#include <memory>

using namespace std;

template <typename T>

struct DoubleNode
{
    T data;
    shared_ptr <DoubleNode> next;
    weak_ptr <DoubleNode> previous;

    DoubleNode(T value) : data(value) {}
};

#endif
