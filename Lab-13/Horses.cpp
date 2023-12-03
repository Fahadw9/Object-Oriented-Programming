#include "Horses.h"


Horses::Horses(void)
{
	cout<<"Horses() called"<<endl;
}

char* Horses::speak(){
	return "neigh";
}

Horses::~Horses(void)
{
	cout<<"~Horses() called"<<endl;
}
