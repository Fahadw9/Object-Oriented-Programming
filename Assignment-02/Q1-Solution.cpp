#include <iostream>

class ComplexNumber
{
private:
	double real;
	double imag;

public:
	ComplexNumber();
	ComplexNumber(double r, double i);
	void SetReal(double r);
	void SetImag(double i);
	ComplexNumber Add(ComplexNumber& cn);
	//performs addition of two complex numbers
	bool isEqual(ComplexNumber& cn);
	/*compares two complex numbers if they are equal.
	Two complex numbers are equal if there corresponding real and imaginary
	parts are equal*/
	void print();
};

ComplexNumber::ComplexNumber()
{
	real = 0;
	imag = 0;
}

ComplexNumber::ComplexNumber(double r, double i) {
	real = r;
	imag = i;
}

void ComplexNumber::SetReal(double r) {
	real = r;
}

void ComplexNumber::SetImag(double i) {
	imag = i;
}

ComplexNumber ComplexNumber::Add(ComplexNumber& cn) {
	ComplexNumber temp;
	temp.real = real + cn.real;
	temp.imag = imag + cn.imag;
	return temp;
}

bool ComplexNumber::isEqual(ComplexNumber& cn) {
	if (cn.real == real && cn.imag == imag)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ComplexNumber::print() {
	if(imag>=0)
		std::cout << real << "+" << imag << "i \n";
	else
		std::cout << real << imag << "i \n";
}


int main()
{
	ComplexNumber c1;
	c1.SetReal(5.0);
	c1.SetImag(10.0);
	ComplexNumber c2(2.0, 4.0);
	ComplexNumber c3;
	if (!c1.isEqual(c2))
	{
		c3 = c1.Add(c2);
	}
	else
		c3.print();

	c1.print();
	c2.print();
	c3.print();
	system("pause");
	return 0;
}