#include "Student.h"

Student::Student(const char* fname, const char* lname, int age, float cgpa) : Person(fname,lname,age){
	this->cgpa = cgpa;
	cout << "Student (...) called" << endl;
}

Student::~Student() {
	cout << "~Student() called" << endl;
}

float Student::getcgpa() {
	return cgpa;
}

void Student::setcgpa(float cgpa) {
	this->cgpa = cgpa;
}

void Student::printStudent() {
	cout << getfirstname() << " " << getlastname() << " is " << age << " years old and his/her gpa is " << cgpa << endl;
}