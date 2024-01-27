/**This is the Rectangle.h Code*/

/** @file Rectangle.h */

#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
public:
	Rectangle();
	void setRadius(double newRadius);
	double getRadius() const;
	double getArea() const;
private:
	double radius;
};
#endif
