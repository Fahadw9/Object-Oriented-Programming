#include "Faculty.h"

Faculty::Faculty(const char* fname, const char* lname, int age, int ccount, int telephone) : Person(fname, lname, age) {
	course_count = ccount;
	telephoneext = telephone;
	cout << "Faculty(...) called" << endl;
}

Faculty::~Faculty() {
	cout << "~Faculty() called" << endl;
}

int Faculty::getcoursecount() {
	return course_count;
}

int Faculty::gettelephone() {
	return telephoneext;
}

void Faculty::setcoursecount(int cc) {
	this->course_count = cc;
}
void Faculty::settelephone(int num) {
	this->telephoneext = num;
}

void Faculty::printFaculty() {
	cout << "Faculty Member Name: " << getfirstname();
	cout << " Age: " << age;
	cout << " Number of Courses: " << course_count;
	cout << " Extension Number: " << telephoneext << endl;
}