#include <iostream> //cout, endl 사용
#include <string>
using namespace std; //std::를 생략

class Student {
public:
	int nHakbun;
	string sName;

	// 생성자: 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고있지 않는다 
	Student() {
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다." << endl;
	}
	void show()
	{
		cout << "학번은 " << nHakbun << "입니다" << endl;
		cout << "이름은 " << sName << "입니다" << endl;
	}
};

int main(void)
{

	Student stu;
	stu.show();

}