#include <iostream>
#include "date.h"
#include "citizen.h"

using namespace std;

int main() {

	//date driver
	cout << "Date Testing\n\n";
	Date date1;
	date1.print();

	Date independenceDay(14, 8, 2020);
	independenceDay.print();

	Date xmasDay(25, 12, 2018);
	cout << "x-mas day through getters is: " << xmasDay.get_day() << "/" << xmasDay.get_month() << "/" << xmasDay.get_year() << endl;


	//citizen driver
	cout << endl << endl;
	Citizen citizen;
	citizen.input();
	cout << "\n";
	citizen.print();
	cout << "\n";

	Citizen citizen2;
	string name, surname, designation, address;
	int cnic;

	cout << "Enter the following without any spaces (use '-' instead of a spacebar):"<<endl;
	cout << "Name : ";
	cin >> name;
	citizen2.setname(name);
	cout << "Surname : ";
	cin >> surname;
	citizen2.setsurname(surname);
	cout << "Cnic : ";
	cin >> cnic;
	while (cnic >= 352000000000)
	{
		cout << "Enter valid cnic";
		cin >> cnic;
	}
	citizen2.setcnic(cnic);
	cin.clear();
	cout << "Designation : ";
	cin >> designation;
	cin.ignore();
	citizen2.setdesignation(designation);
	cout << "Address : ";
	cin >> address;
	cin.ignore();
	citizen2.setaddress(address);

	cout << endl<< "Name : " << citizen2.getname()<<endl;
	cout << "Surname : " << citizen2.getsurname()<<endl;
	cout << "Cnic : " << citizen2.getcnic()<<endl;
	cout << "Designation : " << citizen2.getdesignation()<<endl;
	cout << "Address : " << citizen2.getaddress()<<endl;

	system("pause");
	return 0;
}