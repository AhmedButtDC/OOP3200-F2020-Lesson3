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

	CartesianPoint(const CartesianPoint& point2);

	//operator overloads

	CartesianPoint operator+(const CartesianPoint& point2) const;
	CartesianPoint operator=(const CartesianPoint& newPoint);

	double operator-(const CartesianPoint& point_to) const;
	bool operator==(const CartesianPoint& other_point) const;

	friend ostream& operator<<(ostream& out, const CartesianPoint& point);
	friend istream& operator>>(istream& in, CartesianPoint& point);

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
