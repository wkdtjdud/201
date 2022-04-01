#include <stdio.h>


//최대값과 그 위치
int main(void){
int arr[5] = { 2, 4, 6, 89, 3 };
int i, temp;
int max = 0;


for(i = 0; i < 10; i++) {
	if (max < arr[i])
	{
		max = arr[i]; //max위치보다 큰 i번째 숫자 선택
		temp = i;
	}
}
printf("최대값은 %d 위치는 %d\n", max, ++temp);
}