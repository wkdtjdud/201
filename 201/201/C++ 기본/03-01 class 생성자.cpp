#include <iostream> //cout, endl ���
#include <string>
using namespace std; //std::�� ����

/*class Student {
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

//��������� �ʱ�ȭ �� �� ������
//const�� ������ ������ ������ ��������� �� �� �ִ�.
Student::Student(int Hakbun, string Name)
:nHakbun(Hakbun), sName(Name) //�������(�Ű�����)
{
	
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
} */

int main(void)
{
	/*student stu1 = student();
	stu1.show();

	student stu2 = student(1111, "jwp");
	stu2.show(); */

	
	int* ptr1 = new int;
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;


	return 0;

}