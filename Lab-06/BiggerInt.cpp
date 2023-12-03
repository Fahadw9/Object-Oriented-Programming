#include "BiggerInt.h"
using namespace std;
#include <iostream>

BiggerInt::BiggerInt()
{
	big_int = nullptr;
}

BiggerInt::BiggerInt(const int* obj, int size) {
	big_int = new int[size];
	for (int i = 0; i < size; i++) {
		*(big_int + i) = *(obj + i);
	}
	this->int_length = size;
}

BiggerInt::BiggerInt (const BiggerInt &obj){
	std::cout<<"Copy Constructor Called"<<endl;
	big_int = new int[obj.int_length];
	for (int i = 0; i < obj.int_length; i++) {
		*(big_int + i) = *(obj.big_int + i);
	}
	this->int_length = obj.int_length;
}

void BiggerInt::assign(const BiggerInt &obj){
	this->int_length = obj.int_length;
	big_int = new int[obj.int_length];
	for (int i = 0; i < obj.int_length; i++) {
		*(big_int + i) = *(obj.big_int + i);
	}
}

void BiggerInt::assign(const int * big_int, int size){
	this->int_length = size;
	this->big_int = new int[size];
	for (int i = 0; i < size; i++) {
		*(this->big_int + i) = *(big_int + i);
	}
}

void BiggerInt::append(const BiggerInt&obj) {
	int temp_size = this->int_length + obj.int_length;
	int *temp_arr = new int[temp_size];
	for (int i = 0; i < this->int_length; i++) {
		*(temp_arr + i) = *(this->big_int + i);
	}
	for (int i = this->int_length, c= 0; i < temp_size; i++, c++) {
		*(temp_arr + i) = *(obj.big_int + c);
	}


	this->int_length = temp_size;
	this->big_int = new int[this->int_length];
	for (int i = 0; i < temp_size; i++) {
		*(big_int + i) = *(temp_arr + i);
	}
	delete[] temp_arr;

}
void BiggerInt::append(int *big_int, int size) {
	int temp_size = this->int_length + size;
	int *temp_arr = new int[temp_size];
	for (int i = 0; i < this->int_length; i++) {
		*(temp_arr + i) = *(this->big_int + i);
	}
	for (int i = this->int_length, c = 0; i < temp_size; i++, c++) {
		*(temp_arr + i) = *(big_int + c);
	}


	this->int_length = temp_size;
	this->big_int = new int[this->int_length];
	for (int i = 0; i < temp_size; i++) {
		*(this->big_int + i) = *(temp_arr + i);
	}
	delete[] temp_arr;
}

int BiggerInt::compareTo(const BiggerInt & obj) {
	if (this->int_length > obj.int_length) {
		return  2;
	}
	else if(this->int_length < obj.int_length){
		return 1;
	}
	for (int i = 0; i < obj.int_length; i++) {
		if (*(this->big_int + i) > *(obj.big_int + i)) {
			return 2;
		}
		else if (*(this->big_int + i) < *(obj.big_int + i)) {
			return 1;
		}
	}
	return 0;
}
int BiggerInt::compareTo(int*big_int, int size) {
	if (this->int_length > size) {
		return  2;
	}
	else if (this->int_length < size) {
		return 1;
	}
	for (int i = 0; i < size; i++) {
		if (*(this->big_int + i) > *(big_int + i)) {
			return 2;
		}
		else if (*(this->big_int + i) < *(big_int + i)) {
			return 1;
		}
	}
	return 0;
}
void BiggerInt::display() {
	if (int_length == 0) {
		cout << "No Value Assigned" << endl;
	}
	else {
		for (int i = 0; i < int_length; i++) {
			cout << *(big_int + i);
		}
	}
	cout << endl;
}
BiggerInt::~BiggerInt() {
	delete[] this->big_int;
	this->big_int = NULL;
}