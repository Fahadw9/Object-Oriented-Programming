#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : w(x1, y1), x(x2, y2), y(x3, y3), z(x4, y4)
{
	cout << "Quadrilateral() called\n";
}

Quadrilateral::~Quadrilateral()
{
	cout << "~Quadrilateral() called\n";
}

void Quadrilateral::print()
{
	cout << "\nCoordinates of Corners of Quadrilateral\n";
	w.print();
	x.print();
	y.print();
	z.print();
	cout << "\n\n";
}