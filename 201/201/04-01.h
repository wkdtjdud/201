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