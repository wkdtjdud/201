#include <iostream> //cout, endl ���
#include <string.h> //strcpy()���
using namespace std; //std::�� ����

class Student {
private:
	int nHakbun;
	char* sName;

public:

	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();
	Student& operator = (const Student& rhs);


	void show();

};


Student::Student() {
	this->nHakbun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(){

}

//��������� �ʱ�ȭ �� �� ������
//const�� ������ ������ ������ ��������� �� �� �ִ�.
Student::Student(int Hakbun, const char* Name)
	:nHakbun(Hakbun) //�������(�Ű�����)
{

	cout << "Student �Ϲݻ����� ȣ��." << endl;
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
	cout << "Student �Ҹ��� ȣ��" << endl;
}
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}

//defalut ���� ������

Student& Student::operator = (const Student& rhs)
{
	nHakbun = rhs.nHakbun;
	cout << "Student ��������� ȣ��" << endl;
	int len = strlen(rhs.sName) + 1;
	sName = new char[len];
	strcpy(sName, rhs / sName);

	return *this;
}


class HighschoolStudent : public Student
{
public:
	HighschoolStudent(int Hakbun, const char* Name, bool isD)
		: Student(Hakbun, Name), isDormitory(isD) //�̰� �� ���ָ� �ʱ�ȭ�� �� ��
	
	{
		cout << "HighSchoolStudent ������ ȣ��" << endl;
	}

	~HighschoolStudent()
	{
		cout << "HighschoolStudent �Ҹ��� ȣ��" << endl;
	}

private:
	bool isDormitory;

};


int main(void)
{
	HighschoolStudent hss = HighschoolStudent(1111, "JWP", "false");
	hss.show();

	return 0;

}