#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape
{
protected:
	string type;
public:
	virtual void area_calculator() = 0;
	Shape();
	//~Shape();
};

