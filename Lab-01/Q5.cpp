//#include <iostream>
//using namespace std;
//
//int main() {
//	const int a = 10;
//	const int b = 10;
//	const int c = 12;
//    
//    const int* ptra;
//    const int* ptrb;
//    const int* ptrc;
//    ptra = &a;
//    ptrb = &b;
//    ptrc = &c;
//
//    if ((*ptra < *ptrb && *ptrb < *ptrc) || (*ptrc < *ptrb && *ptrb < *ptra)) {
//        cout << *ptrb<<endl;
//        //*ptrb = -1;
//    }
//
//    else if ((*ptrb < *ptra && *ptra < *ptrc) || (*ptrc < *ptra && *ptra < *ptrb)) {
//        cout << *ptra<<endl;
//        //*ptra = -1;
//    }
//    
//    else if (*ptra == *ptrb || *ptrb == *ptrc || *ptra == *ptrc)
//        cout << "One or more values are same and the median is " << *ptrb<<endl;
//    
//    else {
//        cout << *ptrc<<endl;
//        //*ptrc = -1;
//    }
//
//    cout << "Expression must be a modifiable value: cannot reassign a constant integer even through pointers";
//    cout<<"we can make constant integer and then we can assign -1";
//
//	system("pause");
//}