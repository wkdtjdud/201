#include <iostream> //cout, endl ���
#include <string>
using namespace std; //std::�� ����

class Student {
public:

	Student();
	Student(int Hakbun, string Name);

	void show();
	
};


Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name) {
	Hakbun = Hakbun;
	sName = Name;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}

int main(void)
{
	Student stu1 = Student();
	stu1.show();

	Student stu2 = Student(1111, "JWP");
	stu2.show();

}