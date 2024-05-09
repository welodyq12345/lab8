#ifndef LAB_7_S_LIST_H
#define LAB_7_S_LIST_H

#include <iostream>
#include <memory>
#include "S_Node.h"

using namespace std;
template <typename T>

class SingleLinkedList
{
    unique_ptr <SingleNode<T>> head;
    int size;

    void checkIndex (int index) const
    {
        if (index < 0 && index >= size)
        {
            throw out_of_range("Index out of range");
        }
    }

public:
    SingleLinkedList() : head{nullptr}, size{0} {};
    SingleLinkedList(T& obj) : head{make_unique<SingleNode<T>>(obj)}, size{1} {};

    T operator [] (int index) const
    {
        auto current = head.get();

        for (int i = 0; i < index; i++)
        {
            current = current->next.get();
        }
        return current->data;
    }

    void insertAtBeginning (T obj)
    {
        unique_ptr <SingleNode<T>> begin = make_unique<SingleNode<T>>(obj);
        begin->next = move(head);
        head = move(begin);
        size++;
    }

    void insertAtEnd (T obj)
    {
        unique_ptr <SingleNode<T>> end = make_unique<SingleNode<T>>(obj);
        auto current = head.get();

        if (!current)
        {
            head = move(end);
            size++;
            return;
        }
        while (current->next)
        {
            current = current->next.get();
        }
        current->next = move(end);
        size++;
    }

    void insertAtIndex (int index, T obj)
    {
        checkIndex(index);

        if (index == 0)
        {
            T insertAtBeginning(obj);
            return;
        } else if (index == size)
        {
            T insertAtEnd(obj);
            return;
        } else
        {
            unique_ptr <SingleNode<T>> newNode = make_unique<SingleNode<T>>(obj);
            auto current = head.get();

            for (int i = 0; i < index - 1; i++)
            {
                current = current->next.get();
            }
            newNode->next = move(current->next);
            current->next = move(newNode);
            size++;
        }
    }

    void removeFromBeginning()
    {
        if (!head)
        {
            throw out_of_range("List is empty!");
        }
        head = move(head->next);
        size--;
    }

    void removeFromEnd()
    {
        if (!head)
        {
            throw out_of_range("List is empty!");
        }
        if (size == 1)
        {
            head.reset();
            size--;
            return;
        } else
        {
            SingleNode<T> *current = head.get();

            while (current->next->next)
            {
                current = current->next.get();
            }
            current->next.reset();
            size--;
        }
    }

    void removeAtIndex (int index)
    {
        checkIndex(index);
        if (index == 0)
        {
            removeFromBeginning();
            return;
        } else if (index == size - 1)
        {
            removeFromEnd();
            return;
        } else
        {
            auto current = head.get();

            for (int i = 0; i < index; i++)
            {
                current = current->next.get();
            }
            current->next = move(current->next->next);
            size;
        }
    }

    bool search (T obj) const
    {
        auto current = head.get();

        while (current)
        {
            if (current->data == obj)
            {
                return true;
            }
            current = current->next.get();
        }
        return false;
    }

    int getSize() const
    {
        return size;
    }

    bool isEmpty()
    {
        if (!head)
            return true;
        else
            return false;
    }

    friend ostream &operator << (ostream &os, SingleLinkedList <T> &obj)
    {
        auto current = obj.head.get();

        while (current != nullptr)
        {
            os << current->data << " ";
            current = current->next.get();
        }
        return os << endl;
    }
};

#endif
