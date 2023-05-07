#include "CircularQueue.hpp"

Queue::Queue() : front(0), rear(0)
{
}

bool Queue::isEmpty() const
{
    if (front == rear)
        return true;
    else
        return false;
}

int Queue::nextPosIdx(int const pos) const
{
    if(pos == QUE_LEN - 1)
        return 0;
    else
        return pos + 1;
}

void Queue::enqueue(Data data)
{
    if (nextPosIdx(rear) == front)
    {
        std::cerr << "Queue Memory Error!";
        exit(-1);
    }

    rear = nextPosIdx(rear);
    queArr[rear] = data;
}

Data Queue::dequeue()
{
    if(isEmpty())
    {
        std::cerr << "Queue Memory Error!";
        exit(-1);
    }

    front = nextPosIdx(front);
    return queArr[front];
}

Data Queue::peek()
{
    if(isEmpty())
    {
        std::cerr << "Queue Memory Error!";
        exit(-1);
    }

    return queArr[nextPosIdx(front)];
}