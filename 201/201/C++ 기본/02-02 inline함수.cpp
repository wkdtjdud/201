//std::cout를 포함
#include <iostream>
using namespace std;

//#define jegob(A) ((A) * (A))
// 자료형 영향X
// pre컴파일러가 처리
//디버깅 불편
  
// 매크로 함수와 유사함
// 실제로 함수가 호출되지 않으며
// 컴파일러가 처리
//자료형 영향 받음
// 컴파일러가 처리 -> 디버깅이 수월
inline int jegob(int a)
{
	return a * a;
}

int main(void)
{
	cout << jegob(3) << endl; //9
}