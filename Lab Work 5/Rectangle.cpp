#include <iostream>
#include "Rectangle.h"
#include <cmath>

bool Rectangle::isRectangle() {
    setDimensions();
    if (dim1 == dim2 && dim3 == dim4) return true;
    else if (dim1 == dim3 && dim2 == dim4) return true;
    else if (dim1 == dim4 && dim2 == dim3) return true;
    else return false;
}

void Rectangle::setDimensions() {
    this->dim1 = vertices[0].distanceFrom(vertices[1]);
    this->dim2 = vertices[1].distanceFrom(vertices[2]);
    this->dim3 = vertices[2].distanceFrom(vertices[3]);
    this->dim4 = vertices[3].distanceFrom(vertices[0]);
}

double Rectangle::calculateArea() {
    return dim1 * dim2;
}

double Rectangle::calculatePerimeter() {
    return dim1 + dim2 + dim3 + dim4;
}

bool Rectangle::isSquare() const{
    if (dim1 == dim2 == dim3 == dim4) return true;
    else return false;
}
