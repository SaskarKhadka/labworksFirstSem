#include<iostream>
#include <vector>

template<typename T>
void bubbleSort(std::vector<T> &a, int n) {
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                T temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

template<typename T>
void print(const std::vector<T> &a) {
    for(T each : a) {
        std::cout << each << " ";
    } 
    std::cout << "\n";
}

int main() {
    std::vector<int> arr = {22, 54, 15, 75, 45}; 
    std::vector<char> arr2 = {'z', 'q', 'r', 'l', 'y'};

    std::cout << "Before Sorting: " << std::endl;
    print<int>(arr);
    print<char>(arr2);

    std::cout << "\n\n";
    bubbleSort<int>(arr, arr.size());
    bubbleSort<char>(arr2, arr2.size());

    std::cout << "After Sorting: " << std::endl;
    print<int>(arr);
    print<char>(arr2);
    
    std::cout << "\n";
}