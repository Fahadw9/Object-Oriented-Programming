#include "Cows.h"

Cows::Cows(void)
{
	cout<<"Cows() called";
}

char* Cows::speak(){
	return "moooo";
}

Cows::~Cows(void)
{
	cout<<"~Cows() called";
}
