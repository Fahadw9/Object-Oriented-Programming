#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
private:
	float base;
	float height;
public:
	Triangle();
	void area_calculator();
	void area_calculator(float, float);
	//~Triangle(void);
};

