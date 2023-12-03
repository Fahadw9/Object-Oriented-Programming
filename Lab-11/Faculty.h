#pragma once
#include "Person.h"

class Faculty:public Person
{
public:
	Faculty (const char* fname, const char* lname, int age, int ccount, int telephone);
	~Faculty();
	int getcoursecount();
	int gettelephone();
	void setcoursecount(int cc);
	void settelephone(int num);
	void printFaculty();

private:
	int course_count;
	int telephoneext;
};