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

Student::~Student() {
	delete []sName;
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