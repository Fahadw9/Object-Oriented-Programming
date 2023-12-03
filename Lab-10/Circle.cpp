#include "Circle.h"

Circle::Circle(int x, int y, float r) : center(x, y)
{
	cout << "Circle() called\n";
	radius = r;
}

Circle::~Circle()
{
	cout << "~Circle() called\n";
}

void Circle::print()
{
	cout << "\nCenter "; 
	center.print();
	cout << "\n";
	cout << "Radius " << radius << "\n\n";
}