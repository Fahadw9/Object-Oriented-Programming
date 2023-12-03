#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cows.h"
#include "Horses.h"
#include "Sheep.h"
#include <conio.h>

int main(){
	//Animal objAnimal;
	//Dog objDog;
	//Animal *ptrAnimal = &objAnimal;
	//Dog *ptrDog = &objDog;
	//cout << objAnimal.speak() << endl;
	//cout << objDog.speak() << endl;
	//cout << ptrAnimal->speak() << endl;
	//cout << ptrDog->speak() << endl;
	//cout<<ptrDog->Animal::speak()<<endl;

	//Dog objDog;
	//Animal *ptrAnimal = &objDog;
	//cout<<ptrAnimal->speak()<<endl;

	//Animal objAnimal;
	//Dog *ptrDog = &objAnimal;

	//Dog lassie;
	//Animal *myPet = &lassie;
	//cout << myPet->speak() << endl;

	const int size = 5;
	Animal * myPets[size];
	Cat whiskers;
	Dog mutley;
	Sheep sheepo;
	Cows MooMoo;
	Horses Joergen;

	myPets[0] = &whiskers;
	myPets[1] = &mutley;
	myPets[2] = &sheepo;
	myPets[3] = &MooMoo;
	myPets[4] = &Joergen;
	for(int i=0; i<size; i++)
		cout << myPets[i]->speak() << endl;

	int i = 0;
	while (i<size)
	{
		cout << "Press 1 for a Dog and 2 for a Cat, 3 for sheep, 4 for cows, 5 horses" << endl ;
		switch (getch())
		{
			case '1':
				myPets[i] = new Dog;
				cout << "Dog added at position "<< i <<endl<<endl;
				i++;
				break;
			case '2':
				myPets[i] = new Cat;
				cout << "Cat added at position "<< i <<endl<<endl;
				i++;
				break;
			case '3':
				myPets[i] = new Sheep;
				cout << "Sheep added at position "<< i <<endl<<endl;
				i++;
				break;
			case '4':
				myPets[i] = new Cows;
				cout << "Cows added at position "<< i <<endl<<endl;
				i++;
				break;
			case '5':
				myPets[i] = new Horses;
				cout << "Horses added at position "<< i <<endl<<endl;
				i++;
				break;
			default:
				cout<<"Invalid input. Enter again." <<endl<<endl;
				break;
		}		
	}
	for (int i = 0; i < size; i++)
	{
		cout<<myPets[i]->speak()<<endl;
		if (myPets[i] != NULL)
			delete myPets[i];
	}

	system("pause");
}