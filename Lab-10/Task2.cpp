#include <iostream>
using namespace std;

class Tyre
{
private:
	int* width;
	int* aspect_ratio;
	int* diameter;
public:
	Tyre();
	Tyre(int, int, int);
	int* get_width();
	int* get_aspectratio();
	int* get_diameter();
	void PrintTyre();
	~Tyre();
};

class Car
{
public: private:
	int* model;
	char* company;
	Tyre* t1;
public:
	Car();
	Car(int mod, char comp[], Tyre tyre);
	void PrintCar();
	~Car();
};

Tyre::Tyre() {
	width = NULL;
	aspect_ratio = NULL;
	diameter = NULL;
}

Tyre::Tyre(int wid, int ratio, int dia) {
	width = new int(wid);
	aspect_ratio = new int(ratio);
	diameter = new int(dia);

}

int* Tyre::get_width() { // getters
	return width;
}

int* Tyre::get_aspectratio() {
	return aspect_ratio;
}

int* Tyre::get_diameter() {
	return diameter;
}

void Tyre::PrintTyre() {
	cout << "Tyre: " << endl;
	cout << "Width: " << *(width) << endl;
	cout << "Aspect_ratio: " << *(aspect_ratio) << endl;
	cout << "Diameter: " << *(diameter) << endl;
}

Tyre::~Tyre() { //destructor
	delete[] width;
	delete[] aspect_ratio;
	delete[] diameter;
}

Car::Car() {
	model = NULL;
	company = NULL;
}

Car::Car(int mod, char comp[], Tyre tyre) {
	model = new int(mod);
	company = comp;
	t1 = new Tyre(*(tyre.get_width()), *(tyre.get_aspectratio()), *(tyre.get_diameter()));
}

void Car::PrintCar() {
	cout << "Model: " << *(model) << endl;
	cout << "Company: " << company << endl;
	t1->PrintTyre();
}

Car::~Car() {
	delete[] model;
	delete[] company;
	delete[] t1;
}

int main() {
	char c1[] = "Honda";
	Tyre tNew(12, 10, 13);
	Car cNew(2016, c1, tNew);
	cNew.PrintCar();

	system("pause");
	return 0;
}