#include "Animal.h"


Animal::Animal(void)
{
	cout<<"Animal() called"<<endl;
}

char* Animal::speak(){
	return "speak() called";
}

Animal::~Animal(void)
{
	cout<<"~Animal() Called()"<<endl;
}
