#ifndef __CIRCULAR_QUEUE_HPP__
#define __CIRCULAR_QUEUE_HPP__

#include <iostream>

using Data = int;

class Queue
{
public:
    Queue();

    bool isEmpty() const;
    void enqueue(Data data);
    Data dequeue();
    Data peek();

private:
    static int const QUE_LEN = 100;

    int front;
    int rear;
    Data queArr[QUE_LEN];

    int nextPosIdx(int const pos) const;

};

#endif  // __CIRCULAR_QUEUE_HPP__