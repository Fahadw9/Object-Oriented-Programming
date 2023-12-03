#include <iostream>
using namespace std;

int secondLargest(float* pointer, int num){
	float largest;
	float second;
	int secondindex;

	if(pointer[0]<pointer[1]){ 
		largest = pointer[1];
		second = pointer[0];
		secondindex = 0;
	}
	else{ 
		largest = pointer[0];
		second = pointer[1];
		secondindex = 1;
	}

	   for (int i = 2; i< num ; i ++) {
      if (pointer[i] > largest) {
         second = largest;
         largest = pointer[i];
		 secondindex = i;
      }
      else if (pointer[i] > second && pointer[i] != largest) {
         second = pointer[i];
		 secondindex = i;
      }
   }
   cout<<"Second Largest Element in array is: "<<second<<endl;
   cout<<"Second Largest Element index is: "<<secondindex<<endl;
   return 0;
}

int main(){
	int n;
	cout<<"Enter total numbers: ";
	cin>>n;

	float *ptr;

	ptr = new float[n];

	for (int i = 0; i < n; i++)
	{
		cout<<"Enter number: ";
		cin>> ptr[i];
	}

	secondLargest(ptr,n);

	system("pause");
}