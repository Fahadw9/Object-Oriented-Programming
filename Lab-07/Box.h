
class Box
{
public:
	Box();
	Box(double x, double y, double z);

	double getlength();
	double getbreadth();
	double getheight();

	void setlength(double x);
	void setbreadth(double x);
	void setheight(double x);

	static int getCount();
	double Volume();
	double Area();

	friend void print_surface_area(Box box);
	friend void double_data_members(Box &box);

private:
	double length;
	double breadth;
	double height;
	static int objectCount;
};