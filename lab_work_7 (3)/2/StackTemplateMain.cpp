#include <iostream>
#include "StackTemplate.h"
#include <vector>

template<typename T>
void perform(const std::vector<T> &a, int size) {
    ArrayQueue<T>* queue = new ArrayQueue<T>(size);
    try {
        for(T each : a) {
            queue->insert(each);
        }
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
    std::cout << "\n\n" << std::endl;
}

int main() {
    std::vector<int> vec = {11, 55, 33, 88, 99};
    std::vector<std::string> vec2 = {"a", "b", "c", "d", "e"};
    std::cout << "For integer: \n" << std::endl;
    perform<int>(vec, vec.size());
    std::cout << "For character: \n" << std::endl;
    perform<std::string>(vec2, vec2.size());
}
