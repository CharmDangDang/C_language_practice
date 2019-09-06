#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define min(a,b) (((a<b)?(a):(b)))
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
double square();
char check_alpha();
double cal_area();
int is_leap();
double round();
int even();
int absolute();
int sign();
int get_tax();
double sin_degree();
int b_rand();
double f_rand();
void print_value();
int is_multiple();
double get_distance();
int is_prime();
double factorial();  //함수 선언
double f_equal();
double factori();

int main()
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
	//prog_22();
	//prog_23();
	//prog_24();
	//prog_25();  //함수 호출!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//prog_26();
}


void sub() {
		static int scount;
		int acount = 0;
		printf("scount = %d\t", scount);
		printf("acount = %d\n", acount);
		scount++;
		acount++;
	

	sub();
	sub();
	sub();
	return 0;

}
void prog_18()
{
	int a, x, y;
	char b;
	
		here:
		printf("=======================\n");
		printf("MENU\n");
		printf("=======================\n");
		printf("1.덧셈\n");
		printf("2.뺄셈\n");
		printf("3.곱셈\n");
		printf("4.나눗셈\n");
		printf("5,나머지\n");
		printf("원하는 메뉴를 선택하시오(1-5): ");
		scanf("%d", &a);
		printf("좋소. 정수 2개를 입력하시오. :");
		scanf("%d %d", &x, &y);
	
		switch (a)
		{
		case 1:
			printf("연산 결과 : %d\n", x + y); break;
		case 2:
			printf("연산 결과 : %d\n", x - y); break;
		case 3:
			printf("연산 결과 : %d\n", x*y);  break;
		case 4:
			printf("연산 결과 : %lf\n", (double)x / y); break;
		case 5:
			printf("연산 결과 : %d\n", x%y); break;
		}
		printf("계속 하시려면 y를 입력해주세요. :");
		scanf(" %c", &b);
		if (b == 'y')
			goto here;

	
}
void prog_17()
{
	double a, b,re;
	printf("실수를 입력하시오 :");
	scanf("%lf", &a);
	printf("실수를 입력하시오 :");
	scanf("%lf", &b);
	re=f_equal(a, b);
	if(re == 1)
		printf("두 수는 근사적으로 같습니다. \n ");
	else
		printf("두 수는 다릅니당. \n ");
}
double f_equal(a, b)
{
	double x, a1, b1;
	x = (x= a - b) > 0 ? x * 1.0 : x * -1.0;
	a1 = a > 0 ? a * 1.0 : a * -1.0;
	b1 = b > 0 ? b * 1.0 : b * -1.0;

	if (x / min(a1, b1) < 0.000001)
		return 1;
	else
		return 0;




}
void prog_16()
{
	int a;
	printf("어디까지 계산할까용? : ");
	scanf("%d", &a);
	printf("%lf \n",factorial(a));
	
}    //함수 정의
double factorial(int n)
{
	double result = 1.0;
	for (int i = 1; i <= n; i++)
		result += (1.0/factori(i));
	return result;
}
double factori(int x)
{
	double result = 1.0 ;
	for (int i = 1; i <= x; i+=1)
		result *= i;
	return result;
}
void prog_15()
{
	int  r=0,b;
	for (b = 2; b <= 100; b++) {
		r = is_prime(b);
		if (r == 1)
			printf("%d ", b);
	}
	printf("\n");
}
int is_prime(int i)
{
	int j, cnt=0;

	for (j = 1; j <= i; j++)
		if (i%j == 0)
			cnt++;
		
	return (cnt == 2);					
}
void prog_14()
{

	double a, b, c, d;
	printf("첫번째 점의 좌표를 입력하삼(x,y) :");
		scanf("%lf %lf", &a, &b);
	printf("두번째 점의 좌표를 입력하삼(x,y) :");
		scanf("%lf %lf", &c, &d);
		printf("두 점 사이의 거리는 %lf 입니다.\n", get_distance(a, b, c, d));
}
double get_distance(double x1, double y1, double x2, double y2)
{
	double d;
	d = sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)));
	return d;
}
void prog_13()
{
	int a, b;
	printf("첫번째 정수를 입력하삼~ :");
	scanf("%d", &a);
	printf("두번째 정수를 입력하삼~~ : ");
	scanf("%d", &b);
	if (is_multiple(a, b) == 1)
		printf("%d는 %d의 배수입니다\n", a, b);
	else
		printf("%d는 %d의 배수가 아입니다\n", a, b);
	
}
int is_multiple(int n, int m)
{
	if (n%m == 0)
		return 1;
	else
		return 0;
}
void prog_12()
{
	int q;
	while (1)
	{
		printf("막대그래프를 그려드릴까욤?(종료는 음수) : ");
		scanf("%d", &q);
		if (q > 0)
			print_value(q);
		else if (q < 0)
			break;
	}
}
void print_value(int n)
{
	int m;
	for (m = 0; m < n; m++)
		printf("*");
	printf("\n");
	
}
void prog_11()
{
	for(int a = 0; a<5; a++)
	printf("%lf ", f_rand());
}
double f_rand()
{
	double a;
	srand(time(0));
	a = rand() / (double)32767;
	return a;
}
void prog_10()
{
	int a,c,d=1;
	char b;
	srand(time(0));
	 
	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf("%d", &a);
		c = b_rand();
		if (a == c)
			printf("맞았습니다.\n");
		else if (a!=c)
			("틀렸습니당.\n");

		printf("계속 하시겠습니까?(y 또는 n) :");
		scanf(" %c", &b);
		if (b == 'n')
			break;
	}	
	printf("끝\n");

	

}
void prog_09()
{
	int a = 0;
	for (a = 0; a < 5; a++)
	{
		printf("%d ",b_rand());
	}
}
int b_rand()
{
	
	 
	return rand() % 2;
}
void prog_08()
{
	double a = 0.0;
	for (a = 0.0; a < 181.0; a += 10.0)
	{
		printf("sin(%lf)의 값은 %lf \n",a,sin(a));
	}
	double b;
	printf("원하는 값의 각도를 입력하시오");
	scanf("%lf", &b);
	printf("%lf의 sin 값은 %lf 입니다.\n",b, sin_degree(b));

}
double sin_degree(double degree)
{
	double result;
	result = (3.141592 * degree) / 180.0;
	return result;
}
void prog_07()
{
	int a;
	printf("소득을 입력하시오 (만원) :");
	scanf("%d", &a);

	printf("소득세는 %d 입니다.\n" , get_tax(a));

}
int get_tax(int income)
{
	int a=0, b;
	if (income > 1000)
	{
		a = (income - 1000)*0.1;
		b = 1000 * 0.08;
		return a + b;
	}
	else if (income <= 1000)
		return income * 0.08;

	
}
void prog_06()
{
	int a;
	printf(" 정수를 입력하시오 . :");
	scanf("%d", &a);
	if (even(a) == 1)
		printf("even()의 결과 : 짝수.\n");
	else
		printf("even()의 결과 : 홀수.\n");

	printf("absolute()의 결과 : %d\n", absolute(a));
	if (sign(a) == -1)
		printf("sign()의 결과 : 음수.\n");
	else if(sign(a)== 1)
		printf("sign()의 결과 : 양수.\n");
	else
		printf("sign()의 결과 : 0이오.\n");


}
int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
	//return !(n%2); <-- 겁나 짧다 신기
}
int absolute(int n)
{
	return n = (n < 0) ? n * -1 : n;

}
int sign(int n)
{
	return n = (n < 0) ? -1 :
		(n > 0) ? 1 : 0;
}
void prog_05()
{	
	double a;
	printf("실수를 입력하시오 . : ");
	scanf("%lf", &a);

	round(a);
}
double round(double f)
{
	printf("반올림한 값은 %d 입니다.\n", (int)(f + 0.5));
}
void prog_04()
{
	int a;
	printf("연도를 입력하시오.");
	scanf("%d", &a);

	is_leap(a);
}
int is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d년은 366일입니다.\n", year);
	else
		printf("%d년은 365일입니다.\n", year);
}
void prog_03()
{
	double a;
	printf("원의 반지름을 입력하시오. ");
	scanf("%lf", &a);

	cal_area(a);
}
double cal_area(double x)
{
	double m;
	m = 3.141592 * x * x;
	printf("원의 면적은 %lf입니다.\n", m);
	return 0;
}
void prog_02()
{
	char a;
	printf("문자를 입력하시오. :");
	scanf(" %c", &a);

	check_alpha(a);
}
char check_alpha(char x)
{
	if (x >= 65 && x <= 122)
		printf("%c는 알파벳 문자입니다.\n", x);
	else
		printf("%c는 알파벳 문자가 아닙니더.\n", x);
	return 0;
}
void prog_01()
{
	double a;
	printf("실수를 입력하시오 . :");
	scanf("%lf", &a);

	square(a);


}
double square(double x)
{
	printf("주어진 실수 %lf 의 제곱은 %lf 입니다.\n", x, x*x);
	return 0;
}