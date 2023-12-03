#include "Circle.h"
#include "Quadrilateral.h"

int main()
{
	Circle c(3, 4, 2.5);
	c.print();

	Quadrilateral q(1, 0, 0, 1, 1, 1, 0, 0);
	q.print();
	system("pause");
}

//The Output of this program is

//Point() called
//Circle() called
//
//Center(3, 4)
//Radius 2.5
//Point() called
//Point() called
//Point() called
//Point() called
//Quadrilateral() called
//
//Coordinates of Corners of Quadrilateral
//(1, 0)(0, 1)(1, 1)(0, 0)