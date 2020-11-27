#pragma once

#include "IQueue.h"

class ArrayQueue : public IQueue {
    protected:
        int size;
        int *array; 
        int index;

    public:
        ArrayQueue(int size) : size(size), index(-1), array(new int[size]) {}
        virtual void insert(const int&); //inserts element in the queue
        virtual int remove(); //removes first element from the queue
        virtual int front() const; //returns first element from the queue
        virtual int rear() const; //returns last element from the queue
        ~ArrayQueue();
};
