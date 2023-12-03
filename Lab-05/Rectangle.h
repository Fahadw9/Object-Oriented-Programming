
class Rectangle
{
public:
	Rectangle();
	Rectangle(int x, int y);

	int getWidth();
	int getLength();
	int getArea();

	void setWidth(int x);
	void setLength(int x);
	void rotateRectangle();
	void draw();


private:
	int width;
	int length;
};
