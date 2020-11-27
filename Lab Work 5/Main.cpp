#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Polygon.h"

int main() {

    //for triangle
    std::cout << "For Triangle:" << std::endl;
    Triangle t1;
    t1.setSides(3);
    t1.setCoordinates();
    while(!t1.isTriangle()) {
        std::cout << "Please enter valid coordinates: " << std::endl;
        t1.setCoordinates();
    }
    t1.setDimensions();
    t1.setCentroid();
    t1.display();
    std::cout << "Moving the triangle by (7, 1): " << std::endl;
    t1.move(7, 1);
    std::cout << "After moving: " << std::endl;
    t1.display();

     //for rectangle
    std::cout << "For Rectangle:" << std::endl;
    Rectangle r1;
    r1.setSides(4);
    r1.setCoordinates();
    while(!r1.isRectangle()) {
        std::cout << "Please enter valid coordinates: " << std::endl;
        r1.setCoordinates();
    }
    r1.setDimensions();
    r1.setCentroid();
    r1.display();
    std::cout << "Moving the rectange by (-2, 6): " << std::endl;
    r1.move(-2, 6);
    std::cout << "After moving: " << std::endl;
    r1.display();
}