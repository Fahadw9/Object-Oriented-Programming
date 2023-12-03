#pragma once
#include "Animal.h"
class Horses :
	public Animal
{
public:
	Horses(void);
	char* speak();
	~Horses(void);
};

