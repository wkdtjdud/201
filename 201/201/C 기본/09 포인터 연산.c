#include <stdio.h>

int main(void)
{
	//������ �ּҰ��� 100, 104, 108, 10C, 110
	int nums[5] = { 10, 20, 30, 40, 50 };

	//ptr1: 100 + 2*4 = 108
	int* ptr1 = nums + 2; //30�� �ش��ϴ� �ּҰ�
	//ptr2: 100 + 2*4 = 108
	int* ptr2 = &nums[0] + 2;

	return 0;
}