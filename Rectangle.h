/**This is the Rectangle.h Code*/

/** @file Rectangle.cpp */

#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 1.0;
    width = 1.0;

}

void Rectangle::setRadius(double newRadius)
{
	if (newLength > 0.0)
	{
		length = newLength;
	}

    if (newWidth > 0.0)
    {
        width = newWidth
    }
	// else leave this circle unchanged
}

double Rectangle::getLength() const
{
	return radius;
}

double Rect
double Rectangle::getArea() const
{
	return radius * radius;
}