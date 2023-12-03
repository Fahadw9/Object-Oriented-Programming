#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	Student(const char* rollNo, const char* name, float cgpa);
	void print();
	char* get_name();
	char* get_rollNo();
	float get_cgpa();
	// We donot need a destructor for this class as there are static arrays which donot need to be deleted
private:
	char name[50];
	char rollNo[8];
	float cgpa;
};

class Society
{
public:
	Society(const char* societyname);
	void printInfo();
	void AppointPresident(Student &obj);
	void AddMember(Student& obj);
	~Society();
private:
	char name[50];
	Student* president;
	Student* members[5];
	//we are keeping studdent pointers to store the data of students in the society. the constructor should
};

Student::Student() {
	name[50] = NULL;
	rollNo[8] = NULL;
	cgpa = -1.0;
}

Student::Student(const char* rollNo, const char* name, float cgpa)
{
	for (int i = 0; name[i] != '/0' && i < 50; i++)
	{
		this->name[i] = name[i];
	}
	for (int j = 0; rollNo[j] != '/0' && j < 8; j++)
	{
		this->rollNo[j] = rollNo[j];
	}
	this->cgpa = cgpa;
}

void Student::print() {
	//if (cgpa == -1.0)
	//	cout << "Not Available"<<endl;
	//else
	if (name != NULL)
		cout << name << " (" << rollNo << ") ";
	else
		cout << "Not Available\n";
}

char* Student::get_name() {
	return name;
}
char* Student::get_rollNo(){
	return rollNo;
}
float Student::get_cgpa() {
	return cgpa;
}

Society::Society(const char* societyname)
{
	for (int i = 0; societyname[i] != '/0' && i < 50; i++)
	{
		this->name[i] = societyname[i];
	}
	president = new Student[1];
	for (int i = 0; i < 5; i++)
	{
		members[i] = new Student[1];
	}
}

void Society::printInfo() {
	cout << "Society Name: " << name << endl;
	president->print();
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		members[i]->print();
		cout << endl;
	}
}

void Society::AppointPresident(Student& obj) {
	if (president->get_cgpa() != -1) {
		cout << "Space not vacant. "<<obj.get_name()<<" was not made president of the society\n";
	}
	else if (obj.get_cgpa() < 3.00) {
		cout << "Low GPA. " << obj.get_name() << " was not made president of the society\n";
	}
	else
	{
		cout << obj.get_name() << " is assigned as president\n";
		*president = obj;
	}
}

void Society::AddMember(Student& obj) {
	bool vacantspotavailable = true;
	int j;
	for (int i = 0; i < 5; i++)
	{
		if (members[i]->get_cgpa() == -1) {
			//j = i;
			for (j=i; j>= 0 ; j--)
			{
				if (members[j]->get_cgpa() == obj.get_cgpa())
				{
					vacantspotavailable = false;
					break;
				}
			}
			if (obj.get_cgpa() == president->get_cgpa()) {
				break;
			}
			if (vacantspotavailable) {
				*members[i] = obj;
				break;
			}
		}
	}
}

Society::~Society() {
	delete[] president;
	for (int i = 0; i < 5; i++)
	{
		delete[] members[i];
	}
}

int main() {
	Student s1("12L1111", "Hashim Amla" , 3.99);
	Student s2("13L1121", "Virat Kohli", 3.45);
	Student s3("13L1126", "Quinton de Kock", 2.98);
	Student s4("14L1361", "Joe Root", 2.99);
	Student s5("14L1124", "Martin Guptil", 3.09);
	Student s6("15L1314", "Rohit Sharma", 3.19);

	Society sports("Sports");
	sports.AppointPresident(s3);
	sports.AppointPresident(s1);
	sports.AppointPresident(s2);

	cout << endl << endl;
	Student s7("15L1334", "Robert Elen", 2.19);
	sports.AddMember(s3);
	sports.AddMember(s2);
	sports.AddMember(s3);
	sports.AddMember(s1);
	sports.AddMember(s4);
	sports.AddMember(s5);
	sports.AddMember(s6);
	sports.AddMember(s7);

	sports.printInfo();
	system("pause");
}