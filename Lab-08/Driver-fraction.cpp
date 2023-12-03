#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
	fraction f1(1,3);
	!f1;

	fraction f2;
	cin >> f2;

	fraction f3 = (f1 += f2);
	!f3;

	f3 = (f1 -= f2);
	!f3;

	f3 = (f1 *= f2);
	!f3;

	bool boo;
	boo = f1 != f2;
	if (boo == 0) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	cout << "Stream Extraction " << endl;
	cout << f3;
	system("pause");
	return 0;
}