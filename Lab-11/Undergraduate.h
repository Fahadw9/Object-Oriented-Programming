#pragma once
#include "Student.h"

class Undergraduate : public Student
{
public:
	Undergraduate(const char* fname, const char* lname, int age, float cgpa, const char* fyp_name);// : Student(fname, lname, age, cgpa);
	~Undergraduate();
	char* getfypname();
	void setfypname(const char* fypname);
	void printUndergraduate();

private:
	char* fyp_name;
};