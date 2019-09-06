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
double recursive11();
int get_random();


int main(void)
{
	//prog_01();
	//prog_02();
	//prog_03();
	prog_04();
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
	//prog_25();
	//prog_26()
}
void prog_12()
{
	//int a;
	//printf("몇 번째의 피보나찌 수열을 원하는가. : ");
	//scanf("%d", &a);
	for (int i = 0; i < 10; i++)
		printf("fib(%d) = %d\n", i, fib(i));
	
}
int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
	
}
void prog_11()
{
	int a, b;
	printf("이항계수 계산해드림 입력하셈. : ");
	scanf("%d %d", &a, &b);
	printf("%d\n", binocient(a, b));
}
int binocient(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else if (n>k&&k>0)
		return binocient(n - 1, k - 1) + binocient(n - 1, k);
}
void prog_10()
{
	double a;
	printf("실수를 입력하세용. : ");
	scanf("%lf", &a);
	printf("%lf",recursive11(a));

}
double recursive11(int n)
{
	if (n < 1.0)
		return 0.0;
	else
		return 1.0 / n + recursive11(n - 1.0);
}
void prog_09()
{
	int a;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	printf("자리수의 합: %d\n",get_digit_sum(a));
}
int get_digit_sum(int n)
{
	if (n < 1)
		return 0;
	else
		return (n % 10) + get_digit_sum(n / 10);
}
void prog_08()
{
	int jarisu = 0;
	int a;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	jarisu = Jarisem(a);
	printf("자리수의 개수 : %d\n", jarisu);
}	
int Jarisem(int x)
{
	static int jarisu; 
	
	if (x < 1)
		return jarisu;
	else
	{
		Jarisem(x / 10);
		jarisu++;
	}
	return jarisu;
}
void prog_07()
{
	int a;
	printf("정수를 입력하세욤. : ");
	scanf("%d", &a);
	show_digit(a);
	printf("\n");
}
int show_digit(int x)
{

	
	if (x < 1)
		printf("시작 : ");
	else {
		show_digit(x / 10);
		printf(" %d ", x % 10);
	}
}
void prog_06()
{
	int a, b;
	printf("밑수와 지수를 입력해주세욤.");
	scanf("%d %d", &a, &b);
	printf("%d ^ %d = %d\n", a, b, power(a, b));
}
int power(int base, int power_raised)
{
	if (power_raised < 1)
		return 1;
	else
	 return	 base * power(base, power_raised - 1);
}
void prog_05()
{
	int num;
	printf("정수를 입력하시오. : ");
	scanf("%d", &num);
	printf("1부터 %d까지의 합은=%d\n", num, sumsum(num));
}
int sumsum(int n)
{
	if (n < 1)
		return 0;
	else	
		return n + sumsum(n - 1);
}
void prog_04()
{
	printf("초기화 실행. 삐빅\n");
	for (int i = 0; i < 3; i++) {
	get_random();
	}
}
int get_random()
{
	static int inited;
	
	if (inited == 0)
	{
		srand(time(0));
		inited = 1;
	}
	else
		printf("%d\n", rand());
	
}
void prog_03()
{
	static int pp = 0;
	int ap = 1;
	int a;
	do {
		int n;
		printf("비밀번호를 입력하시오.(4자리) : ");
		scanf("%d", &n);
		a = check(n);
		if (a == 0)
			pp++;
		if (pp >= 3)
			ap=0;
	} while (ap);	
	printf("로그인 시도횟수 초과.\n");
}
int check(int n)
{
	static int password = 1345;
	if (n == password)
		return 1;
	else 
		return 0;
}
void prog_02()
{
	static int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	// 0 안해도 스태틱만 붙이면 다 0으로 초기화 됨 걱정 ㄴㄴ;
	for (int i = 0; i < 100; i++) {
	int h=get_dice_face();
	switch (h) {
	case 1: a++; break;
	case 2: b++; break;
	case 3: c++; break;
	case 4: d++; break;
	case 5: e++; break;
	case 6: f++; break;
	}
	}
	printf("1-> %d\n", a);
	printf("2-> %d\n", b);
	printf("3-> %d\n", c);
	printf("4-> %d\n", d);
	printf("5-> %d\n", e);
	printf("6-> %d\n", f);

}
int get_dice_face()
{
	int a = rand() % 6 + 1;
	return a;
}
void prog_01()
{
	static int p = 0;
	static int m = 0;
	static int mul = 0;
	static int d = 0;
	static int nam = 0;

	int n1, n2;
	char f;
	printf("연산을 입력하시오 : ");
	scanf("%d %c %d", &n1, &f, &n2);
	switch (f) {
	case '+':
	{   
	p++;
	printf("덧셈은 %d회 호출되었습니다.\n",p);
	printf("%d %c %d = %d 입니다.\n", n1, f, n2, n1+n2);
	} break;
	case '-':
	{
		m++;
		printf("덧셈은 %d회 호출되었습니다.\n",m);
		printf("%d %c %d = %d 입니다.\n", n1, f, n2, n1-n2);
	}break;
	case '*':
	{
		mul++;
		printf("덧셈은 %d회 호출되었습니다.\n",mul);
		printf("%d %c %d = %d 입니다.\n", n1, f, n2, n1*n2);
	}break;
	case '/':
	{
		d++;
		printf("덧셈은 %d회 호출되었습니다.\n",d);
		printf("%d %c %d = %d 입니다.\n", n1, f, n2, n1/n2);
	}break;
	case '%':
	{
		nam++;
		printf("덧셈은 %d회 호출되었습니다.\n",nam);
		printf("%d %c %d = %d 입니다.\n", n1, f, n2, n1%n2);
	}break;
	

	}
}