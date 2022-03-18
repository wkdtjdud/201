#include <stdio.h>

int main(void)
{
	//각각의 주소값은 100, 104, 108, 10C, 110
	int nums[5] = { 10, 20, 30, 40, 50 };

	//ptr1: 100 + 2*4 = 108
	int* ptr1 = nums + 2; //30에 해당하는 주소값
	//ptr2: 100 + 2*4 = 108
	int* ptr2 = &nums[0] + 2;

	printf("%d %d", *ptr1, *ptr2 );
	return 0;
}