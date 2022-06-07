#include <iostream> //cout, endl ���
#include <string.h> //strcpy()���
using namespace std; //std::�� ����

class Student {
public:

	Student();
	Student(int Hakbun, string Name);

	void show();

};


Student::Student() {
	this->nHakbun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name)
{
}

//��������� �ʱ�ȭ �� �� ������
//const�� ������ ������ ������ ��������� �� �� �ִ�.
Student::Student(int Hakbun, const char* Name)
	:nHakbun(Hakbun) //�������(�Ű�����)
{

	cout << "�Ϲݻ����� ȣ��." << endl;
	int len = strlen(Name) + 1;	// ������ ���� �ľ�
	sName = new char[len];		// ������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}

//���� �ۼ� �� �ص� �����Ϸ��� �˾Ƽ� ������ִ� 
//���� ������

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName) {

}


Student::~Student() {
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}

int main(void)
{

	Student stu1 = Student(1111, "jwp");
	Student stu2 = stu1;

	stu1.show();
	stu2.show();

	return 0;

}