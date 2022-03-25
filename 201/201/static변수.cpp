#include <iostream>
using namespace std;

void jungjuk(void)
{
	static int a = 0; //static 함수는 사라지지 않음 한 번 할당되면 쭉 남는다.
	cout << "정적 지역변수 a는 " << a << endl;
	a++;

}

int main(void) {
	jungjuk();	//0
	jungjuk();	//0
	jungjuk();	//
	// 0-> 1-> 2-> '3'
}