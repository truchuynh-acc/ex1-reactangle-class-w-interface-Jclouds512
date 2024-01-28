/**Rectangle.cpp Code*/

/** @file Rectangle.cpp */

#include "Rectangle.h" // include Rectangle.h file

Rectangle::Rectangle() // constructor for rectangle class
{
    length = 1.0; // set length to 1
    width = 1.0; // set width to 1
}

bool Rectangle::set(double newLength, double newWidth)
{
	if (newLength > 0.0 and newWidth > 0.0)
	{
		length = newLength;
        width = newWidth;
	}
	// else leave this circle unchanged
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getArea() const
{
	return length * width;
}