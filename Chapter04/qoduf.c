#include <stdio.h>
#define CNT 3

int main(void)
{
	int kor[CNT], eng[CNT], mat[CNT], gkq[CNT], rank[CNT];
	double vud[CNT];
	char name[CNT][10];

	for (int i = 0; i < CNT; i++) {
		printf("%d ��° ������ �Է��ϼ��� :", i + 1);
		scanf(" %s", name[i]);
		printf("%d ��° ���� ���� �Է��ϼ��� :", i + 1);
		scanf("%d", &kor[i]);
		printf("%d ��° ���� ���� �Է��ϼ��� :", i + 1);
		scanf("%d", &eng[i]);
		printf("%d ��° ���� ���� �Է��ϼ��� :", i + 1);
		scanf("%d", &mat[i]);
		gkq[i] = kor[i] + eng[i] + mat[i];
		vud[i] = gkq[i] / CNT;
		rank[i] = 1;
	}
	int i, j;
	for (i = 0; i < CNT - 1; i++)
		for (j = i + 1; j < CNT; j++)
			if (vud[i] > vud[j])
				rank[j]++;
			else if (vud[i] < vud[j])
				rank[i]++;

	printf("\t\t����ǥ\t\n");
	printf("\n");
	printf("\t�̸�\t����\t����\t����\t����\t���\t��ũ\t\n");
	for (int i = 0; i < CNT; i++)
		printf("\t%s\t%d\t%d\t%d\t%d\t%.2lf\t%d\n", name[i], kor[i], eng[i], mat[i], gkq[i], vud[i],rank[i]);
}