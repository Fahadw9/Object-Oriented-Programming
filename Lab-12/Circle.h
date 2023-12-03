#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
private:
	float radius;
public:
	Circle(void);
	void area_calculator();
	void area_calculator(float);
	//~Circle(void);
};

