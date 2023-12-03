#include <iostream>
using namespace std;

class Marks
{
public:
	Marks(){
		for (int i = 0; i < 3; i++)
		{
			subjects[i] = -1;
		}
	}
	Marks(int x, int y, int z) {
		subjects[0] = x;
		subjects[1] = y;
		subjects[2] = z;
	}
	int& operator[](const int i);
	const int& operator[](const int i) const;
private:
	int subjects[3];
};

int& Marks::operator[](const int i) {
	if (i>=0 && i<3)
	{
		return subjects[i];
	}
}

const int& Marks::operator[](const int i)const {
	if (i >= 0 && i < 3)
	{
		return subjects[i];
	}
}

int main()
{
	Marks saif(77, 88, 99);
	//0 represent marks of Data Structure
	//1 represent marks of OOP
	//2 represent marks of Programming Fundamental
	cout <<"Saif your obtained marks in programming fundamentals is "<< saif[0] << endl;
	cout << "Saif your obtained marks in OOP is " << saif[1] << endl;
	cout << "Saif your obtained marks in data structures is " << saif[2] << endl;
	system("pause");
	return 0;
}