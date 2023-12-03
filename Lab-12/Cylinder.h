#pragma once
#include "Shape.h"
class Cylinder :
	public Shape
{
private:
	float radius;
	float height;
public:
	void area_calculator();
	void area_calculator(float, float);
	Cylinder();
	//~Cylinder(void);
};

