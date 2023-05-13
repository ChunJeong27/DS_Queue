#ifndef __LIST_BASE_QUEUE_HPP__
#define __LIST_BASE_QUEUE_HPP__

using Data = double;

typedef struct _node
{
    Data data;
    struct _node* next;
} Node;

class Queue
{
public:
    Queue();

    bool isEmpty();
    void enqueue(Data data);
    Data dequeue();
    Data peek();

private:
    Node* front;
    Node* rear;

};

#endif  // __LIST_BASE_QUEUE_HPP__