//std::cout�� ����
#include <iostream>
using namespace std;

//#define jegob(A) ((A) * (A))
// �ڷ��� ����X
// pre�����Ϸ��� ó��
//����� ����
  
// ��ũ�� �Լ��� ������
// ������ �Լ��� ȣ����� ������
// �����Ϸ��� ó��
//�ڷ��� ���� ����
// �����Ϸ��� ó�� -> ������� ����
inline int jegob(int a)
{
	return a * a;
}

int main(void)
{
	cout << jegob(3) << endl; //9
}