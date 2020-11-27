#include <iostream>
#include "Vector.h"

int main()
{
        Vector v1(-1, -2, 3);
        Vector v2(5, 6, -7);
        Vector v3 = -v1;
        Vector v4;
        v4 = -v2;

        std::cout << "Vector A is: ";
        v1.print();

        std::cout << "Vector -A is: ";
        v3.print();

        std::cout << "Vector B is: ";
        v2.print();

        std::cout << "Vector -B is: ";
        v4.print();

        return 0;
}