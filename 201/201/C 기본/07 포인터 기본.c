#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	//ptr3�� num2�� ����Ŵ(&num3->&num2)
	ptr3 = ptr2;
	//ptr2�� num1�� ����Ŵ( &num2->&num1)
	ptr2 = ptr1;
	//ptr1�� num1�� ����Ŵ(����Ű�� ��� ��������)
	ptr1 = ptr2;

	printf("%d %d %d", *ptr1, *ptr2, *ptr3);
}