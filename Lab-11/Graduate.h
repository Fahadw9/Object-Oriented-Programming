#pragma once
#include "Student.h"

class Graduate : public Student
{
public:
	Graduate(const char* fname, const char* lname, int age, float cgpa, const char* thesis_topic);// : Student(fname, lname, age, cgpa);
	~Graduate();
	char* getthesistopic();
	void setthesistopic(char* topic);
	void printgraduate();

private:
	char* thesis_topic;
};