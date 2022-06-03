//�� ���� �� �� �˾ƾ� ��
#include <iostream> //cout, endl ���
using namespace std;

class Point
{

public:
	//������
	Point(int _x, int _y);
	Point(void);

	//������ �����ε�
	Point operator+(const Point& rhs);

	void print(void);
private:
	int mX;
	int mY;
};

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}
Point::Point(){}


void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}

Point Point::operator+(const Point& rhs)
{
	Point p;
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}


int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1+p2; //p1.operator+(p2)

	sum.print();	//(4, 6)���
	return 0;
}



