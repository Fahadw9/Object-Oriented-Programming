#include "Triangle.h"


Triangle::Triangle()
{
	this->base;
	this->height;
}

void Triangle::area_calculator()
{
	int area;
	if (type=="90"){
		area = base*height;
		cout<<area<<endl;
	}
	else
	{
		cout<<"not a right angle triangle"<<endl;
	}
}
void Triangle::area_calculator(float height, float width){
	this->base;
	this->height;
	int area;
	if (type=="90"){
		area = base*height;
		cout<<area<<endl;
	}
	else
	{
		cout<<"not a right angle triangle"<<endl;
	}
}