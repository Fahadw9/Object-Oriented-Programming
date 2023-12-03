#include <iostream>
using namespace std;

void Incrementer(int* pointer){
	for (int i = 0; i < 10; i++)
	{
		*(pointer + i) += 3;
	}
}

int main(){
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		*(arr + i) = -1;
	}
	Incrementer(arr);

	//for (int i = 0; i < 10; i++)
	//{
	//	cout<<arr[i]<<", ";
	//}
	system("pause");
}