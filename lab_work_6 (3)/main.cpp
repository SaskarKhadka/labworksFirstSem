#include <iostream>
#include "ArrayQueue.h"

int main() {

    IQueue* queue = new ArrayQueue(5);
   try {
        queue->insert(44);
        queue->insert(66);
        queue->insert(98);
        queue->insert(45);
        queue->insert(12);
        std::cout << "\n";
        std::cout << queue->front() << " is the first element" << "\n" << std::endl;
        std::cout << queue->rear() << " is the last element" << "\n" << std::endl;
        std::cout << queue->remove() << " was successfully removed from the queue" << "\n" << std::endl;
        std::cout << queue->front() << " is the first element" << "\n" << std::endl;
        std::cout << queue->remove() << " was successfully removed from the queue" << "\n" << std::endl;
        std::cout << queue->remove() << " was successfully removed from the queue" << "\n" << std::endl;
        std::cout << queue->remove() << " was successfully removed from the queue" << "\n" << std::endl;
        std::cout << queue->remove() << " was successfully removed from the queue" << "\n" << std::endl;
        std::cout << queue->rear() << " is the last element" << "\n" << std::endl;     
    }   
    catch (const char *error) {
        std::cout << error << std::endl;
    }
    delete queue;
}
