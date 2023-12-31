#include <iostream>
using namespace std;

class fraction
{
	int num, denum;
public:
	fraction(int x = 0, int y = 1); //Constructor
	void operator!(void) const; // print the fraction
	fraction operator-(void) const; // negative of fraction
	fraction operator*(void) const; // reciprocal of fraction

	void setnum (int x);
	void setdenum(int x);

	int getnum();
	int getdenum();

	//Fractionís Arithematic Operators
	fraction& operator+=(const fraction&); //frac1 +=frac2
	fraction& operator-=(const fraction&); //frac1 -=frac2
	fraction& operator*=(const fraction&); //frac1 *=frac2
	fraction& operator/=(const fraction&); //frac1 /=frac2
	// Fractionís Relational Operators.
	bool operator> (const fraction&) const;
	bool operator< (const fraction&) const;
	bool operator== (const fraction&) const;
	bool operator!= (const fraction&) const;
	friend istream& operator >> (istream& in, fraction& f);
	friend ostream &operator<< (ostream& out, const fraction& f);
};