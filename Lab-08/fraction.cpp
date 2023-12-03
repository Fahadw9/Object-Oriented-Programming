#include "fraction.h"
//#include <iostream>
//using namespace std;

int gcd(int a, int b);
void lowest(int& den3, int& num3);

fraction::fraction(int x, int y) {
	num = x;
	denum = y;
}

void fraction::operator!(void) const {
	std::cout << "The fraction is: " << num << "/" << denum<<std::endl;
}

fraction fraction::operator-(void) const {
	fraction temp;
	temp.num = num;
	temp.num *= -1;
	temp.denum = denum;
	return temp;
}

fraction fraction::operator*(void) const {
	fraction temp;
	temp.num = denum;
	temp.denum = num;
	return temp;
}

void fraction::setnum(int x) {
    num = x;
}
void fraction::setdenum(int x) {
    denum = x;
}

int fraction::getnum() {
    return num;
}
int fraction::getdenum() {
    return denum;
}

fraction& fraction::operator+=(const fraction& f2) {
        // Finding gcd of den1 and den2
    fraction temp;
        temp.denum = gcd(denum, f2.denum);

        // Denominator of final fraction obtained
        // finding LCM of den1 and den2
        // LCM * GCD = a * b
        temp.denum = (denum * f2.denum) / temp.denum;

        // Changing the fractions to have same denominator
        // Numerator of the final fraction obtained
        temp.num = (num) * (temp.denum / denum) + (f2.num) * (temp.denum / f2.denum);

        // Calling function to convert final fraction
        // into it's simplest form
        lowest(temp.denum, temp.num);
        return temp;
}

fraction& fraction::operator-= (const fraction& f2) {
    fraction temp;
    temp.denum = gcd(denum, f2.denum);

    // Denominator of final fraction obtained
    // finding LCM of den1 and den2
    // LCM * GCD = a * b
    temp.denum = (denum * f2.denum) / temp.denum;

    // Changing the fractions to have same denominator
    // Numerator of the final fraction obtained
    temp.num = (num) * (temp.denum / denum) - (f2.num) * (temp.denum / f2.denum);

    // Calling function to convert final fraction
    // into it's simplest form
    lowest(temp.denum, temp.num);
    return temp;
}

fraction& fraction::operator*=(const fraction& f2) {
    fraction temp;
    temp.num = num * f2.num;
    temp.denum = denum * f2.denum;
    return temp;
}

fraction& fraction::operator/=(const fraction& f2) {
    fraction temp;
    temp.num = num * f2.denum;
    temp.denum = denum * f2.num;
    return temp;
}

bool fraction::operator> (const fraction& sec) const {
    // Compute ad-bc
    int Y = num * sec.denum - denum * sec.num;

    return (Y > 0) ? true : false;
}

bool fraction::operator< (const fraction& sec) const {
    // Compute ad-bc
    int Y = num * sec.denum - denum * sec.num;

    return (Y > 0) ? false : true;
}

bool fraction::operator== (const fraction& sec) const {
    // Compute ad-bc
    int Y = num * sec.denum - denum * sec.num;

    return (Y == 0) ? true : false;
}

bool fraction::operator!= (const fraction& sec) const {
    // Compute ad-bc
    int Y = num * sec.denum - denum * sec.num;

    return (Y == 0) ? false : true;
}

istream& operator >> (istream& in, fraction &f)
{
    cout << "Enter Numerator: ";
    in >> f.num;
    cout << "Enter Denominator: ";
    in >> f.denum;
    return in;
}

ostream &operator<<(ostream& out, const fraction &f)
{
    out << f.num;
    out << "/" << f.denum << endl;
    return out;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void lowest(int& den3, int& num3)
{
    // Finding gcd of both terms
    int common_factor = gcd(num3, den3);

    // Converting both terms into simpler
    // terms by dividing them by common factor
    den3 = den3 / common_factor;
    num3 = num3 / common_factor;
}