#include <stdio.h>
int main()
{
	double si, bun, cho	;
	int cho2 ,bun2;
	cho = 60004;
	bun = cho / 60;
	si = bun / 60;
	bun2 = (int)bun % 60;
	cho2 = (int)cho % 60;
	printf("%d�ð� %d�� %d�ʰ� �ɸ��ϴ�\n", (int)si, (int)bun2, (int)cho2);
}