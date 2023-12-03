//#include <iostream>
//using namespace std;
//
//class MyArray
//{
//private:
//	int* arr;
//	int size;
//
//public:
//	MyArray(int* arr, int size) {
//		this->arr = arr;
//		this->size = size;
//	}
//	int& operator[](const int i) ;
//	void print();
//};
//
//int& MyArray::operator[](const int i) {
//	if (i >= 0 && i < size)
//	{
//		return arr[i];
//	}
//	else {
//		cout << "wrong size" << endl;
//	}
//}
//
//void MyArray::print() {
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int f_array[] = { 2, 4, 6, 8 };
//	MyArray arr(f_array, 4);
//	arr[2] = 6;
//	arr.print();
//	arr[3] = 12;
//	//arr[4] = 6;
//	//exception because index out of bounds
//	arr.print();
//	system("pause");
//	return 0;
//}