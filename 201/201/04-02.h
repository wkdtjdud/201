//안 보고 할 줄 알아야 해
#include <iostream> //cout, endl 사용
using namespace std;

class Integer {
public:
	Integer(void) {}
	Integer(int v) : value(v) {}

	Integer operator + (const Integer& rhs);
	void print();

private:
	int value;

};