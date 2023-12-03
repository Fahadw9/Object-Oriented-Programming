#include "Person.h"


Person::Person(const char* fname, const char* lname, int age) {
	int i;
	i = strlen(fname);
	firstname = new char[i+1];
	for (i = 0; fname[i] != '\0' && i<strlen(fname); i++)
	{
		firstname[i] = fname[i];
	}
	firstname[i] = '\0';
	i = strlen(lname);
	lastname = new char[i+1];

	for (i = 0; lname[i] && i<strlen(lname); i++)
	{
		lastname[i] = lname[i];
	}
	lastname[i] = '\0';
	this->age = age;

	std::cout << "Person(...) called" << std::endl;
}

Person::~Person() {
	delete[] firstname;
	delete[] lastname;
	cout << "~Person() called" << endl;
}

char* Person::getfirstname() {
	return firstname;
}
char* Person::getlastname() {
	return lastname;
}
int Person::getage() {
	return age;
}

void Person::setfirstname(char* fname) {
	int i;
	i = strlen(fname);
	firstname = new char[i + 1];
	for (i = 0; fname[i] != '\0' && i < strlen(fname); i++)
	{
		firstname[i] = fname[i];
	}
	firstname[i] = '\0';
}
void Person::setlastname(char* lname) {
	int i;
	i = strlen(lname);
	lastname = new char[i + 1];

	for (i = 0; lname[i] && i < strlen(lname); i++)
	{
		lastname[i] = lname[i];
	}
	lastname[i] = '\0';
}
void Person::setage(int age) {
	this->age = age;
}

void Person::printinformation() {
	cout << firstname << " " << lastname << " is " << age << " years old." << endl;
}