#include <stdio.h>
#include <time.h>
#define CNT 3

int main(void)/*
{
	int pikachu[10],i,j,tmp,cnt,monster,ball,baam;
	srand(time(0));
	for (i = 0; i < SIZE; i++) {
		pikachu[i] = rand() % 100;
		for (j = 0; j < i; j++)
			if (pikachu[i] == pikachu[j])
			{
				i--;
				break;
			}
	}

	for (i = 0; i < SIZE; i++)
		printf("%d ", pikachu[i]);

	printf("\n");


	for (i = 0; i < SIZE - 1; i++) {
		for(j=i+1;j<SIZE;j++)
			if (pikachu[i] > pikachu[j])
			{
				tmp = pikachu[i];
				pikachu[i] = pikachu[j];
				pikachu[j] = tmp;
			}
	}
	for (i = 0; i < SIZE; i++)
		printf("%d ", pikachu[i]);

	printf("\n");
















}*/
{
	char name[CNT][10], temp_n[10];
	double sungjuk[CNT][6] = { 0.0 }, temp_d;
	int i, j;
	srand(time(0));
	printf("%d명의 성적 입력하시오\n", CNT);
	for (i = 0; i < CNT; i++)
	{
		printf("%d번째 이름을 입력하시오. : ", i + 1);
		scanf("%s", &name[i]);
		for (j = 0; j < 3; j++)
		{
			switch (j)
			{
			case 0:printf(" %d번  국어 점수 입력 :", i + 1); break;
			case 1:printf(" %d번  영어 점수 입력 :", i + 1); break;
			case 2:printf(" %d번  수학 점수 입력 :", i + 1); break;
			}
			//scanf("%lf", &sungjuk[i][j]);
			sungjuk[i][j] = 40+rand() % 61;
			printf("%.0f\n", sungjuk[i][j]);
			sungjuk[i][3] += sungjuk[i][j];
		}
		sungjuk[i][4] = sungjuk[i][3] / 3.0;
		sungjuk[i][5] = 1;

	}
	for (i = 0; i < CNT - 1; i++)
		for (j = i + 1; j < CNT; j++)
			if (strcmp(name[i], name[j]))
			{
				strcpy(temp_n, name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j], temp_n);
					for (int k = 0; k < 5; k++)
					{
						temp_d = sungjuk[i][k];
						sungjuk[i][k] = sungjuk[j][k];
						sungjuk[j][k] = temp_d;
					}

			}





	for (i = 0; i < CNT - 1; i++)
		for (j = i + 1; j < CNT; j++)
			if (sungjuk[i][3] > sungjuk[j][3])
				sungjuk[j][5]++;
			else if (sungjuk[i][3] < sungjuk[j][3])
				sungjuk[i][5]++;

	printf("\t성명\t국어\t영어\t수학\t총점\t평균\t석차\t\n");
	for (i = 0; i < CNT; i++)
	{
		printf("\t%6s", name[i]);
		for (j = 0; j < 6; j++)
			if(j==4)
				printf("\t%.2f", sungjuk[i][j]);
			else
				printf("\t%.0f", sungjuk[i][j]);
				printf("\t\n");
	}



}

