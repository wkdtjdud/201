#include <iostream> //cout, endl 사용
#include <string.h> //strcpy()사용
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

Student::Student(int Hakbun, string Name)
{
}

//멤버변수를 초기화 할 수 있으며
//const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, const char* Name)
	:nHakbun(Hakbun) //멤버변수(매개변수)
{

	cout << "일반생성자 호출." << endl;
	int len = strlen(Name) + 1;	// 공간의 개수 파악
	sName = new char[len];		// 개수만큼 메모리 할당
	strcpy(sName, Name);
}

//직접 작성 안 해도 컴파일러가 알아서 만들어주는 
//복사 생성자

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName) {

}


Student::~Student() {
	delete[]sName;
	cout << "소멸자 호출" << endl;
}
void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}

int main(void)
{

	Student stu1 = Student(1111, "jwp");
	Student stu2 = stu1;

	stu1.show();
	stu2.show();

	return 0;

}