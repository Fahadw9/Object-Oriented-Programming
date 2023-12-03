#include "Citizen.h"

Citizen::Citizen()
{
	name = "null";
	surname = "null";
	cnic = 0;
	designation = "null";
	address = "null";
}
Citizen::Citizen(string& name, string& surname, int& cnic, string& designation, string& address)
{
	name = name;
	surname = surname;
	cnic = cnic;
	designation = designation;
	address = address;
}

string Citizen::getname()
{
	return name;
}
string Citizen::getsurname()
{
	return surname;
}
int Citizen::getcnic()
{
	return cnic;
}
string Citizen::getdesignation()
{
	return designation;
}
string Citizen::getaddress()
{
	return address;
}

void Citizen::setname(string& name)
{
	name = name;
}
void Citizen::setsurname(string& surname)
{
	surname = surname;
}
void Citizen::setcnic(int& cnic)
{
	cnic = cnic;
}
void Citizen::setdesignation(string& designation)
{
	designation = designation;
}
void Citizen::setaddress(string& address)
{
	address = address;
}

void Citizen::input()
{
	cout << "Enter the following :\n";
	cout << "Name : ";
	cin >> name;
	cout << "Surname : ";
	cin >> surname;
	cout << "Cnic : ";
	cin >> cnic;
	while (cnic >= 352010000000)
	{
		cout << "Enter valid cnic";
		cin >> cnic;
	}
	cin.clear();
	cout << "Designation : ";
	cin >> designation;
	cout << "Address : ";
	cin >> address;
}

void Citizen::print()
{
	cout << "Name : " << name;
	cout << "\nSurname : " << surname;
	cout << "\nCnic : " << cnic;
	cout << "\nDesignation : " << designation;
	cout << "\nAddress : " << address;
}