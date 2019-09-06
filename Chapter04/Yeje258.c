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
	//prog_16();
	//prog_17();
	//prog_18();
	//prog_19();
	prog_20();
	// prog_21();
	//prog_22();
	//prog_23();
	//prog_24();
	//prog_25();
	//prog_26();

}
void prog_20()
{
	double a=4.0 ,b=1.0, c= 0, d;
	int loop_count;
	printf("얼마나 반복할까요? : ");
	scanf("%d", &loop_count);
	while (loop_count > 0)
	{
		c += a / b;
		a *= -1.0;
		b += 2;
		loop_count--;
	}
	printf("%lf\n", c);
}
void prog_19()
{
	HDC n1 = GetWindowDC(GetForegroundWindow());
	int i;
	for (i = 0; i < 100; i++) {
		int x = rand() % 500;
		int y = rand() % 500;
		int w = rand() % 500;
		int h = rand() % 500;
		Ellipse(n1, x, y, x + w, y + h);
		Sleep(100);
	}
	return 0;
	}
void prog_18()
{
	int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;
	srand(time(0));
	for (i = 0; i < 100; i++)
	{
		int cash = initial_money;
		while (cash > 0 && cash < goal) {
			if (((double)rand() / RAND_MAX) < 0.6)cash++;
			else cash--;
		}
		if (cash == goal) wins++;
	}
	printf("초기 금액 $%d\n", initial_money);
	printf("목표 금액 $%d\n", goal);
	printf("100번 중에서 %d번 성공\n", wins);
	return 0;
}
void prog_17()
{
	/*int a, b;
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;

	    if(	a+b==6*/
	int i, j, k;
	for (i = 1; i <= 6; i++)
		for (j = 0; j <= 6; j++)
			for (k = 0; k <= 6; k++)
				if (i + j + k == 10)
					printf("%d,%d,%d", i, j, k);
}
void prog_16()
{
	int i, j;
	for(i=0;i<5;i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");

		for (j = 0; j <= 4 - i; j++)
			printf("*");
		    printf("\n");
			
	
	}
}
void prog_15()
{
	int a, b, c=0;
	srand(time(0));
	a = rand()%100 +1;
	do {
		printf("맞춰봐ㅋ : \n");
		scanf("%d", &b);
		c++; //시도 횟수
		if (a > b)
			printf("업이야\n");
		else if (a<b)
			printf("다운이야\n");
		else break;
	} while (a != b); {
		printf("맞췄네 오오오올~ ㅊㅋㅊㅋ\n");
		printf("시도 횟수는 %d\n", c);
	}
}
void prog_14()
{
	unsigned long long  a = 1;
	for (int i = 1; i <= 50; i++)
	{
		printf("a4용지를 접은 횟수 %d\n", i);
		printf("현재 a4용지의 두께 %d\n", a);
		a *= 2;
	}
	
}
void prog_13()
{
	//a는 세균의 수 , 
	int a = 10;
	int i = 1;
	for (i = 1; i <= 7; i++)
	{
		a *= 4;
		printf("%d시간뒤 세균의 수가 4배로 증가합니다.\n", i);
		printf("세균의 수가 %d로 증가했습니다.\n", a);
	}
	/*while (i <= 7) {
		printf("%d시간뒤 세균의 수가 4배로 증가합니다.\n", i);
		a *= 4;
		printf("세균의 수가 %d로 증가했습니다.\n", a);
		i++;*/
	
}
	void prog_12()
{
	int half;
	double x = 100.0, y = 100.0 , z;
		printf("반감기를 입력하세요 : ");

	scanf("%d", &half);
	while (y < x*0.1) {
		z += half;
		y /= 2.0;
		printf("%.0lf년 후에 남은 방사능 량은 %.2lf", z, y);

	}
	printf("10분의 1 이하로 되기까지 걸린시간 %.0lf", z);
}
void prog_11()
{
	char a ,b;
	printf("문자를 입력하시오 : ");
	scanf("%c", &a);
	switch /*toupper*/(a)
	{
	case 'r':
	case 'R': printf("Rectangle\n"); break;
	case 't':
	case 'T': printf("Triangle\n"); break;
	case 'c':
	case 'C': printf("Circle\n"); break;		
	default: printf("Unknown");
	}
}
void prog_10()
{
	int x, y;
	printf(" 당신의 좌표를 적어주세요 (x,y) :");
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0)
		printf("1사분면");
	else if (x < 0 && y>0)
		printf("2사분면");
	else if (x < 0 && y < 0)
		printf("3사분면");
	else printf("4사분면임");
}
void prog_09()
{
	double x,y;
	printf("x의 값을 입력하시오 :");
	scanf("%lf", &x);
	if (x <= 0)
		y = x * x - 9 * x + 2;
	else 
		y = 7 * x + 2;
	printf("f(x)의 값은 %lf", y);

	
}
void prog_08()
{
	int a, b;
	printf("현재 시간과 나이를 입력해주세요(정수) :");
	scanf("%d %d", &a, &b);
	if (a < 17)
		if (b >= 13 && b <= 64)
			printf("34000원");
		else
			printf("25000원");
	else
		printf("10000원");

	/*if (a < 17 && 65>b>12 )
		printf("요금은 34000원 입니다,\n ");
	else if (a < 17 &&(b<13||b>64))
		printf("요금은 25000원 입니다.\n ");

	else if (a>16)
		printf("요금은 10000원 입니다.\n ");*/

}
void prog_07()
{
	int a, b;
	double c ,d,f;
	printf("체중과 키를 정수로 입력해주세요 : ");
	scanf("%d %d", &a, &b);
	c = (b - 100)*0.9;
	if (a > c+5)
		printf("과체중입니다.\n");
	else if (a<c-5)
		printf("저체중 입니다.\n");
	else printf("표준입니다.\n");
}
void prog_06()
{
	
	int a;
	loop:
	printf("지금 몇월인가요? 숫자로 입력해주세요");
	scanf("%d", a);
	switch (a)
	{
	case 1: printf("Jan"); break;
	case 2: printf("Feb"); break;
	case 3: printf("Mar"); break;
	case 4: printf("Apr"); break;
	case 5: printf("May"); break;
	case 6: printf("Jun"); break;
	case 7: printf("Jul"); break;
	case 8: printf("Aug"); break;
	case 9: printf("Sep"); break;
	case 10: printf("Oct"); break;
	case 11: printf("Nov"); break;
	case 12: printf("Dec"); break;
	default :
	{printf("잘못 입력");
	goto loop;
	}
	}


}
void prog_05()
{
	int a,b;
	printf("키(cm)와 나이를 입력하세용 :");
	scanf("%d %d", a, b);
	if (a >= 140 && b >= 10)
		printf("타도 좋습니다.\n");
	else printf("다음에 오세요");

}
void prog_04()
{

	int a, b;
	printf("선택하시오 (1.가위 2.바위 3.보)");
	scanf("%d", &a);
	srand(time(0));
	b = (rand() % 3 + 1);
	printf("컴퓨터는 %d 선택\n", b);
	if (a == b)
		printf("서로 비겼음\n");
	else if (a > b || a == 1, b == 3)
		printf("사용자가 이겼음\n");
	else printf("컴퓨터가 이김\n");
	


}
void prog_03()
{
	int x, y, z, min;
	printf("정수 3개를 입력해주세욤");
	scanf("%d %d %d", &x, &y, &z);
	if (x < y&&x < z)
		min = x;
	else if (y < x&&y < z)
		min = y;
	else min = z;


}
void prog_02()
{
	int a, b;
	printf(" 정수를 2개 입력하시오 :");
	scanf("%d %d", &a, &b);
	if (a%b == 0)
		printf("b는 a의 약수입니다.\n");
	else if (b%a == 0)
		printf("a는 b의 약수입니다.\n");
	else printf("아무도 약수가 아닙니다. \n");

}
void prog_01()
	{
		
		char a;		
		printf("문자를 입력하시오 : ");
		scanf("%c", &a);
		switch (tolower(a))
		{
		case 'i':
		case 'o':
		case 'u':
		case 'a':
		case 'e':
			printf("입력하신 문자는 모음입니다.\n");
				break;
		default:
			printf("입력하신 문자는 자음입니다.\n");

		}
	
	
	}