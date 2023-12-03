#pragma once
#include<iostream>
#include "Point.h"
using namespace std;

class Circle
{
private:
	Point center;
	float radius;
public:
	Circle(int x, int y, float r);
	~Circle();
	void print();
};

