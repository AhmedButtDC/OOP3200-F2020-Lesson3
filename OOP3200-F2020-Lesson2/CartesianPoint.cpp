#include <iostream> 		// cin, cout
#include <iomanip>			// fixed, setprecision()
#include <sstream> 			// stringstream
#include <cmath>			// sqrt()
#include <limits>			// INT_MAX
#include <stdexcept>		// out_of_range
#include "CartesianPoint.h"
#include "MyConsoleInput.h" // ConsoleInput::ReadInteger()

using namespace std;
// constructor for CartesianPoint
CartesianPoint::CartesianPoint(int x, int y)
{
	SetPoint(x, y);
}

CartesianPoint::~CartesianPoint()
= default;

double CartesianPoint::operator-(const CartesianPoint& point_to) const
{
	// difference between x values
	const int xDelta = point_to.myX - myX;

	// difference between y values
	const int yDelta = point_to.myY - myY;

	// return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}

void CartesianPoint::SetPoint(int x, int y)
{
	SetX(x);
	SetY(y);
}

void CartesianPoint::SetX(int x)
{
	myX = x;
}

void CartesianPoint::SetY(int y)
{
	myY = y;
}

int CartesianPoint::GetX() const
{
	return myX;
}

int CartesianPoint::GetY() const
{
	return myY;
}


/** GetDistanceTo Method for CartesianPoint class
*	Determines the distance between this point and a second point.
*	@param	pointTo: CartesianPoint
*	@return	the distance as a double
*/
double CartesianPoint::GetDistanceTo(const CartesianPoint& point_to) const
{
	// difference between x values
	const int xDelta = point_to.myX - myX;

	// difference between y values
	const int yDelta = point_to.myY - myY;

	// return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}

/** ToString Method for CartesianPoint class
*	Converts the obj to a string.
*	@return	the obj state as a string
*/

string CartesianPoint::ToString() const
{
	// declare a stringstream object
	stringstream strOut;

	// build the string
	strOut << "(" << myX << ", " << myY << ")";

	// return the string
	return strOut.str();
}