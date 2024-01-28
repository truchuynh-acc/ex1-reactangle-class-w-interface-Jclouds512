/**Driver Code*/

/**
Programmer: Jason Lavery
Project number: 1
Project Desc: Creating the rectangle class
Course: COSC-2436-007 (92905) III Data Structures
Date: 1/27/24
*/

/** @file driver.cpp */

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle theRectangle;
	
	cout << "Intital state of the rectangle" << endl;
	cout << "    length = " << theRectangle.getLength() << endl;
    cout << "    width = " << theRectangle.getLength() << endl;
	cout << "    area   = " << theRectangle.getArea() << endl << endl;
	
	theRectangle.set(11.0, 22.0);
	cout << "Current state of the rectangle" << endl;
    cout << "    length = " << theRectangle.getLength() << endl;
    cout << "    width = " << theRectangle.getWidth() << endl;
	cout << "    area   = " << theRectangle.getArea() << endl << endl;
	
	return 0;
}