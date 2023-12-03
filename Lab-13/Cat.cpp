#include "Cat.h"


Cat::Cat(void)
{
	cout<<"Cat() called"<<endl;
}

char* Cat::speak(){
	return "Mew";
}

Cat::~Cat(void)
{
	cout<<"~Cat() Called"<<endl;
}
