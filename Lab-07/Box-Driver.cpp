#include "Box.h"
#include <iostream>

using namespace std;

int main(){
	// Print total number of objects before creating object.
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   // Print total number of objects after creating object.
   cout << "Final Stage Count: " << Box::getCount() << endl;

   print_surface_area(Box1);
   double_data_members(Box2);
   cout<<"Length is: "<<Box2.getlength()<<" ,"<<"Breadth is: "<<Box2.getbreadth()<<" ,"<<"The height is: "<<Box2.getheight();

   system("pause");
   return 0;
}