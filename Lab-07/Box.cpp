#include "Box.h"
#include <iostream>

int Box::objectCount = 0;

Box::Box()
{
	length = 0;
	breadth = 0;
	height = 0;
	objectCount++;
}

Box::Box(double x, double y, double z) {
	length = x;
	breadth = y;
	height = z;
	objectCount++;
}

double	Box::getlength(){
	return length;
}
double Box::getbreadth(){
	return breadth;
}
double Box::getheight(){
	return height;
}

void Box::setlength(double x){
	length = x;
}
void Box::setbreadth(double x){
	breadth = x;
}
void Box::setheight(double x){
	height = x;
}

int Box::getCount(){
	return objectCount;
}

double Box::Volume(){
	return length*breadth*height;
}

double Box::Area(){
	return length*breadth; // we have to write base area according to sir dilawar
}

void print_surface_area(Box box){
	std::cout<<"The total surface area is: "<<2*(box.length*box.breadth+box.length*box.height+box.height*box.breadth)<<std::endl;
}

void double_data_members(Box &box){
	box.length *= 2;
	box.breadth *= 2;
	box.height *= 2;
}