#include <stdio.h>
int main()
{
	double ls, st, second,bun;
	ls = 300000.0;
		st = 149600000.0;
		second = st / ls;
		printf("���� �ӵ��� �ʼ� %.2fkm�̰�,\n", ls);
			printf("�¾�� �������� �Ÿ��� %.2fkm�Դϴ�.\n", st);
			printf("���� ������ �����ϴ� �ð��� �� %.2f���Դϴ�.\n", second);
			bun = (int)second/60;
			printf("%d�� %d��\n", (int)second / 60, (int)second % 60);
				
}