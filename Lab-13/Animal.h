#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal(void);
	virtual char* speak();
	virtual ~Animal(void);
};

