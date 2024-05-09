#ifndef LAB_7_S_NODE_H
#define LAB_7_S_NODE_H

#include <iostream>
#include <memory>

using namespace std;

template <typename T>

struct SingleNode
{
    T data;
    unique_ptr <SingleNode> next;

    SingleNode(T value) : data{value}, next{nullptr} {}
};


#endif