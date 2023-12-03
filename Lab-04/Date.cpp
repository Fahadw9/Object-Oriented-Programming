#include "date.h"
#include <iostream>
using namespace std;

Date::Date() {
	day = 1;
	month = 1;
	year = 1926;
	cout << "Default Constructor Called \n";
}

Date::Date(int x, int y, int z) {
	if(x>=1 && x<=31)
		day = x;
	else {
		cout << "wrong day" << endl;
		day = 0;
	}

	if(y>=1 && y <= 12)
	month = y;
	else
	{
		cout << "wrong month" << endl;
		month = 0;
	}

	if (z>0)
	year = z;
	else
	{
		cout << "wrong year" << endl;
		year = 0;
	}
	cout << "Overloaded Constructor Called \n";
}

void Date::print() {
	cout << endl << "Date: " << day << "/" << month << "/" << year << endl;
}

void Date::set_day(int x) {
	if (x >= 1 && x <= 31)
		day = x;
	else {
		cout << "wrong day" << endl;
		day = 0;
	}
}

void Date::set_month(int x) {
	if (x >= 1 && x <= 12)
		month = x;
	else
	{
		cout << "wrong month" << endl;
		month = 0;
	}
}

void Date::set_year(int x) {
	if (x < 0)
		year = x;
	else
	{
		cout << "wrong year" << endl;
		year = 0;
	}
}

int Date::get_day() {
	return day;
}

int Date::get_month() {
	return month;
}

int Date::get_year() {
	return year;
}

void Date::input() {
	cout << "Enter the Day: ";
	cin >> day;
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
}