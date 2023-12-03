#include "Operation.h"
#include <iostream>
using namespace std;


int main() {

	Operation o1;
	cout << "a = " << o1.geta() << " b = " << o1.getb();
	o1.seta(4);
	o1.setb(5);
	cout << "\na = " << o1.geta() << " b = " << o1.getb();

	Operation o2(2, 3);
	cout << "\na = " << o2.geta() << " b = " << o2.getb();

	o2.sum();
	o2.difference();
	o2.product();
	o2.division();
	system("pause");

	//Benefits of Inline Function
	//-Saves the context switching time.
	//-Function call overhead doesn’t occur.
	//-Helpful while calling a function in saving the overhead of variables push/pop on the stack.
}


int Operation::geta()
{
	return a;
}

int Operation::getb()
{
	return b;
}

void Operation::seta(int x)
{
	a = x;
}

void Operation::setb(int x)
{
	b = x;
}

Operation::Operation()
{
	a = 0;
	b = 0;
}

Operation::Operation(int a, int b)
{
	this->a = a;
	this->b = b;
}

inline void Operation::sum()
{
	cout << "\nsum = " << a + b;
}

inline void Operation::difference()
{
	cout << "\nDifference = " << a - b;
}

inline void Operation::product()
{
	cout << "\nProduct = " << a * b;
}

inline void Operation::division()
{
	cout << "\nDivision = " << a / b;
}