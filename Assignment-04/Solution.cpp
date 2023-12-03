#include <iostream>
using namespace std;

class ComplexNumber
{
private:
	float real;
	float img;
public:
	ComplexNumber();
	ComplexNumber(float, float);
	ComplexNumber(const ComplexNumber& cn);
	friend istream& operator>>(istream& in, ComplexNumber& cn);
	// cin >> complexNo1 >> complexNo2;
	friend ostream& operator<<(ostream& out, const ComplexNumber& cn);
	//cout << complexNo1 << complexNo2; //3+4i, 5+10i
	ComplexNumber& operator++(int);
	//post increment operator. complexNo++;
	ComplexNumber& operator++();
	//pre increment operator. ++complexNo;
	bool operator!=(const ComplexNumber& cn);
	// cout<< (complexNo1 != complexNo2);
	friend ComplexNumber operator+(const float, ComplexNumber& cn);
	// 2.5+complexNo; will add 2.5 to all members of complexNo.
};

ComplexNumber::ComplexNumber() {
	this->real = 0;
	this->img = 0;
}

ComplexNumber::ComplexNumber(float real, float img) {
	this->real = real;
	this->img = img;
}

ComplexNumber::ComplexNumber(const ComplexNumber& cn) {
	this->real = cn.real;
	this->img = cn.img;
}

istream& operator>>(istream& in, ComplexNumber& cn) {
	cout << "Enter the real part: ";
	in >> cn.real;
	cout << "Enter the imaginary part: ";
	in >> cn.img;
	return in;
}

ostream& operator<<(ostream& out, const ComplexNumber& cn) {
	if (cn.img >= 0)
	{
		out << "\n" << cn.real << "+" << cn.img << "i" << endl;
	}
	else
		out << "\n" << cn.real << cn.img << "i" << endl;
	return out;
}

ComplexNumber& ComplexNumber::operator++(int) {
	ComplexNumber temp(*this);
	temp.real = this->real++;
	temp.img = this->img++;
	return temp;
}

ComplexNumber& ComplexNumber::operator++() {
	ComplexNumber temp(*this);
	temp.real = ++this->real;
	temp.img = ++this->img;
	return temp;
}
bool ComplexNumber::operator!=(const ComplexNumber& cn) {
	if (cn.real == this->real && cn.img == this->img)
	{
		return true;
	}
	else 
		return false;
}

ComplexNumber operator+(const float z, ComplexNumber& cn) {
	ComplexNumber temp;
	temp.real = z + cn.real;
	temp.img = z + cn.img;
	return temp;
}

int main() {
	ComplexNumber defcontructor;
	cout << "Object made from default contructor is: " <<defcontructor;

	ComplexNumber parcontructor(2, -3.5);
	cout <<"Object made from parameterized contructor is: "<< parcontructor;

	ComplexNumber copied = parcontructor;
	cout << "Object made from copy contructor is: " << copied;

	cout << "\nEnter values for user defined cin" << endl;
	ComplexNumber user_def_cin;
	cin >> user_def_cin;
	cout << "User defined input complex number is: " << user_def_cin;

	parcontructor = user_def_cin++;
	cout << "User defined var after post increment it is: " << user_def_cin;

	parcontructor = ++user_def_cin;
	cout << "Original user defined var after pre increment it is: " << parcontructor;

	cout << "\nComparing Values:" << endl;
	if (parcontructor != user_def_cin)
		cout << "Post and pre increment values are not equal\n";
	else
		cout << "Post and pre increment values are equal\n";

	cout << "\nEnter two more complex numbers to compare: \n";
	cin >> parcontructor;
	cin >> user_def_cin;
	if (parcontructor != user_def_cin)
		cout << "\nEqual\n";
	else
		cout << "\nNot Equal\n";


	cout << "After adding float value of 9.81 it is: ";
	defcontructor = 9.81 + user_def_cin;
	cout << defcontructor<<endl;

	system("pause");
}