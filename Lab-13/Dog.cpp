#include "Dog.h"


Dog::Dog(void)
{
	cout<<"Dog() called"<<endl;
}

char* Dog::speak(){
	return "woof";
}

Dog::~Dog(void)
{
	cout<<"~Dog Called"<<endl;
}
