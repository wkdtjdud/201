#include <iostream> //cout, endl ���
#include <string>
using namespace std; //std::�� ����

class Student {
public:
	int nHakbun;
	string sName;

	// ������: ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� �������� �ʴ´� 
	Student() {
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}
	void show()
	{
		cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
		cout << "�̸��� " << sName << "�Դϴ�" << endl;
	}
};

int main(void)
{

	Student stu;
	stu.show();

}