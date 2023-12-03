#include "Undergraduate.h"

Undergraduate::Undergraduate(const char* fname, const char* lname, int age, float cgpa, const char* fyp_name) : Student(fname, lname, age, cgpa) {
	int i;
	i = strlen(fyp_name);
	this->fyp_name = new char[i + 1];
	for (i = 0; fyp_name[i] != '\0' && i < strlen(fyp_name); i++)
	{
		this->fyp_name[i] = fyp_name[i];
	}
	this->fyp_name[i] = '\0';
	cout << "Undergraduate(..) called " << endl;
}

Undergraduate::~Undergraduate() {
	cout << "~Graduate() Called" << endl;
	delete[] fyp_name;
	fyp_name = NULL;
}

char* Undergraduate::getfypname() {
	return fyp_name;
}
void Undergraduate::setfypname(const char* fyp_name) {
	int i;
	i = strlen(fyp_name);
	this->fyp_name = new char[i + 1];
	for (i = 0; fyp_name[i] != '\0' && i < strlen(fyp_name); i++)
	{
		this->fyp_name[i] = fyp_name[i];
	}
	this->fyp_name[i] = '\0';
}

void Undergraduate::printUndergraduate() {
	cout << getfirstname() << " " << getlastname() << " is an undergraduate student, his/her cgpa is " << getcgpa() << " and final year project is titled " << fyp_name << endl;
}