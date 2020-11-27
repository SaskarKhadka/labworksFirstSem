#pragma once

class Point {

    public:
        double x;
        double y;

    public:
        Point() : x(0), y(0) {}     
        Point(double& x, double& y) : x(x), y(y) {}
        void setPoint(const double&, const double&);
        double distanceFrom(const Point&);
};