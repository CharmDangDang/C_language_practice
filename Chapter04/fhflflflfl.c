#include <stdio.h>
int mai(void)
{
	int a = 10;
	int i = 1;
	for (i = 1; i <= 7; i++)
	{
		a *= 4;
		printf("%d�ð��� ������ ���� 4��� �����մϴ�.\n", i);
		printf("������ ���� %d�� �����߽��ϴ�.\n", a);
	}
}
