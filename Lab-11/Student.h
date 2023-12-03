#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Student : public Person
{
public:
	Student(const char* fname, const char* lname, int age, float cgpa);
	~Student();
	float getcgpa();
	void setcgpa(float cgpa);
	void printStudent();

private:
	float cgpa;
};