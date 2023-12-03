#include "Graduate.h"

Graduate::Graduate(const char* fname, const char* lname, int age, float cgpa, const char* thesis_topic) : Student(fname, lname, age, cgpa) {
	int i;
	i = strlen(thesis_topic);
	this->thesis_topic = new char[i + 1];
	for (i = 0; thesis_topic[i] != '\0' && i < strlen(thesis_topic); i++)
	{
		this->thesis_topic[i] = thesis_topic[i];
	}
	this->thesis_topic[i] = '\0';
	cout << "Graduate(...) Called " << endl;
}

Graduate::~Graduate() {
	cout << "~Graduate() Called" << endl;
	delete[] thesis_topic;
	thesis_topic = NULL;
}

char* Graduate::getthesistopic() {
	return thesis_topic;
}

void Graduate::setthesistopic(char* topic) {
	int i;
	i = strlen(topic);
	this->thesis_topic = new char[i + 1];
	for (i = 0; topic[i] != '\0' && i < strlen(topic); i++)
	{
		this->thesis_topic[i] = topic[i];
	}
	this->thesis_topic[i] = '\0';
}

void Graduate::printgraduate() {
	cout << getfirstname() << " " << getlastname() << " is a graduate student, his/her gpa is " << getcgpa() << " and his/her thesis topic is " << thesis_topic << endl;
}