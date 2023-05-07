#ifndef __LIST_BASE_QUEUE_HPP__
#define __LIST_BASE_QUEUE_HPP__

using Data = int;

class Node
{
public:
    Data data;
    Node* next;
};

class Queue
{
public:
    Queue();

    int isEmpty();
    void enqueue(Data data);
    Data dequeue();
    Data peek();

private:
    Node* front;
    Node* rear;

};

#endif  // __LIST_BASE_QUEUE_HPP__