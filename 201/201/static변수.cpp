#include <iostream>
using namespace std;

void jungjuk(void)
{
	static int a = 0; //static �Լ��� ������� ���� �� �� �Ҵ�Ǹ� �� ���´�.
	cout << "���� �������� a�� " << a << endl;
	a++;

}

int main(void) {
	jungjuk();	//0
	jungjuk();	//0
	jungjuk();	//
	// 0-> 1-> 2-> '3'
}