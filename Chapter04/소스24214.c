#include <stdio.h>

int main(void)
{
	int id, pass, count;
	while (1)
	{
		printf("���̵� �Է��ϼ��� :");
		scanf("%d", &id);
		printf("�н����带 �Է��ϼ��� : ");
		scanf("%d", &pass);
		count = check(id, pass);
		if (count == 1) break;
	}
	printf("�α��ο� �����߽��ϴ�!. \n ");
}
int check(int id, int pass)
{
	int super_id = 91;
	int super_pass = 0711;
	static int cnt;


	if (super_id == id && super_pass == pass)
		return 1;
	else
	    printf("�α��ο� ���� �߾�� ���� ��ȸ %d��\n", 3 - cnt);
		cnt++;
		return 0;
	if (cnt >= 3)
	{
		printf("Ƚ�� �ʰ� �� ����\n");
	}



}
void save(int amount)
{
	static int total;
	if (amount > 0)
		printf("%d\t\t", amount);
	else 
		printf("\t %d \t", amount);

	total += amount;
	printf("%d\n", total);
}