#ifndef LAB_7_STACK_ARRAY_H
#define LAB_7_STACK_ARRAY_H

#include <iostream>

using namespace std;

template <typename T>
class StackArray
{
    T* elements;
    int capacity;
    int top;

public:
    StackArray()
    {
        capacity = 10;
        top = 0;
        elements = new T[capacity];
    }

    ~StackArray()
    {
        delete[] elements;
    }

    bool isEmpty() const
    {
        return top == 0;
    }

    T peek() const
    {
        if (isEmpty())
        {
            throw out_of_range("Stack is empty");
        }
        return elements[top - 1];
    }

    void push(const T& obj)
    {
        if (top == capacity)
        {
            throw out_of_range("Stack is overflowed");
        }
        elements[top++] = obj;
    }

    T pop()
    {
        if (isEmpty())
        {
            throw underflow_error("Stack is empty");
        }
        T obj = elements[--top];
        if (top == capacity)
        {
            throw out_of_range("Stack is underflowed");
        }
        return obj;
    }

    int Size() const
    {
        return top;
    }

    friend ostream &operator<<(ostream &os, StackArray<T> &stack)
    {
        for (size_t i = 0; i < stack.top; i++)
        {
            os << stack.elements[i] << " ";
        }
        return os << endl;
    }

};

#endif
