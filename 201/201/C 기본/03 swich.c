#include <stdio.h>

int main(void)
{
	int x = 1;

	switch (x)
	{
	case 0:
		printf("0");
		break;
	case 1:
		printf("1");
		//break�� ���� ������ �ܼ�â������ "12"�� ���
	case 2:
		printf("2");
		break;
	case 3:
		printf("d");
		break;
	}
	
	return 0;
}