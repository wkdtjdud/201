#include <stdio.h>

{
	int main(void)
	{
		int a, b, c = 0;
		a = ++c;
		b = c++;
		printf("%d %d %d \n"a, b, ++c);
	}