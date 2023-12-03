#include <iostream>
#include <fstream>
using namespace std;

class Voter
{
private:
	static int total_votes;
	int id;
	char* name;
	char* CNIC;

public:
	Voter();
	Voter(int id, char* name,char* CNIC);

	//getters
	int get_id();
	char* get_name();
	char* get_CNIC();

	//setters
	void set_id(int id);
	void set_name(char* name);
	void set_CNIC(char* CNIC);

	bool castvote(const char* filename, int id);

	void print();

	static int gettotalvotes();
	~Voter();
};

//prototype for forward referencing global function
bool cmp(const char* arr1, const char* arr2);

Voter::Voter()
{
	id = 0;
	name = new char[20];
	CNIC = new char[20];
}

Voter::Voter(int id, char* name, char* CNIC) {
	this->id = id;
	this->name = new char[20];
	int i;
	for (i = 0; name[i] != '\0'; i++)
	{
		this->name[i] = name[i];
	}
	this->name[i] = '\0';
	this->CNIC = new char[20];
	for (i = 0; CNIC[i] != '\0'; i++)
	{
		this->CNIC[i] = CNIC[i];
	}
	this->CNIC[i] = '\0';
}

int Voter::gettotalvotes() {
	return total_votes;
}

int Voter::get_id() {
	return id;
}

char* Voter::get_name() {
	return name;
}

char* Voter::get_CNIC() {
	return CNIC;
}

void Voter::set_id(int id){
	this->id = id;
}

void Voter::set_name(char* name)
{
	int i;
	for (i = 0; name[i] != '\0'; i++)
	{
		this->name[i] = name[i];
	}
	this->name[i] = '\0';
}

void Voter::set_CNIC(char* CNIC) {
	int i;
	for (i = 0; CNIC[i] != '\0'; i++)
	{
		this->CNIC[i] = CNIC[i];
	}
	this->CNIC[i] = '\0';
}

bool Voter::castvote(const char* filename, int id) {
	char a[50];
	ifstream in;
	in.open(filename);
	while (in)
	{
		in.getline(a, 50);
		cout << a << "\n";
	}
	in.close();

	char sym[10];
	cout <<"Enter a symbol to vote: ";

	while (true)
	{
		cin >> sym;
		cin.ignore();
		if (cmp(sym, "Tiger") || cmp(sym, "Bat") || cmp(sym, "Arrow"))
		{
			Voter::total_votes++;
			cout << "Continue voting by entering another symbol or type -1 to stop: ";
		}
		else if (cmp(sym, "-1"))
		{
			cout << "Voting closed ";
			cout << "\n\n";
			return true;
		}
		else
			cout << "Enter a valid symbol ";
	}
}

void Voter::print() {
	cout << "ID is: " << id << endl;
	cout << "Name is: " << name << endl;
	cout << "CNIC is: " << CNIC << endl;
}


Voter::~Voter()
{
	id = 0;
	name = nullptr;
	CNIC = nullptr;
}

//global functions
void readvoters(Voter& v, int id)
{
	char a[30];
	ifstream myfile;
	myfile.open("VotersList.txt");

	for (int i = 1; i <= id; i++)
	{
		myfile.getline(a, 30, '\n');
	}
	myfile.getline(a, 30, ',');
	v.set_id(int(a[0]) - 48);
	myfile.getline(a, 30, ',');
	v.set_name(a);
	myfile.getline(a, 30, ',\n');
	v.set_CNIC(a);
	myfile.close();
}

bool cmp(const char* arr1, const char* arr2) {
	for (int i = 0; arr1[i] != '\0' || arr2[i] != '\0'; i++)
	{
		if (arr1[i] != arr2[i]) {
			return false;
		}
	}
}

int Voter::total_votes = 0;

int main() {
	Voter v1;
	Voter v2;
	Voter v3;
	Voter v4;
	Voter v5;

	readvoters(v1, 1);
	readvoters(v2, 2);
	readvoters(v3, 3);
	readvoters(v4, 4);
	readvoters(v5, 5);

	int n = 0;
	int id;

	ifstream x("PoliticalParties.txt");
	char arr[10];
	while (x.getline(arr, 10, '\n'))
	{
		cout << arr << endl;
	}

	v3.print();

	cout << "Please enter your id: ";
	cin >> id;
	while (id < 1 || id>5) {
		cout << "Wrong id, enter again";
		cin >> id;
	}

	if (id == v1.get_id())
	{
		v1.castvote("PoliticalParties.txt",id);
	}
	if (id == v2.get_id())
	{
		v2.castvote("PoliticalParties.txt", id);
	}
	if (id == v3.get_id())
	{
		v3.castvote("PoliticalParties.txt", id);
	}
	if (id == v4.get_id())
	{
		v4.castvote("PoliticalParties.txt", id);
	}
	if (id == v5.get_id())
	{
		v5.castvote("PoliticalParties.txt", id);
	}

	cout<<"Total Votes Casted are: "<<v2.gettotalvotes()<<" votes.";
	system("pause");
}