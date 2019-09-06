#include <stdio.h>
int mai(void)
{
	int a = 10;
	int i = 1;
	for (i = 1; i <= 7; i++)
	{
		a *= 4;
		printf("%d시간뒤 세균의 수가 4배로 증가합니다.\n", i);
		printf("세균의 수가 %d로 증가했습니다.\n", a);
	}
}
