#pragma once
#include <iostream>

class Vector {
    private:
        double x;
        double y;
        double z;
        bool isRowVector;

    public:
        Vector(); //default constructor
        Vector(double, double, double, bool isRowVector = true); //parameterized constructor
        Vector(const Vector &);  //copy constructor
        Vector& operator=(const Vector&); //copy assignment operator

        //getters and setters
        void setX(const double&);
        double getX() const;
        void setY(const double&);
        double getY() const;
        void setZ(const double&);
        double getZ() const;
        bool rowVector() const;

        Vector operator+(const Vector&); //+ operator overoload
        Vector& operator+=(const Vector&); //+= operator overload
        friend bool operator>(const Vector&, const Vector&); //> operator overload
        friend std::istream& operator>>(std::istream&,  Vector&); //>> operator overload
};

