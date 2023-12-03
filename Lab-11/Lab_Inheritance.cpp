#include "Person.h"
#include "Student.h"
#include "Undergraduate.h"
#include "Faculty.h"
#include "Graduate.h"

int main() {
	//Old main
	//Undergraduate U1("Ted", "Thompson", 22, 3.91, "Robotics");
	//Faculty F1("Richard", "Karp", 45, 2, 420);
	//F1.printinformation();
	//U1.printStudent();
	//F1.printFaculty();

	//New main
	Undergraduate U("Ted", "Thompson", 22, 3.91, "The Event Locator");
	Graduate G("Arnold", "Gates", 25, 3.01, "Districuted Algorithms");
	U.printUndergraduate();
	G.printgraduate();
	U.printStudent();

	system("pause");
}

// Exercise 5 Output
//Person(...) called
//Student(...) called
//Undergraduate(..) called
//Person(...) called
//Faculty(...) called

// Exercise 7 Output
//Person(...) called
//Student(...) called
//Undergraduate(..) called
//Person(...) called
//Faculty(...) called
//Richard Karp is 45 years old.
//Ted Thompson is 22 years old and his / her gpa is 3.91
//Faculty Member Name : Richard Age : 45 Number of Courses : 2 Extension Number : 420

//Exercise 8 Output
//Person(...) called
//Student(...) called
//Undergraduate(..) called
//Person(...) called
//Student(...) called
//Graduate(...) Called
//Ted Thompson is an undergraduate student, his / her cgpa is 3.91 and final year project is titled The Event Locator
//Arnold Gates is a graduate student, his / her gpa is 3.01 and his / her thesis topic is Districuted Algorithms
//Ted Thompson is 22 years old and his / her gpa is 3.91