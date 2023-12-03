#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

Rectangle::Rectangle(int x, int y) {
	if (x > 0 && y > 0) {
		length = x;
		width = y;
	}
	else
	{
		length = 0;
		width = 0;
		cout << "Wrong parameters";
	}
}

int Rectangle::getWidth() {
	return width;
}
int Rectangle::getLength() {
	return length;
}
int Rectangle::getArea() {
	return length * width;
}

void Rectangle::setWidth(int x){
	if (x < 0) {
		x = 0;
		cout << "Wrong input";
	}
	width = x;
}
void Rectangle::setLength(int x) {
	if (x < 0) {
		x = 0;
		cout << "Wrong input";
	}
	length = x;
}
void Rectangle::rotateRectangle() {
	int temp ;
	temp = width;
	width = length;
	length = temp;
}
void Rectangle::draw()
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}