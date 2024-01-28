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
		length = newLength; // if both inputs are correct we will set length to the given value
        width = newWidth; // if both inputs are correct we will set width to the given value
		return true; // return true
	}
	else
	{
		return false; // return false if either input is wrong
	}

}

double Rectangle::getLength() const 
{
	return length; // get the length
}

double Rectangle::getWidth() const
{
	return width; // get the width
}

double Rectangle::getArea() const
{
	return length * width; // return the are. Area is calculated by multiplying length and width.
}