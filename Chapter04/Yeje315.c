#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
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
void prog_17();
void prog_18();
void prog_19();
void prog_20();
void prog_21();
void prog_22();
void prog_23();
void prog_24();
void prog_25();
void prog_26();


//int main(void)
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
	//prog_16();
	//prog_17();
	//prog_18();
	//prog_19();
	//prog_20();
	//prog_21();
	prog_22();
	//prog_23();
	//prog_24();
	//prog_25();
	//prog_26();
}
void disp_car(int car_number, int distance)
{
	int i;

	printf("CAR #%d:", car_number);
	for (i = 0; i < distance / 10; i++)
		printf("*");
	printf("\n");
}
	int i;
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned)time(NULL));
	for (i = 0; i < 6; i++) {
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		printf("--------------------\n");
		_getch();
	}
	return 0;
}
void prog_22()
{
	int lotto[6], i,tm, j,c[6];
	srand(time(0));
	for (i = 0; i < 6; i++)
	{
		
		lotto[i] = rand() % 45 + 1;

		for (j = 0; j < i; j++)
			if (lotto[i] == lotto[j])
			{
				i--;
				break;
			}
	}
	for (i = 0; i < 5; i++)
	{
		for(j=i+1;j<6;j++)
			if (lotto[i] == lotto[j])
			{
				tm = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = tm;
			}
	}

	for (i = 0; i < 6; i++)
		printf("%2d ", lotto[i]);
	printf("\n");

}
void prog_21()
{
	int a, b, c, d, e, f;
	here:
	c = 0;
	printf("소수인지 궁금하면 j를 입력하세요. :");
	scanf("%d", &a);
	if (a == 'j')
		d = rand() % 200000000 + 1;
	for (b = 1; b <= d; b++)
			if (d%b == 0)
				c++;
			if (c == 2)
				printf("%d는 소수입니다.\n", d);
			else
				printf("%d는 소수가 아닙니다.\n",d);
			
			goto here;

}
void prog_20()
{
	double a, b;


	
	printf("");
	
	
}
void prog_19()
{
	int i, j, l;
	for (i = 0; i < 9; i++) {

		if (i <= 4)
			l = i;
		else l = 8 - i;

		for (j = 0; j <= l; j++)

			printf("*");
		if (i <= 4)
			l = 2*(4 - i);

		else
			l =2*(i - 4);
		for (j = 0; j < l; j++)
			printf(" ");
		if (i <= 4)
			l = i;

		else l = 8 - i;
		for (j = 0; j <= l; j++)
			printf("*");

		printf("\n");
	}
}
void prog_18()
{
	int i, j, l;

	for (i = 0; i < 9; i++)
	{
		if (i <= 4)
			l = 4 - i;
		else
			l = i - 4;
		for (j = 0; j < l; j++)
			printf(" ");
		if (i <= 4)
			l = 2 * i + 1;

		else l = 2 * (8 - i) + 1;
		for (j = 0; j < l; j++)
			printf("*");

		printf("\n");
	}
	for (i = 0; i < 9; i++)
	{
		if(i <= 4)
			l = 4 - i;
		else
			l = i - 4;
		for (j = 0; j < l; j++)
			printf(" ");
		if (i <= 4)
			l = 2 * i + 1;

		else l = 2 * (8 - i) + 1;
		for (j = 0; j < l; j++)
			printf("*");

		printf("\n");
	}
}
void prog_17()
{
	int i, j, l;
	for (i = 0; i < 9; i++)
	{if (i <= 4)
			l = i;
		else l = 8 - i;
	for (j = 0; j < l; j++)
		printf(" ");

	if (i <= 4)
		l = 2 * (4 - i) + 1;
	else
		l = 2 * (i - 4) + 1;

	for (j = 0; j < l; j++)
		printf("*");
	printf("\n");
}

}
void prog_16()
{
	int i, j, l;

	for (i = 0; i < 9; i++)
	{
		if (i <= 4)
			l = 4 - i;
		else
			l = i - 4;
		for (j = 0; j < l; j++)
			printf(" ");
			if (i <= 4)
				l = i;

			else l = 8 - i;
		for (j = 0; j <= l; j++)
			printf("*");

			printf("\n");
		
	}
	
}
void prog_15()
{
	int i, j,l;
	for (i = 0; i < 9; i++) {
		if (i <= 4)
			l = i;
		else l = 8 - i;
		for (j = 0; j <= l; j++)
		{
			printf("*");
			printf("\n");
		}
	}
}
void prog_14()
{
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j <(4- i); j++)
			printf(" ");
		for (j = 0; j < (2 *i) +1; j++)
			printf("*");
		printf("\n");
			
	}
		/*int i, j;
		for (i = 0; i < 5; i++) {
			for (j = 0; j <= i; j++)
				printf("*");
			Sleep(500);
			for (j = 0; j < 2 * (4 - i); j++)
				printf(" ");
			Sleep(500);


			for (j = 0; j <= i; j++)
				printf("*");
			printf("\n");
			Sleep(500);
		}*/


	}
void prog_13()
{
	int a, b, f, d, h=1                                                                                         , s;
	printf("n과 r의 값 입력하셈 : ");
		scanf("%d %d", &a, &b);
		for (f = a; f >= (a - b - 1); f--)
		h=h+a*f;
		printf("순열의 값은 %d", h);
}
void prog_12()
{
	int a=0, b=1, re=0,j,c;
	printf("몇번째 항까지 구할깝쇼? :");
	scanf("%d", &j);
	//while (re <= j)
	{
		printf(" %d", a);
		c = a + b;
		a = b;
		b = c;
		
		re++;
	}
	
}
void prog_11()
{
int a, n, result=0;
	printf("n의 값을 입력하시오 : ");
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		result += a * a;
	}
	printf("결과값은 %d\n", result);
}
void prog_10()
{
	double a, result;
		int b, c;
	printf("실수의 값을 입력하요 : \n");
	scanf("%lf", &a);
	printf("몇번 제곱할지 정수로 입력해 : \n");
	scanf("%d", &b);
	result = a;
	for (c = 1; c < b; c++)
		result*=a;
	printf("%lf", result);


}
void prog_09()
{
	int i = 1;
	int sum = 0;
	while (1)
	{
		sum += i;
		i++;
		if (sum > 10000)
			break;
		
	}
	i= i - 1 ;  
	sum = sum- i;
		
     
	printf("1부터 %d까지의 합이 %d입니다.\n",i-1,sum);
}
void prog_08()
{
	int a, b;
	printf("막대의 높이(종료: -1) :");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		printf("*");
	}
	printf("\n");
}
void prog_07()
{
	int a, b, c = 0;
	for (a = 2; a < 100; a++)
	{
		c = 0;
		for (b = 1; b < a; b++)
			if (a % b == 0)
				c++;
		if(c==2)
			printf(" %d ", a);
	}
	printf("\n");
}
void prog_06()
{
	int a, b, d=1;
	char c;
	do
	{
		printf("***************************\n");
		printf("A---- Add\n");
		printf("S---- Subtract\n");
		printf("M---- Multiply\n");
		printf("Quit\n");
		printf("***************************\n");
		printf("연산을 선택하시오 :\n");	
		scanf(" %c", &c);
		if (c == 'Q')
			break;
		printf("두 수를 입력하시오 :\n");
		scanf("%d %d", &a, &b);
		switch (c)
		{
		case'A':
			printf("%d\n", a + b);
			break;
		case'S':
			printf("%d\n", a - b);
			break;
		case'M':
			printf("%d\n", a*b);
			break;
		default: printf("연산자를 잘못 입력했습니다. \n");
			


		}

	} while (1);
	
}
void prog_05()
{
	int a, b, c;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	for (a = 0; a < 5; a++)
	{
		for (b = 1; b < a; b++)
			printf("%d\n", b);

	
	}
}//못품
void prog_04()
{
	int a, b, c;
	for (a = 0; a < 7; a++)
	{ 
		for (b = 0; b <a; b++)
			printf(" ");
		for (b = 0; b <=6-a; b++)
			printf("*");
		printf("\n");
	}

}//못품
void prog_03()
{
	int a, b;
	printf("정수를 입력하세욤 : ");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		if (a%b == 0)
			printf("  %d  ", b);

	}
}
void prog_02()
{
	int i, k;
	for (i = 1; i <= 100; i += 2)
	{
		if (i % 3 == 0)
			k += i;
	}
	printf("%d", k);
}
void prog_01()
{
	int a, b; 
	printf("카운터의 초기 값을 입력하시오 : ");
	scanf("%d", &a);
	for (a; a > 0; a--)
	{
		printf("%d", a);
		Sleep(1000);
	}
	printf("\a");
}