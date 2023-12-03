#include "Cylinder.h"


Cylinder::Cylinder(void)
{
	radius = 0;
	height = 0;
}

void Cylinder::area_calculator(){
	float area;
	area = (2*3.14159*this->radius*this->height) + (2*3.14159*this->radius*this->radius);
	cout<<area;
}

void Cylinder::area_calculator(float r, float h){
	float area;
	area = (2*3.14159*r*h) + (2*3.14159*r*r);
	cout<<area;
}