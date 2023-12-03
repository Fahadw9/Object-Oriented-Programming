#include <iostream>
using namespace std;

void fillSets(int* pointer, int length){
	for (int i = 0; i < length; i++)
	{
		cout<<"Enter "<<length<<" numbers to fill the set"<<endl;
		cin>>pointer[i];
	}
}

int intersection(int* pointer1, int* pointer2, int *&resultantpointer)
	{
		int k=0;
		int n=10;
		int m=10;
		int i = 0, j = 0;
		while (i < n && j < m) {
			if (pointer1[i] > pointer2[j]) {
				j++;
			}
			else if (pointer2[j] > pointer1[i]) {
			    i++;
			}
			else {
			    // when both are equal
			    resultantpointer[k] = pointer1[i];
			    i++;
			    j++;
				k++;
			}
		}
		return k;
}

void make2d(int** a, int len){
	for(int i = 0; i < 3; ++i)
	a[i] = new int[len];
}

int main(){
	int length;
	int resultantlength;
	cout<<"Enter length of each set: ";
	cin>>length;

	int* A;
	A = new int[length];

	int* B;
	B = new int[length];

	int* C;
	C = new int[length];

	int** a = new int*[3];

	fillSets(A, length);
	fillSets(B, length);
	fillSets(C, length);

	int* ABintersection;
	ABintersection = new int[10];
	resultantlength = intersection(A,B,ABintersection);
	ABintersection = new int[resultantlength];
	make2d(a,resultantlength);
	for (int i = 0; i < resultantlength; i++)
	{
		a[0][i] = ABintersection[i]; 
	}
	for (int i = 0; i < resultantlength; i++)
	{
		cout<<a[0][i]<<", ";
	}
	cout<<endl;

	int* BCintersection;
	BCintersection = new int[10];
	resultantlength = intersection(B,C,BCintersection);
	BCintersection = new int[resultantlength];
	make2d(a,resultantlength);
	for (int i = 0; i < resultantlength; i++)
	{
		a[1][i] = BCintersection[i]; 
	}
		for (int i = 0; i < resultantlength; i++)
	{
		cout<<a[1][i]<<", ";
	}
	cout<<endl;

	int* ACintersection;
	ACintersection = new int[10];
	resultantlength = intersection(A,C,ACintersection);
	ACintersection = new int[resultantlength];
	make2d(a,resultantlength);
	for (int i = 0; i < resultantlength; i++)
	{
		a[2][i] = ACintersection[i]; 
	}
	for (int i = 0; i < resultantlength; i++)
	{
		cout<<a[2][i]<<", ";
	}
	cout<<endl;

	system("pause");
	return 0;
}