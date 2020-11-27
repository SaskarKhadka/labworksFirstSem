#pragma once 

#include "Polygon.h"

class Triangle : public Polygon
{
	private:
		double dim1, dim2, dim3;
	public:
		Triangle() : dim1(0), dim2(0), dim3(0) {}
		bool isTriangle();
		void setDimensions();
		double calculateArea();
		double calculatePerimeter();
		bool isRightTriangle() const;
};
