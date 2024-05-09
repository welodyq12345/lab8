#include <iostream>
#include "S_list.h"
#include "D_list.h"

#include "Circular_Q_list.h"
#include "Circular_Q_array.h"
#include "Q_list.h"
#include "Q_array.h"
#include "Stack_list.h"
#include "Stack_array.h"

using namespace std;

void line();
void curiousLine();
void singleList();
void doubleList();

void circularQueueListEx();
void circularQueueArrayEx();
void queueListEx();
void queueArrayEx();
void stackListEx();
void stackArrayEx();

int main() {

    singleList();
    system("pause");

    doubleList();
    system("pause");

    circularQueueListEx();
    system("pause");

    circularQueueArrayEx();
    system("pause");

    queueListEx();
    system("pause");

    queueArrayEx();
    system("pause");

    stackListEx();
    system("pause");

    stackArrayEx();
    system("pause");

    return 0;
}

void line() { cout << "------------------------\n"; }
void curiousLine() { cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n"; }
void singleList()
{
    SingleLinkedList<int> s_list;

    curiousLine();
    cout << "Single Linked List:" << endl;
    line();

    if (s_list.isEmpty())
    {
        line();
        cout << "List is empty!" << endl;
        line();
    }


    line();
    s_list.insertAtBeginning(1);
    s_list.insertAtBeginning(0);
    s_list.insertAtEnd(5);
    s_list.insertAtEnd(6);
    s_list.insertAtEnd(7);
    s_list.insertAtEnd(8);

    cout << s_list;

    line();


    line();

    s_list.removeFromEnd();
    s_list.removeFromBeginning();
    cout << s_list;

    line();


    line();

    s_list.removeAtIndex(0);
    s_list.insertAtIndex(1, 3);
    s_list.insertAtIndex(3, 3);
    cout << s_list;

    line();


    line();

    if (s_list.search(2))
        cout << "List have element 2!" << endl;
    else
        cout << "List don't have element 2!" << endl;

    line();


    line();

    cout << "Size of list: " << s_list.getSize() << endl;

    line();


    line();

    cout << "The result of math operation between element with index 3, and with element with index 2, is: " << s_list[3] - s_list[2] << endl;

    line();

    curiousLine();
};

void doubleList()
{
    curiousLine();
    cout << "Double Linked List:" << endl;
    line();

    DoubleLinkedList<int> d_list;

    line();

    if (d_list.isEmpty())
        cout << "List is empty!" << endl;

    line();


    line();

    d_list.insertAtBeginning(2);
    d_list.insertAtBeginning(1);
    d_list.insertAtBeginning(0);
    d_list.insertAtEnd(3);
    d_list.insertAtEnd(4);

    cout << d_list;

    line();


    line();

    d_list.removeFromEnd();
    d_list.removeFromBeginning();

    cout << d_list;

    line();


    line();

    d_list.removeAtIndex(1);
    d_list.insertAtIndex(0,5);

    cout << d_list;

    line();


    line();

    if (d_list.search(2))
        cout << "List have element 2" << endl;
    else
        cout << "List don't have element 2" << endl;

    line();


    line();

    cout << "Size of list: " << d_list.getSize() << endl;

    line();


    line();

    cout << "The result of math operation between element with index 0, and with element with index 2, is: " << d_list[0] - d_list[2] << endl;

    line();

    curiousLine();
};

void circularQueueListEx()
{
    curiousLine();
    cout << "Circular Queue List:" << endl;
    line();

    CircularQueueList<int> circular_q_list;

    line();
    if (circular_q_list.isEmpty())
        cout << "Queue is empty!" << endl;
    line();


    line();
    circular_q_list.enqueue(1);
    circular_q_list.enqueue(2);
    circular_q_list.enqueue(3);

    cout << circular_q_list;
    line();


    line();
    if (circular_q_list.isFull())
        cout << "Queue is full!" << endl;
    else
        cout << "Queue is not full!" << endl;
    line();


    line();
    cout << "Dequeued element: " << circular_q_list.dequeue() << endl;
    line();


    line();
    cout << circular_q_list;
    line();


    line();
    cout << "First element in queue: " << circular_q_list.peek() << endl;
    line();

    curiousLine();
}

void circularQueueArrayEx()
{
    curiousLine();
    cout << "Circular Queue Array:" << endl;
    line();

    CircularQueueArray <int> circular_q_array;

    line();
    if (circular_q_array.isEmpty())
        cout<<"Queue is empty"<<endl;
    line();


    line();
    circular_q_array.enqueue(1);
    circular_q_array.enqueue(0);
    circular_q_array.enqueue(2);

    cout<<circular_q_array;
    line();


    line();
    if (circular_q_array.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    line();


    line();
    cout<<"Dequeued element: "<<circular_q_array.dequeue()<<endl;
    line();


    line();
    cout<<circular_q_array;
    line();


    line();
    cout<<"First element in queue: "<<circular_q_array.peek()<<endl;
    line();

    curiousLine();
}

void queueListEx()
{
    curiousLine();
    cout << "Queue List:" << endl;
    line();

    QueueList <int> q_list;

    line();
    if (q_list.isEmpty())
        cout<<"Queue is empty"<<endl;
    line();


    line();
    q_list.enqueue(2);
    q_list.enqueue(3);
    q_list.enqueue(5);

    cout<<q_list;
    line();


    line();
    if (q_list.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    line();


    line();
    cout<<"Dequeued element: "<<q_list.dequeue()<<endl;
    line();


    line();
    cout<<q_list;
    line();


    line();
    cout<<"First element in queue: "<<q_list.peek()<<endl;
    line();

    curiousLine();
}


void queueArrayEx()
{
    curiousLine();
    cout << "Queue Array:" << endl;
    line();

    QueueArray<int>A;

    line();
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    line();


    line();
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);

    cout<<A;
    line();


    line();
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    line();


    line();
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    line();


    line();
    cout<<A;
    line();


    line();
    cout<<"First element in queue: "<<A.peek()<<endl;
    line();

    curiousLine();
}

void stackListEx()
{
    curiousLine();
    cout << "Stack List:" << endl;
    line();

    StackList <int> A;

    line();
    if (A.isEmpty())
        cout<<"Stack is empty"<<endl;
    line();


    line();
    A.push(1);
    A.push(0);
    A.push(2);

    cout<<A;
    line();


    line();
    cout<<"Poped element: "<<A.pop()<<endl;
    line();


    line();
    cout<<A;
    line();


    line();
    cout<<"First element in stack: "<<A.peek()<<endl;
    line();

    curiousLine();
}

void stackArrayEx(){
    curiousLine();
    cout << "Stack Array:" << endl;
    line();

    StackArray<int>A;

    line();
    if (A.isEmpty())
        cout<<"Stack is empty"<<endl;
    line();


    line();
    A.push(1);
    A.push(0);
    A.push(2);

    cout<<A;
    line();


    line();
    cout<<"Poped element: "<<A.pop()<<endl;
    line();


    line();
    cout<<A;
    line();


    line();
    cout<<"First element in stack: "<<A.peek()<<endl;
    line();

    curiousLine();
}
