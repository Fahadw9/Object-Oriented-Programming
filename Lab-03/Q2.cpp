#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int main(){
	char arr[] = "-This is my, Object Oriented Programming Lab.";
	char dLim[] = " -,.";
	char* tok = strtok(arr, dLim);
	
	char* newarr = new char[15];

	while(tok){
		newarr = tok;
		cout<<newarr<<endl;

		tok = strtok(NULL, dLim);
	}
	delete[] newarr;

	system("pause");
}