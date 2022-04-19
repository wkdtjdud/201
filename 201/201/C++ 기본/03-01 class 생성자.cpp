#include <iostream> //cout, endl 사용
#include <string>
using namespace std; //std::를 생략

class Student {
public:

	Student();
		
	void show();
	
};


Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
};
void show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl;
};
int main(void)
{

	Student stu;
	stu.show();

}