#include <iostream>
#include <new>
using namespace std;

int main(){
	int n;
	cout<<"Enter total numbers wanted in fibbonaci series: ";
	cin>>n;

	int* ptr;

	ptr = new int[n];
	ptr[0] = 1;
	ptr[1] = 1;

	for (int i = 2; i < n; i++) {
		ptr[i] = ptr[i-1] + ptr[i-2];
	}

	for (int i = 0; i < n; i++) {
		if (i==n-1)
			cout<<*ptr;
		else
			cout<<*ptr<<", ";
		ptr++;
	}

	ptr=0;
	delete[] ptr;

	cout<<endl;
	system("pause");
}