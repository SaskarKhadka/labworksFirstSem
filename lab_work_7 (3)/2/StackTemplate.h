#pragma once
#include <iostream>

template<typename T>
class IQueue {
    public:
        virtual void insert(const T&) = 0;
        virtual T remove() = 0;
        virtual T front() const = 0;
        virtual T rear() const = 0;
	virtual ~IQueue() {}
};

template<typename T>
class ArrayQueue : public IQueue<T> {
    protected:
        int size;
        T *array; 
        int index;

    public:
        ArrayQueue(int size) : size(size), index(-1), array(new T[size]) {}
        virtual void insert(const T&); //inserts element in the queue
        virtual T remove(); //removes first element from the queue
        virtual T front() const; //returns first element from the queue
        virtual T rear() const; //returns last element from the queue
        ~ArrayQueue();
};

    template<typename T>
void ArrayQueue<T>::insert(const T& value) {
    if (index < size - 1) {
        index++;
        array[index] = value;  
        std::cout << value << " was successfully inserted to the queue" << std::endl;   
    } 
    else throw "!!Cannot insert, the queue is full!!";
}

template<typename T>
T ArrayQueue<T>::remove() {
    T value;
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

template<typename T>
T ArrayQueue<T>::front() const{
    if (index == -1) throw "!!Cannot find front element, the queue is empty!!";
    return array[0];
}

template<typename T>
T ArrayQueue<T>::rear() const{
    if (index == -1) throw "!!Cannot find rear element,the queue is empty!!";
    return array[index];
}

template<typename T>
ArrayQueue<T>::~ArrayQueue() {
    std::cout << "Destructor" << std::endl;
    delete[] array;
}
