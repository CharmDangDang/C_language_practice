#include <stdio.h> 

int main(void)
{
	int seat[10] = { 0 };

	char yorn;
	int wantyou;
	int wantyou2;
	int people;
	while (1)
	{
		printf("������ �Ͻðڽ��ϱ�? y or n \n");
		scanf(" %c", &yorn);
		if (yorn == 'y') {
			printf("����̽Ű��� 2����� ����?\n");
			scanf("%d", &people);
			if (people == 1) {
				printf("���� �����ִ� �¼� \n");
				printf("1 2 3 4 5 6 8 9 10 \n");
				for (int b = 0; b < 10; b++) {
					printf("%d ", seat[b]);
				}
				printf("\n�ɰ� ���� �¼��� �������ּ���\n");
				scanf("%d", &wantyou);
				if (seat[wantyou - 1] == 0) {
					printf("����Ǿ����ϴ�...");
					seat[wantyou - 1] = 1;
				}
				else
					printf("�̹� ����ƴµ���?? Ŀ�ü��� ���� ��\n");

			}
			else if (people == 2) {
				printf("���� �����ִ� �¼� \n");
				printf("1 2 3 4 5 6 8 9 10 \n");
				for (int b = 0; b < 10; b++) {
					printf("%d ", seat[b]);
				}
				printf("\n�ɰ� ���� �¼��� �������ּ���\n");
				scanf("%d %d", &wantyou, &wantyou2);
				if (seat[wantyou - 1] == 0 && seat[wantyou2 - 1] == 0) {
					printf("����Ǿ����ϴ�. �� Ŀ��..\n");
					seat[wantyou - 1] = 1, seat[wantyou2 - 1] = 1;
				}
				else
					printf("�̹� ����ƴµ���?? �ַμ��� ���� ��\n");
			}



		}
		else break;





	}
}