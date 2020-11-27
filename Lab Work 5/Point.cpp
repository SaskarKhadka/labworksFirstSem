#include "Point.h"
#include <cmath>

void Point::setPoint(const double& x, const double& y) {
    this->x = x;
    this->y = y;
}


double Point::distanceFrom(const Point& other) {
    double sqDiff1, sqDiff2;
    sqDiff1 = pow((x - other.x), 2);
    sqDiff2 = pow((y - other.y), 2);
    return sqrt((sqDiff1 + sqDiff1));
}

        