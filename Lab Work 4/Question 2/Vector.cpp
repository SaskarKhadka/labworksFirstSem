#include "Vector.h"
#include <iostream>

//default constructor
Vector::Vector() {
    x = 0;
    y = 0;
    z = 0;
    isRowVector = true;
}

//parameterized constructor
Vector::Vector(double x, double y, double z, bool isRowVector) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->isRowVector = isRowVector;
}

//copy assignmnent operator
Vector::Vector(const Vector & another) {
    this->x = another.x;
    this->y = another.y;
    this->z = another.z;
}

//getters and setters

void Vector::setX(const double& x) {
    this->x = x;
}

double Vector::getX() const{
    return this->x;
}

void Vector::setY(const double& y) {
    this->y = y;
}

double Vector::getY() const{
    return this->y;
}

void Vector::setZ(const double& z) {
    this->z = z;
}

double Vector::getZ() const {
    return this->z;
}

bool Vector::rowVector() const{
    return this->isRowVector;
}

//member function to overload + operator
Vector Vector::operator+(const Vector& v2) {

    if(this->rowVector() == v2.rowVector()) {
    
    Vector v3;

    v3.x = this->getX() + v2.getX();
    v3.y = this->getY() + v2.getY();
    v3.z = this->getZ() + v2.getZ();

    return v3;
    }
    else {
        std::cout << "\nA row vector and a column vector or vice versa cannot be added" << std::endl;
        Vector v4;
        return v4; //returns a vector whose all elements are zero with an error message
    }
}

//member function to overload += operator
Vector& Vector::operator+=(const Vector& v1) {

    if(this->rowVector() == v1.rowVector()) {
        this->x += v1.x;
        this->y += v1.y;
        this->z += v1.z;

        return *this;
    }
    else {
        std::cout << "\nA row vector and a column vector or vice versa cannot be added" << std::endl;
        return *this; //returns the initial vector with an error message
    }
}

//friend function to overload greater than operator
bool operator>(const Vector& v1, const Vector& v2) {
    return v1.x > v2.x && v1.y > v2.y && v1.z > v2.z;
}

//friend function to overload input stream operator
std::istream& operator>>(std::istream& input, Vector& v1) {
    return input >> v1.x >> v1.y >> v1.z >> v1.isRowVector;
}

//normal function to overload output stream operator
std::ostream& operator<<(std::ostream& print, const Vector& v1) {

    if(v1.rowVector())
        return print << "[" << v1.getX() << " " << v1.getY() << " " << v1.getZ() << "]" << std::endl;
    else
        return print << v1.getX() << std::endl << "\t\t " << v1.getY() << std::endl << "\t\t " << v1.getZ() << std::endl; 
}

//normal function to overload minus operator
Vector operator-(const Vector& v1, const Vector& v2) {

    if(v1.rowVector() == v2.rowVector()) {
    Vector v3;

    v3.setX(v1.getX() - v2.getX());
    v3.setY(v1.getY() - v2.getY());
    v3.setZ(v1.getZ() - v2.getZ());

    return v3;
    }
    else {
        std::cout << "\nA row vector and a column vector or vice versa cannot be subtracted" << std::endl;
        Vector v4;
        return v4; //returns a vector whose all elements are zero with an error message
    }
}

//normal function to overload comparision operator
bool operator==(const Vector& v1, const Vector& v2) {

    return v1.getX() == v2.getX() && v1.getY() == v2.getY() && v1.getZ() == v2.getZ();
}

//normal function to overload multiplication operator
double operator*(const Vector& v1, const Vector& v2) {
    
    if(v1.rowVector()) {
        if(!v2.rowVector()) {
            return v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ();
        }else {
            std::cout << "\nA row Vector cannot be multiplied with another Row Vector" << std::endl;
            return 0; //returning 0 with an error message
        }
    }
    else {
        std::cout << "\nThis function is only limited to the multiplication of a Row Vector with a Column Vector not the other way around" << std::endl;
        return 0; //returning 0 with an error message
    }
}