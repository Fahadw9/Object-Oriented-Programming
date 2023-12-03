#include "Month.h"

Month::Month()
{
	name = "January";
	monthnumber = 1;
}

Month::Month(string month)
{
	this->name = month;

	if (month == "January")
		monthnumber = 1;
	else if (month == "February")
		monthnumber = 2;
	else if (month == "March")
		monthnumber = 3;
	else if (month == "April")
		monthnumber = 4;
	else if (month == "May")
		monthnumber = 5;
	else if (month == "June")
		monthnumber = 6;
	else if (month == "July")
		monthnumber = 7;
	else if (month == "August")
		monthnumber = 8;
	else if (month == "September")
		monthnumber = 9;
	else if (month == "October")
		monthnumber = 10;
	else if (month == "November")
		monthnumber = 11;
	else if (month == "December")
		monthnumber = 12;
}

Month Month::operator++(int)
{
	Month m;
	m.monthnumber = monthnumber++;

	if (m.monthnumber == 1)
		m.setname("January"), this->setname("February");
	else if (m.monthnumber == 2)
		m.setname("February"), this->setname("March");
	else if (m.monthnumber == 3)
		m.setname("March"), this->setname("April");
	else if (m.monthnumber == 4)
		m.setname("April"), this->setname("May");
	else if (m.monthnumber == 5)
		m.setname("May"), this->setname("June");
	else if (m.monthnumber == 6)
		m.setname("June"), this->setname("July");
	else if (m.monthnumber == 7)
		m.setname("July"), this->setname("August");
	else if (m.monthnumber == 8)
		m.setname("August"), this->setname("September");
	else if (m.monthnumber == 9)
		m.setname("September"), this->setname("October");
	else if (m.monthnumber == 10)
		m.setname("October"), this->setname("November");
	else if (m.monthnumber == 11)
		m.setname("November"), this->setname("December");
	else if (m.monthnumber == 12)
		m.setname("December"), this->setname("January");

	return m;
}

Month Month::operator++()
{
	Month m;
	m.monthnumber = ++monthnumber;

	if (m.monthnumber == 1)
		m.setname("January"), this->setname("January");
	else if (m.monthnumber == 2)
		m.setname("February"), this->setname("February");
	else if (m.monthnumber == 3)
		m.setname("March"), this->setname("March");
	else if (m.monthnumber == 4)
		m.setname("April"), this->setname("April");
	else if (m.monthnumber == 5)
		m.setname("May"), this->setname("May");
	else if (m.monthnumber == 6)
		m.setname("June"), this->setname("June");
	else if (m.monthnumber == 7)
		m.setname("July"), this->setname("July");
	else if (m.monthnumber == 8)
		m.setname("August"), this->setname("August");
	else if (m.monthnumber == 9)
		m.setname("September"), this->setname("September");
	else if (m.monthnumber == 10)
		m.setname("October"), this->setname("October");
	else if (m.monthnumber == 11)
		m.setname("November"), this->setname("November");
	else if (m.monthnumber == 12)
		m.setname("December"), this->setname("December");

	return m;
}

Month Month::operator--(int)
{
	Month m;
	m.monthnumber = monthnumber--;

	if (m.monthnumber == 1)
		m.setname("January"), this->setname("December");
	else if (m.monthnumber == 2)
		m.setname("February"), this->setname("January");
	else if (m.monthnumber == 3)
		m.setname("March"), this->setname("February");
	else if (m.monthnumber == 4)
		m.setname("April"), this->setname("March");
	else if (m.monthnumber == 5)
		m.setname("May"), this->setname("April");
	else if (m.monthnumber == 6)
		m.setname("June"), this->setname("May");
	else if (m.monthnumber == 7)
		m.setname("July"), this->setname("June");
	else if (m.monthnumber == 8)
		m.setname("August"), this->setname("July");
	else if (m.monthnumber == 9)
		m.setname("September"), this->setname("August");
	else if (m.monthnumber == 10)
		m.setname("October"), this->setname("September");
	else if (m.monthnumber == 11)
		m.setname("November"), this->setname("October");
	else if (m.monthnumber == 12)
		m.setname("December"), this->setname("November");

	return m;
}

Month Month::operator--()
{
	Month m;
	m.monthnumber = --monthnumber;

	if (m.monthnumber == 1)
		m.setname("January"), this->setname("January");
	else if (m.monthnumber == 2)
		m.setname("February"), this->setname("February");
	else if (m.monthnumber == 3)
		m.setname("March"), this->setname("March");
	else if (m.monthnumber == 4)
		m.setname("April"), this->setname("April");
	else if (m.monthnumber == 5)
		m.setname("May"), this->setname("May");
	else if (m.monthnumber == 6)
		m.setname("June"), this->setname("June");
	else if (m.monthnumber == 7)
		m.setname("July"), this->setname("July");
	else if (m.monthnumber == 8)
		m.setname("August"), this->setname("August");
	else if (m.monthnumber == 9)
		m.setname("September"), this->setname("September");
	else if (m.monthnumber == 10)
		m.setname("October"), this->setname("October");
	else if (m.monthnumber == 11)
		m.setname("November"), this->setname("November");
	else if (m.monthnumber == 12)
		m.setname("December"), this->setname("December");
	return m;
}

void Month::setname(string a)
{
	name = a;
}

void Month::setmonthnumber(int n)
{
	monthnumber = n;
}

string Month::getname()
{
	return name;
}

int Month::getmonthnumber()
{
	return monthnumber;
}