#include <iostream>
using namespace std;

class Month
{
private:
	string name;
	int monthnumber;
public:
	Month();
	Month(string name);
	Month operator++(int);
	Month operator++();
	Month operator--(int);
	Month operator--();
	void setname(string a);
	void setmonthnumber(int n);
	string getname();
	int getmonthnumber();

};