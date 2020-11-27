#include <iostream>
#include "Polygon.h"


void Polygon::setSides(short sides) {
    this->numberOfSides = sides;
}

void Polygon::setCoordinates() {
    for(short i = 0; i < numberOfSides; ++i) {
        std::cout << "Enter the x-coordinate of point" << i+1 << ": ";
        std::cin >> vertices[i].x;
 
        std::cout << "Enter the y-coordinate of point" << i+1 << ": ";
        std::cin >> vertices[i].y; 

    }
}

void Polygon::setCentroid() {
    double sum1 = 0, sum2 = 0;
    double c1, c2;
    for(short i = 0; i < numberOfSides ; ++i) {
        sum1 += vertices[i].x;
        sum2 += vertices[i].y;
    }

    c1 = sum1 / (double)numberOfSides;
    c2 = sum2 / (double)numberOfSides;
    
    centroid.setPoint(c1, c2);
}

		
void Polygon::move(double x, double y) {

    for(short i = 0; i < numberOfSides ; ++i) {
        vertices[i].x += x;
        vertices[i].y += y;
    }

    centroid.x += x;
    centroid.y += y;
}
	
void Polygon::display() {
    std::cout << "The sides are: " << std::endl;
    for(short i = 0; i < numberOfSides; ++i) {
        std::cout << "(" << vertices[i].x << ", " << vertices[i].y << ") " << std::endl;
    }
    std::cout << "The centroid is: ";
    std::cout << "(" << centroid.x << ", " << centroid.y << ")" << std::endl;
}
