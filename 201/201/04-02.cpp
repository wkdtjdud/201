//안 보고 할 줄 알아야 해
#include <iostream> //cout, endl 사용
#include "04-02.h"
using namespace std;


void Integer::print()

{
	cout << value << endl;
}


Integer Integer::operator+(const Integer& rhs)
{
	Integer temp;
	temp.value = value + rhs.value;

	return temp;
}
