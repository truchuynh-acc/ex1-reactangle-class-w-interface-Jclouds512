/**This is the Rectangle.h Code*/

/** @file Rectangle.h */

#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
public:
	Rectangle();
	bool set(double newLength, double newWidth); // declare the set function
	double getLength() const; // declare the getLength function
    double getWidth() const; // declare the getWidth function
	double getArea() const; // declare the getArea function
private:
	double length; // declare the length variable
    double width; // declare the width variable
};
#endif
