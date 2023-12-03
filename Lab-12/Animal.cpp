#include "Animal.h"

Animal::Animal()
{
	cout<<"Animal() called"<<endl;
}

Animal::~Animal()
{
	cout<<"~Animal() called"<<endl;
}

void Animal::print(){
	cout<<"print called of animal"<<endl;
}