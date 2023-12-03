#include "Point.h"

Point::Point(int x, int y)
{
	cout << "Point() called\n";
	this->x = x;
	this->y = y;
}

void Point::print()
{
	cout << "(" << x << "," << y << ")";
}

Point::~Point()
{
	cout << "~Point() called\n";
}