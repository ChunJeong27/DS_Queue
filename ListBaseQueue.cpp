#include "ListBaseQueue.hpp"
#include <iostream>

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}

bool Queue::isEmpty()
{
    if (front == nullptr)
        return true;
    else
        return false;
}

void Queue::enqueue(Data data)
{
    Node* newNode = new Node;
    newNode->next = nullptr;
    newNode->data = data;

    if ( isEmpty() )
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

Data Queue::dequeue()
{
    Node* delNode;
    Data retData;

    if ( isEmpty() )
    {
        std::cerr << "Queue Memory Error!";
        exit(-1);
    }

    delNode = front;
    retData = delNode->data;
    front = front->next;

    delete(delNode);
    return retData;
}

Data Queue::peek()
{
    if ( isEmpty() )
    {
        std::cerr << "Queue Memory Error!";
        exit(-1);
    }

    return front->data;
}