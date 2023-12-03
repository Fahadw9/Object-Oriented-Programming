#pragma once
#include "Animal.h"
class Cows :
	public Animal
{
public:
	Cows(void);
	char* speak();
	~Cows(void);
};

