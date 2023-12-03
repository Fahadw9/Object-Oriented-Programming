#include <iostream>
#include "Time.h"
#include "BiggerInt.h"
using namespace std;

int main(){
	//q1
	int size = 5;
	int*ptr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(ptr + i);
	}
	BiggerInt i(ptr, size);
	BiggerInt i2(i);
	i.display();
	i2.display();
	cout << i.compareTo(i2) << endl;
	i.append(i2);
	i.display();
	i2.append(ptr, size);
	i2.display();
	cout << i.compareTo(i2) << endl;
	//~BiggerInt();

	//q2
	cout<<"\n\nTime Code\n";
	Time t;
	t.setHour( 18 ).setMinute( 30 ).setSecond( 45 ); //cascading
	//cout<<t.getHour()<<":"<<t.getMinute()<<":"<<t.getSecond()<<endl;
	Time z(5,9,8);
	z = t.getCurrentTime();
	cout<<z.getHour()<<":"<<z.getMinute()<<":"<<z.getSecond()<<endl;

	system("pause");
	return 0;
}