#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define ROWS 20
#define COLS 20


void prog_01();
void prog_02();
void prog_03();
void prog_04();
void prog_05();
void prog_06();
void prog_07();
void prog_08();
void prog_09();
void prog_10();
void prog_11();
void prog_12();
void prog_13();
void prog_14();
void prog_15();
void prog_16();
int array_equal(int a[], int b[], int size);
void array_copy(int a[], int b[], int size);
void max_find(int a[][4], int n);
void vector_add(double a, double b, double c);




int main(void)
{
	//prog_01();
	//prog_02();
	//prog_03();
	//prog_04();
	//prog_05();
	//prog_06();
	//prog_07();
	//prog_08();
	//prog_09();
	//prog_10();
	//prog_11();
	//prog_12();
	//prog_13();
	//prog_14();
	//prog_15();
	prog_16();
}
void prog_16()
{
	char board[ROWS][COLS];
	int xpos = 1, ypos = 1, i, k, j;
	for (i = 0; i < ROWS;i++)
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = '.';
		}
	board[xpos][ypos] = '#';
	board[19][19] = 'g';
	board[15][15] = 'm';
	board[16][17] = 'm';
	printf("상하좌우 wsad(아시죠?) \n");
	while (1)
	{
		system("cls");
		for (i = 0; i < ROWS; i++)
		{
			for (j = 0; j < COLS; j++)
				printf("%c", board[i][j]);
			printf("\n");
		}
		board[xpos][ypos] = '.';
		int ch = _getch();
		if (ch = 'a') ++ypos ;
		else if (ch = 's') ++xpos;
		else if (ch = 'w') --xpos;
		else if (ch = 'd') --ypos;
		if (board[xpos][ypos] == 'g')
		{
			printf("\n\n\n\n금을 찾아어욤!! . 게임 끝이라구! \n");
			break;
		}
		else board[xpos][ypos] = '#';

	}


}
void prog_14()
{
	char a[20][20];
	int i, j;
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			a[i][j] = '.';
			printf("%c ", a[i][j]);
		
		}
	}
	printf("\n");
	srand(time(0));
	int x = 10, y = 10;
	
	for (int k = 0; k < 10; k++) {
		int m = rand() % 8;
		switch (m) 
		{
		case 0:--x; a[x][y] = '*';  break;
		case 1:--x, ++y;   a[x][y] = '*';  break;
		case 2:++y; a[x][y] = '*';  break;
		case 3:++x, ++y; a[x][y] = '*';  break;
		case 4:++x; a[x][y] = '*';  break;
		case 5:++x, --y; a[x][y] = '*';  break;
		case 6:--y; a[x][y] = '*';  break;
		case 7:--x, --y; a[x][y] = '*';  break;

		}

	}
	for (i = 0; i < 20; i++)
		for (j = 0; j < 20; j++)
		{
			printf("%c ", a[i][j]);
		}
	printf("\n");

}
void prog_13()
{
	int binary[32] = { 0 }, i, n;
	printf("입력하시면 2진수로 해드릴게요. :");
	scanf("%d", &n);

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		printf("%d", binary[i]);
		i--;
	}

}
void prog_12()
{
	int a[3][3] = { {1,2,3},{4,5,6,},{7,8,9} };
	int scalar = 2,i,j;
	scalar_mult(a, scalar);
	int b[3][3] = { 0 };
}
scalar_mult(int a[][3], int scalar)
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] *= scalar;
}
transpose(int a[][3], int b[][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			b[i][j] = a[j][i];
}
void prog_11()
{
	int a[2][10], i, j, no;
	srand(time(0));
		for (j = 0; j < 10; j++, a[0][j] = j + 1, a[1][j] = rand() % 5 + 1)
	
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 10; j++)
				{
					printf("%4d ", a[i][j]);
					printf("\n");
				}
		}
		int find;
		printf("고객님, 찾으시는 상품 번호가 ? :");
		scanf("%d", &find);
		
		for (i = 0; i < 10; i++)
		{
			if (find == a[0][i])
				printf("아 여깄네요!! %d로 가셔요\n", a[1][i]);
		}
	
}

void prog_09()
{
	char name[4][10] = { "학번", "시험#1","시험#2","시험#3" };

	int a[5][4];
	int i, j;
	srand(time(0));

	for(i = 0; i < 5; i++)
		for (j = 1; j < 4; j++) {
			a[i][0] = i + 1;
			a[i][j] = rand() % 101;
		}
	int find;
	printf("몇번째 시험에서의 최고,최저점을 찾고 싶나요?(1~3) :");
	scanf("%d", &find);


	max_find(a, find);
	for (i = 0; i < 5; i++) {
		for (j = 1; j < 4; j++) 
			printf("%4d ", a[i][j]);
		
		printf("\n");
	}
}
void max_find(int a[][4],int n)
{
	int p; 
	int max = a[0][n];
	int min = a[0][n];
	for (p = 0; p < 5; p++)
	{
		if (a[p][n] > max)
			max = a[p][n];
		if (a[p][n] < min)
			min = a[p][n];
	}
	printf("%d번째 시험에서의 최고점은 %d 입니다.\n", n, max);	
	printf("%d번째 시험에서의 최저점은 %d 입니다.\n", n, min);






}
void prog_0944()
{
	int array[12][4] = { 0 }, i, j;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		array[i][0] = i + 1;
		for (j = 1; j < 4; j++)
			array[i][j] = rand() % 100;
	}
	for (i = 0; i < 3; i++)
	{
		array[10][i] = array[0][i];
		array[11][i] = array[0][i];
	}
	for(i=0;i<12; i++)
		for (j = 0; j < 4; j++)
		{
			printf("%4d", array[i][j]);
			
		}
	printf("\n");
}
void prog_08()
{
	double a[10];
	double avg, n=0,pp=0;
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 100 + 1;
		n += a[i];
	}

	

		
	avg = n / 10.0;
	
}
void prog_07()
{
	int a[3][10];
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 10; j++)
			if (i == 0)
				a[i][j] = j + 1;
			else if (i == 1)
				a[i][j] = (j + 1)*(j + 1);
			else
				a[i][j] = (j + 1)*(j + 1)*(j + 1);

	int b;
	printf("세제곱을 입력하면 세제곱근을 찾아주지 : ");
	scanf("%d", &b);
	for (j = 0; j < 10; j++)
		if (a[2][j] == b)
			printf("탐색성공 세제곱근은 %d \n", a[0][j]);
		
}
void prog_06()
{
	int a[3][5] = { 0 };
	int rows[3] = { 0 };
	int cols[5] = { 0 };
	int i, j;
	srand(time(0));
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++) {
			a[i][j] = rand() % 100;
			rows[i] += a[i][j];
			cols[j] += a[i][j];

		}

	for (i = 0; i < 3; i++)
		printf("%d행의 합계 : %d\n", i, rows[i]);
	for (j = 0; j < 5; j++)
		printf("%d열의 합계 : %d\n", j, cols[j]);

}		
void prog_05()
{
	int bindo[10] = { 0 };
	srand(time(0));
	int maegae;
	for (int i = 0; i < 100; i++) {
		++bindo[rand() % 10];
	}
		for (maegae = 0; maegae < 10; maegae++)
			printf("%3d %3d \n", maegae + 1, bindo[maegae]);
		
		
	
}
void prog_04()
{
	int a[10] = { 1,2,3 };
	int b[10] = { 0 };
	array_copy(a, b, 10);

	for (int k = 0; k < 10; k++)
		printf("%d ", b[k]);
	printf("\n");
}
void array_copy(int a[], int b[], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
		b[i] = a[i];
}
void prog_03()
{
	int a[10] = { 1 , 2 ,3 };
	int b[10] = { 0 };
	int il, lil, c = array_equal(a, b, 10);
	for (il = 0; il < 2; il++)
		for (lil = 0; lil < 10; lil++) 
			if (il == 0) {
				printf("%d ", a[lil]);
			}
			else if (il == 1) {
				printf("%d ", b[lil]);
			}
		printf("\n");	
	if (c == 1)
		printf("두 개의 배열은 같음. \n");
	else
		printf("두 개의 배열은 달라요 ㅡㅡ \n");
}
int array_equal(int a[], int b[], int size)
{
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		if (a[i] != b[i])
			return 0;
	return 1;
		
			
			//darum += 0;
	}
	//if (dongil > 0)
		
	//else if (darum == 0)
		
}
void prog_02()
{
	int a[10], i , max, min ;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		a[i] = rand();
	  }
	for (i = 0; i < 10; i++){
		if (a[i] > a[i + 1])
			max = a[i];
		else if (a[i] < a[i + 1])
			min = a[i];
	}
	printf("최대값은 %d \n",max);
	printf("최소값은 %d \n",min);

}
void prog_01()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i;

	for (i = 0; i < 12; i++)
	 printf("%d월은 %d일까지 있습니다. \n", i + 1, days[i]);
	

	
}