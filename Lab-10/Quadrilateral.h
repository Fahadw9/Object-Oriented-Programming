#pragma once
#include<iostream>
#include "Point.h"
using namespace std;

class Quadrilateral
{
private:
	Point w, x, y, z;
public:
	Quadrilateral(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
	~Quadrilateral();
	void print();
};
