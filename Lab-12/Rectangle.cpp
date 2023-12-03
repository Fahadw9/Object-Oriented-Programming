#include "Rectangle.h"


Rectangle::Rectangle()
{
	this->height = 0;
	this->width = 0;
}

void Rectangle::area_calculator(){
	float ans;
	ans = height * width;
	cout<<ans<<endl;
}

void Rectangle::area_calculator(float height, float width){
	float ans;
	this->height = height;
	this->width = width;
	ans = this->height * this->width;
	cout<<ans;
}
