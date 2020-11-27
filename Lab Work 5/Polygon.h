#pragma once 

#include "Point.h"
class Polygon {

    protected:
	    short numberOfSides;
        Point vertices[4];
        Point centroid;

	public:
        Polygon(short sides = 3) : numberOfSides(sides) { }
        void setSides(short);
        void setCoordinates();
        void setCentroid();
        void move(double, double);
        void display();
};