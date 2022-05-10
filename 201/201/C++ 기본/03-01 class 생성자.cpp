#include <iostream> //cout, endl 사용
#include <string>
using namespace std; //std::를 생략

class Student {
public:

	Student();
	Student(int Hakbun, string Name);

	void show();
	
};


Student::Student() {
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

//멤버변수를 초기화 할 수 있으며
//const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, string Name)
:nHakbun(Hakbun), sName(Name) //멤버변수(매개변수)
{
	
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}

int main(void)
{
	Student stu1 = Student();
	stu1.show();

	Student stu2 = Student(1111, "JWP");
	stu2.show();

}