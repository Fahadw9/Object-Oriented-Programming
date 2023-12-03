#pragma once
#include "Animal.h"
class Sheep :
	public Animal
{
public:
	Sheep(void);
	char* speak();
	~Sheep(void);
};

