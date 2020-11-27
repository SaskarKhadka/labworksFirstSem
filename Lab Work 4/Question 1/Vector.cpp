#include <iostream>
#include "Vector.h"


Vector::Vector(const double e1, const double e2, const double e3) {
    this->element1 = e1;
    this->element2 = e2;
    this->element3 = e3;
}

Vector::Vector(const Vector& other) {
    this->element1 = other.element1;
    this->element2 = other.element2;
    this->element3 = other.element3;
}

Vector& Vector::operator=(const Vector& other) {
    this->element1 = other.element1;
    this->element2 = other.element2;
    this->element3 = other.element3;
    return *this;
}

Vector Vector::operator-() {
    Vector v1;
    v1.element1 = -element1;
    v1.element2 = -element2;
    v1.element3 = -element3;
    return v1;
}

void Vector::print() {
    std::cout << "[" << element1 << ", " << element2 << ", " << element3 << "]" << std::endl;
}
