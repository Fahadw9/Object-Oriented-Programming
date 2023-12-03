#pragma once
#include <iostream>
using namespace std;

class Person
{
public:
	Person(const char*, const char*, int);
	~Person();
	char* getfirstname();
	char* getlastname();
	int getage();
	void setfirstname(char*);
	void setlastname(char*);
	void setage(int);
	void printinformation();

private:
	char* firstname;
	char* lastname;

protected:
	int age;
};