#include <iostream> //cout, endl ���
#include <string>
using namespace std; //std::�� ����

class Student {
private:
	int nHakbun;
	string sName;

	// ������: ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� �������� �ʴ´� 
	Student() {
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

};

int main(void)
{

	Student stu();

}
