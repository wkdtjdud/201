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

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
} 

int main(void)
{

	Student stu1 = Student(1111, "jwp");
	stu1.show(); 

	
	/*int* ptr2 = new int[4];
	for (int i = 0; i < 4; i++) {
		ptr2[i] = 10 + i;
		cout << ptr2[i] << " ";

	}
	delete[]ptr2;*/

	/*Student* stu2 = new Student[6];
	for(int i=0; i<6; i++)
	stu2[i].show();

	delete []stu2;
	*/

	return 0;

}