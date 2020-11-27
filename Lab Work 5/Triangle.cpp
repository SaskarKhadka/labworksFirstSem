#include <iostream>
#include "Triangle.h"
#include <cmath>

bool Triangle::isTriangle() {
    setDimensions();
    if (dim1 + dim2 > dim3) return true;
    else if (dim1 + dim3 > dim2) return true;
    else if (dim2 + dim3 > dim1) return true;
    else return false;
}

void Triangle::setDimensions() {
    this->dim1 = vertices[0].distanceFrom(vertices[1]);
    this->dim2 = vertices[1].distanceFrom(vertices[2]);
    this->dim3 = vertices[2].distanceFrom(vertices[0]);
}

double Triangle::calculateArea() {
    double sPm = calculatePerimeter() / 2;
    return sqrt(sPm * (sPm - dim1) * (sPm - dim2) * (sPm - dim3));
}

double Triangle::calculatePerimeter() {
    return dim1 + dim2 + dim3;
}

bool Triangle::isRightTriangle() const{
    if (pow(dim1, 2) + pow(dim2, 2) == pow(dim3, 2)) return true;
    else if (pow(dim2, 2) + pow(dim3, 2) == pow(dim1, 2)) return true;
    else if (pow(dim3, 2) + pow(dim1, 2) == pow(dim2, 2)) return true;
    else return false;
}
