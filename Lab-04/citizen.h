#include<iostream>
#include <string>
using namespace std;

class Citizen
{
	string name;
	string surname;
	int cnic;
	string designation;
	string address;

public:

	Citizen();
	Citizen(string& name, string& surname, int& cnic, string& designation, string& address);

	string getname();
	string getsurname();
	int getcnic();
	string getdesignation();
	string getaddress();

	void setname(string& name);
	void setsurname(string& surname);
	void setcnic(int& cnic);
	void setdesignation(string& designation);
	void setaddress(string& address);

	void input();

	void print();
};