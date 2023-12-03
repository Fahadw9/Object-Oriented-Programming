#include"Month.h"

int main()
{
	cout << "Default constructor"<<endl;
	Month m1;
	cout << m1.getmonthnumber() << ", " << m1.getname()<<endl;
	
	string month = "May";
	cout << "Parameterized constructor" << endl;
	Month m2(month);
	cout << m2.getmonthnumber() << ", " << m2.getname()<<endl;

	cout << "Post Increment for default object with original values"<<endl;
	Month m3 = m1++;
	cout << m3.getmonthnumber() << ", " << m3.getname()<<endl;

	cout << "Post Increment for default object with incremented values"<<endl;
	cout << m1.getmonthnumber() << ", " << m1.getname()<<endl;

	cout << "Pre Increment for parameterized object"<<endl;
	Month m4 = ++m2;
	cout << m4.getmonthnumber() << ", " << m4.getname()<<endl;

	cout << "Post Decrement for default object with original values"<<endl;
	Month m5 = m1--;
	cout << m5.getmonthnumber() << ", " << m5.getname()<<endl;

	cout << "Post Decrement for default object with decremented values"<<endl;
	cout << m1.getmonthnumber() << ", " << m1.getname()<<endl;

	cout << "Pre Decrement for parameterized object"<<endl;
	Month m6 = --m2;
	cout << m6.getmonthnumber() << " " << m6.getname()<<endl;

	system("pause");
}