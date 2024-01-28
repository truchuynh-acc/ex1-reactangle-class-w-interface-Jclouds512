/**Driver Code*/

/**
Programmer: Jason Lavery
Project number: 1
Project Desc: Creating the rectangle class
Course: COSC-2436-007 (92905) III Data Structures
Date: 1/27/24
*/

/** @file driver.cpp */

#include <iostream> // include input output declarations
#include "Rectangle.h" // include the rectangle.h file
using namespace std; // standard names

int main() // main function
{
	Rectangle theRectangle; // rectangle class
	
	cout << "Intital state of the rectangle" << endl; // context for output
	cout << "    length = " << theRectangle.getLength() << endl; // display the length
    cout << "    width = " << theRectangle.getLength() << endl; // display the width
	cout << "    area   = " << theRectangle.getArea() << endl << endl; // display the area
	
	bool myBool; // bool variable
	myBool = theRectangle.set(11.0, 22.0); // set it equal to whether or not the output was right
	if (myBool == true) // if true print this stuff
	{
	cout << "Current state of the rectangle" << endl; // context for output
    cout << "    length = " << theRectangle.getLength() << endl; // display the new length
    cout << "    width = " << theRectangle.getWidth() << endl; // display the new width
	cout << "    area   = " << theRectangle.getArea() << endl << endl; // display the new area
	}
	else
	{
		cout << "Your values are not acceptable."; // if false tell the user they are wrong
	}
	
	return 0;
}