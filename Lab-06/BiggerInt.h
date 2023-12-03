class BiggerInt
{
public:
	int* big_int;
	int int_length;
public:
	BiggerInt();
	BiggerInt(const int* obj, int size);
	BiggerInt(const BiggerInt& obj);
	void assign(const BiggerInt& obj);
	void assign(const int* big_int, int size);
	void append(const BiggerInt& obj);
    void append(int *big_int, int size);
	int compareTo(const BiggerInt& obj);
	int compareTo(int*big_int, int size);
	void display();
	~BiggerInt();

};