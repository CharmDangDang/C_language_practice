#include <stdio.h>
int main(void)
{
	/*int prico1, paid,
	 ochon, chon, obac, change ,bac;
	printf("���� �� �Է��ϻ�(�������) : \n");
	scanf("%d", &prico1);
	printf("�� ���ǰ���? �Ž����帲(10��,50��¥�� ����) :\n");
	scanf("%d", &paid);
	
	change = paid - prico1;
	ochon = change / 5000;
	change = change % 5000;
	chon = change / 1000;
	change = change % 1000;
	obac = change / 500;
	change = change % 500;
	bac = change / 100;
	change = change % 100;

	printf("������ %d�̰� ���ŵ��� %d�Դϴ�.\n", prico1, paid);
	printf("�Ž������� ��õ��¥�� %d�� õ��¥�� %d��\n", ochon, chon);
	printf("�����¥�� %d�� ���¥�� %d���� ����\n", obac, bac);

	change = 0;
	change = (prico1 || bac) + 3;
	print */

	int x, result;
	printf("�⵵�� �Է��ϼ��� :");
	scanf("%d", &x);
	result = (x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0);
		(result) ? printf("�����Դϴ�\n") : printf("����Դϴ�\n");
} 