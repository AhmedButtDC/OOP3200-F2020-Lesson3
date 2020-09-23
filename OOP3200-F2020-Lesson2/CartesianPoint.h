#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__
#include <string>

using namespace std;

class CartesianPoint
{
public:

	CartesianPoint(int x = 1, int y = 1);
	~CartesianPoint();

	//operator overloads
	double operator-(const CartesianPoint& point_to) const;

	// get x
	int GetX() const;

	// get y
	int GetY() const;

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint& point_to) const;

	// convert the obj to a string
	string ToString() const;


private:
	// private data members for the dimensions of the point
	int myX; // x-axis (horizontal) value
	int myY;  // y-axis (vertical) value

};
#endif /* defined (__CARTESIAN_POINT__)*/
