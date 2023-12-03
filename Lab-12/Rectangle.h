#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
private:
	float height;
	float width;
public:
	Rectangle();
	//~Rectangle(void);
	void area_calculator();
	void area_calculator(float, float);

};

