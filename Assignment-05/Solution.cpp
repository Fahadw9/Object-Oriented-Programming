#include <iostream>
using namespace std;

char* decToHexa(int n);
int HexaToInt(char* Hexnumber);

class Hex
{
private:
	char* number;
public:
	Hex();
	Hex(const char*);
	Hex(const Hex&);
	char* getnum();
	friend ostream& operator<<(ostream& out, const Hex &Hexa);
	Hex operator+(Hex& cn);
	Hex& operator++(int); //hex++
	Hex& operator++(); //++hex
	~Hex();
};

Hex::Hex() {
	this->number = new char[20];
}

Hex::Hex(const char* number) {
	this->number = new char[20];
	int i;
	for (i = 0; number[i] != '\0'; i++)
	{
		this->number[i] = number[i];
	}
	this->number[i] = '\0';
}

Hex::Hex(const Hex& Hexa) {
	this->number = new char[20];
	int i;
	for (i = 0; Hexa.number[i] != '\0'; i++)
	{
		this->number[i] = Hexa.number[i];
	}
	this->number[i] = '\0';
}

char* Hex::getnum() {
	return this->number;
}

Hex Hex::operator+(Hex& cn)
{
	Hex hexa;
	int total;
	total = HexaToInt((*this).getnum()) + HexaToInt(cn.getnum());
	hexa.number = decToHexa(total);
	return hexa;
}

Hex& Hex::operator++(int) {
	Hex temp;
	temp.number = this->number;
	int incremented;
	incremented = HexaToInt((*this).getnum());
	incremented++;
	this->number = decToHexa(incremented);
	return temp;
}

Hex& Hex::operator++() {
	Hex temp;
	int incremented;
	incremented = HexaToInt((*this).getnum());
	incremented++;
	temp.number = decToHexa(incremented);
	this->number = decToHexa(incremented);
	return temp;
}

Hex::~Hex() {
	delete[] this->number;
}

char* decToHexa(int temp) {
	char* returnval;
	returnval = new char[20];
	int n = temp;
	int i;
	for (i = 0; n != 0; i++) {
		int temp = 0;
		temp = n % 16;
		if (temp < 10) {
			returnval[i] = temp + 48;
		}
		else {
			returnval[i] = temp + 55;
		}
		n = n / 16;
	}
	returnval[i] = '\0';

	//to reverse the reversed array
	char* reversedarr = new char[i];

	int j;
	for (j = 0; returnval[j] != '\0'; j++)
	{
		reversedarr[j] = returnval[j];
	}
	reversedarr[j] = '\0';

	for (j = 0; returnval[j] != '\0'; j++)
	{
		returnval[j] = reversedarr[i - j - 1];
	}
	return returnval;
}

int HexaToInt(char* Hexnumber) {
	char* a;

	a = Hexnumber;

	int len;
	int i;
	for (i = 0; a[i] != '\0'; i++) {};
	len = i;
	int base = 1;
	int returnval = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			returnval += (a[i] - 48) * base;
			base = base * 16;
		}
		else if (a[i] >= 'A' && a[i] <= 'F')
		{
			returnval += (a[i] - 55) * base;
			base = base * 16;
		}
	}

	return returnval;
}

ostream& operator<<(ostream& out, const Hex& Hexa) {
	out << Hexa.number << endl;
	return out;
}

int main() {
	Hex a("1F24A0"), b("7E3C"), c("FF");
	//cascading addition
	//cout << (a + b + c) << endl;
	a++;
	++b;
	cout << (a + b) << endl; //cascading insertion
	system("pause");
	return 0;
}