#pragma once
#include "animal.h"
class Cat :
	public Animal
{
public:
	Cat(void);
	char* speak();
	~Cat(void);
};

