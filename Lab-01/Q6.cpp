#include <iostream>
using namespace std;

int main() {
	float InArr[10] = { 6.9,8.8,9.9,10,98,54,43,11,8,1.1 };
	float ResArr[9];
	float* myptr;
	myptr = &InArr[0];

	for (int i = 0; i < 9; i++)
	{
		ResArr[i] = InArr[i] + InArr[i + 1];
	}

	myptr = &ResArr[0];

	for (int i = 0; i < 9; i++)
	{
		cout << *myptr<<endl;
		myptr++;
	}

	system("pause");
}