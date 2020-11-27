 #pragma once

#include "Polygon.h"

class Rectangle : public Polygon
{
   	private:
		double dim1, dim2, dim3, dim4;
	public:
		Rectangle() : dim1(0), dim2(0), dim3(0), dim4(0) {}
		bool isRectangle();
		void setDimensions();
		double calculateArea();
		double calculatePerimeter();
		bool isSquare() const;
};
