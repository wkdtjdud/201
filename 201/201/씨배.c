#include <stdio.h>


//�ִ밪�� �� ��ġ
int main(void){
int arr[5] = { 2, 4, 6, 89, 3 };
int i, temp;
int max = 0;


for(i = 0; i < 10; i++) {
	if (max < arr[i])
	{
		max = arr[i]; //max��ġ���� ū i��° ���� ����
		temp = i;
	}
}
printf("�ִ밪�� %d ��ġ�� %d\n", max, ++temp);
}