#include "Circle.h"


Circle::Circle(void)
{
	this->radius = 0;
}


void Circle::area_calculator(){
	float area;
	area = this->radius * 3.14159;
	cout<<area;
}
void Circle::area_calculator(float r){
	radius = r;
	float area;
	area = this->radius * 3.14159;
	cout<<area;
}