#include "ArrayQueue.h"
#include <iostream>

void ArrayQueue::insert(const int& value) {
    if (index < size - 1) {
        index++;
        array[index] = value;  
        std::cout << value << " was successfully inserted to the queue" << std::endl;   
    } 
    else throw "!!Cannot insert, the queue is full!!";
}

int ArrayQueue::remove() {
    int value;
    if (index == -1) throw "!!Cannot remove, the queue is empty!!";
    else {
        value = array[0];
        for (int i = 0; i < index; i++) {
            array[i] = array[i + 1];
        }
        index--;
    }
    return value;
}

int ArrayQueue::front() const{
    if (index == -1) throw "!!Cannot find front elemnet, the queue is empty!!";
    return array[0];
}

int ArrayQueue::rear() const{
    if (index == -1) throw "!!Cannot find rear element, the queue is empty!!";
    return array[index];
}

ArrayQueue::~ArrayQueue() {
    std::cout << "Destructor" << std::endl;
    delete[] array;
}