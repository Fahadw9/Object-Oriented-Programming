#include <iostream>
using namespace std;

char* inputFirstName(int& size){
	char* dynamic = new char[size];
	cin>>dynamic;
	return dynamic;
}

char* inputLastName(int& size){
	char* dynamic = new char[size];
	cin>>dynamic;
	return dynamic;
}

void searchStudentByFirstName(char* firstNameList, const int size){
	char* inputname = new char[size];
	cin>>inputname;
	bool found = true;

	for (int i = 0; firstNameList[i] != '\0' || inputname[i] != '\0'; i++)
	{
		if (inputname[i] == firstNameList[i]) {
			found = true;
		}
		else
		{
			found = false;
			break;
		}
	}

	if (found == true)
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}

}

char* returnFullNameList(char* firstNameList, char* lastNameList, const int& size){
	char* dynamic = new char[size*2];
	int i = 0;

	for (int j = 0; firstNameList[j] != '\0'; j++)
	{
		dynamic[i] = firstNameList[j];
		i++;
	}

	dynamic[i] = ' ';
	i++;

	for (int j = 0; j < lastNameList[j] != '\0'; j++)
	{
		dynamic[i] = lastNameList[j];
		i++;
	}

	dynamic[i] = '\0';

	cout<<dynamic;

	return dynamic;
}

int main(){
    int n = 20;

	char* firstname = new char[n];
	char* lastname = new char[n];

	cout<<"enter first name: ";
	firstname = inputFirstName(n);

	cout<<"Enter last name: ";
	lastname = inputLastName(n);

	cout<<"enter name to search: ";
	searchStudentByFirstName(firstname, n);

	cout<<"full name is: ";
	returnFullNameList(firstname, lastname, n);

	delete[] firstname;
	delete[] lastname;
	system("pause");
}