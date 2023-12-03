//#include <iostream>
//using namespace std;
//
//class Cents
//{
//private:
//	int m_cents;
//public:
//	Cents(int a = 1) {
//		m_cents = a;
//	}
//	Cents(const Cents &obj) {
//		this->m_cents = obj.m_cents;
//	}
//	friend Cents operator+(const Cents& c, const int& n);
//	friend Cents operator-(const Cents& c, const int& n);
//	int getcent() {
//		return m_cents;
//	}
//};
//
//Cents operator+(const Cents& c, const int& n) {
//	Cents x;
//	x = c.m_cents + n;
//	return x;
//}
//
//Cents operator-(const Cents& c, const int& n) {
//	Cents x;
//	x = c.m_cents - n;
//	return x;
//}
//
//
//int main()
//{
//	Cents cents1(6);
//	Cents cents2 = cents1 + 2;
//	cout << "I have " << cents2.getcent() << "cents" << endl;
//	Cents cents3 = cents1 - 3;
//	cout << "I have " << cents3.getcent() << "cents" << endl;
//	system("pause");
//	return 0;
//}