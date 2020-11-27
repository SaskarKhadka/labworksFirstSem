#include <iostream>
#include "Vector.h"


std::ostream& operator<<(std::ostream&, const Vector&); //<< operator overload
Vector operator-(const Vector&, const Vector&); //- operator overload
bool operator==(const Vector&, const Vector&); //= operator overoad
double operator*(const Vector&, const Vector&); //* operator overload


int main () {
    Vector v1(4, 5, 6, true);
    std::cout << "\nThe vector A is: ";
    std::cout << v1;

    Vector v2(4, 4, 4, true);
    std::cout << "\nThe vector B is: ";
    std::cout << v2;


    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;

    std::cout << "\nThe vector A + B is: ";
    std::cout << v3; 

    std::cout << "\nThe vector A - B is: ";
    std::cout << v4; 

    if(v1 == v2)
        std::cout << "\nA is equal to B" << std::endl;
    else
        std::cout << "\nA is not equal to B" << std::endl;

    Vector v5(6, 1, 9, false);

    std::cout << "\nThe vector C is: ";
    std::cout << v5;

    double multipliedValue;
    multipliedValue = v1 * v5;
    std::cout << "\nA * C is: ";
    std::cout << multipliedValue << std::endl;

    std::cout << "\nComputing A+=C....." << std::endl;
    v1 += v5;
    std::cout << "\nThe new vector A is: ";
    std::cout << v1;

    Vector inputVector;
    std::cout << "\nEnter 3 elements and 1 or 0 if it is a row vector or a column vector repectively: ";
    std::cin >> inputVector;
    std::cout << "\nThe Vector D is: ";
    std::cout << inputVector;

}