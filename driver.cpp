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
#include "Circle.h"
using namespace std;

int main()
{
	Circle theCircle;
	
	cout << "Intital state of the circle" << endl;
	cout << "    radius = " << theCircle.getRadius() << endl;
	cout << "    area   = " << theCircle.getArea() << endl << endl;
	
	theCircle.setRadius(2.0);
	cout << "Current state of the circle" << endl;
	cout << "    radius = " << theCircle.getRadius() << endl;
	cout << "    area   = " << theCircle.getArea() << endl << endl;
	
	return 0;
}