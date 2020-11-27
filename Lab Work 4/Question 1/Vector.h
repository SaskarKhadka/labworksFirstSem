#pragma once

class Vector {
    private:
        double element1;
        double element2;
        double element3;

    public: 
        //parametrized constructor with default parameters
        Vector(const double e1 = 0, const double e2 = 0, const double e3 = 0);
        
        Vector(const Vector&); //copy constructor
        Vector& operator=(const Vector&); //copy assignment operator
        Vector operator-(); //unary minus overload
        void print();
};
