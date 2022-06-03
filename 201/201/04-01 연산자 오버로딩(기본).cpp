//안 보고 할 줄 알아야 해
#include <iostream> //cout, endl 사용
using namespace std;

class Point
{

public:
	Point(int _x, int _y);
	void print(void);
private:
	int mX;
	int mY;
};

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}


int main(void)
{
	Point p1(1, 2);
	
	p1.print();
	return 0;
}


/*Point Point::operator+(const Point& rhs)
{
	Point point;
	point.mX = mY + rhs.mX;
	point.mY = mY + rhs.mY;
	return point;
} */

