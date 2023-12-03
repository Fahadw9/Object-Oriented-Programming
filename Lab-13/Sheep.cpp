#include "Sheep.h"


Sheep::Sheep(void)
{
	cout<<"Sheep() called"<<endl;
}

char* Sheep::speak(){
	return "bleat";
}

Sheep::~Sheep(void)
{
	cout<<"~Sheep() Called"<<endl;
}
