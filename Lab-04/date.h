
class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int x, int y, int z);

	//setters
	void set_day(int x);
	void set_month(int x);
	void set_year(int x);

	//getters
	int get_day();
	int get_month();
	int get_year();

	//member functions
	void input();
	void print();
};