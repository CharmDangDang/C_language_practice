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
double factorial();  //�Լ� ����
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
	//prog_25();  //�Լ� ȣ��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
		printf("1.����\n");
		printf("2.����\n");
		printf("3.����\n");
		printf("4.������\n");
		printf("5,������\n");
		printf("���ϴ� �޴��� �����Ͻÿ�(1-5): ");
		scanf("%d", &a);
		printf("����. ���� 2���� �Է��Ͻÿ�. :");
		scanf("%d %d", &x, &y);
	
		switch (a)
		{
		case 1:
			printf("���� ��� : %d\n", x + y); break;
		case 2:
			printf("���� ��� : %d\n", x - y); break;
		case 3:
			printf("���� ��� : %d\n", x*y);  break;
		case 4:
			printf("���� ��� : %lf\n", (double)x / y); break;
		case 5:
			printf("���� ��� : %d\n", x%y); break;
		}
		printf("��� �Ͻ÷��� y�� �Է����ּ���. :");
		scanf(" %c", &b);
		if (b == 'y')
			goto here;

	
}
void prog_17()
{
	double a, b,re;
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf", &a);
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf", &b);
	re=f_equal(a, b);
	if(re == 1)
		printf("�� ���� �ٻ������� �����ϴ�. \n ");
	else
		printf("�� ���� �ٸ��ϴ�. \n ");
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
	printf("������ ����ұ��? : ");
	scanf("%d", &a);
	printf("%lf \n",factorial(a));
	
}    //�Լ� ����
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
	printf("ù��° ���� ��ǥ�� �Է��ϻ�(x,y) :");
		scanf("%lf %lf", &a, &b);
	printf("�ι�° ���� ��ǥ�� �Է��ϻ�(x,y) :");
		scanf("%lf %lf", &c, &d);
		printf("�� �� ������ �Ÿ��� %lf �Դϴ�.\n", get_distance(a, b, c, d));
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
	printf("ù��° ������ �Է��ϻ�~ :");
	scanf("%d", &a);
	printf("�ι�° ������ �Է��ϻ�~~ : ");
	scanf("%d", &b);
	if (is_multiple(a, b) == 1)
		printf("%d�� %d�� ����Դϴ�\n", a, b);
	else
		printf("%d�� %d�� ����� ���Դϴ�\n", a, b);
	
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
		printf("����׷����� �׷��帱���?(����� ����) : ");
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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
		scanf("%d", &a);
		c = b_rand();
		if (a == c)
			printf("�¾ҽ��ϴ�.\n");
		else if (a!=c)
			("Ʋ�Ƚ��ϴ�.\n");

		printf("��� �Ͻðڽ��ϱ�?(y �Ǵ� n) :");
		scanf(" %c", &b);
		if (b == 'n')
			break;
	}	
	printf("��\n");

	

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
		printf("sin(%lf)�� ���� %lf \n",a,sin(a));
	}
	double b;
	printf("���ϴ� ���� ������ �Է��Ͻÿ�");
	scanf("%lf", &b);
	printf("%lf�� sin ���� %lf �Դϴ�.\n",b, sin_degree(b));

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
	printf("�ҵ��� �Է��Ͻÿ� (����) :");
	scanf("%d", &a);

	printf("�ҵ漼�� %d �Դϴ�.\n" , get_tax(a));

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
	printf(" ������ �Է��Ͻÿ� . :");
	scanf("%d", &a);
	if (even(a) == 1)
		printf("even()�� ��� : ¦��.\n");
	else
		printf("even()�� ��� : Ȧ��.\n");

	printf("absolute()�� ��� : %d\n", absolute(a));
	if (sign(a) == -1)
		printf("sign()�� ��� : ����.\n");
	else if(sign(a)== 1)
		printf("sign()�� ��� : ���.\n");
	else
		printf("sign()�� ��� : 0�̿�.\n");


}
int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
	//return !(n%2); <-- �̳� ª�� �ű�
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
	printf("�Ǽ��� �Է��Ͻÿ� . : ");
	scanf("%lf", &a);

	round(a);
}
double round(double f)
{
	printf("�ݿø��� ���� %d �Դϴ�.\n", (int)(f + 0.5));
}
void prog_04()
{
	int a;
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &a);

	is_leap(a);
}
int is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d���� 366���Դϴ�.\n", year);
	else
		printf("%d���� 365���Դϴ�.\n", year);
}
void prog_03()
{
	double a;
	printf("���� �������� �Է��Ͻÿ�. ");
	scanf("%lf", &a);

	cal_area(a);
}
double cal_area(double x)
{
	double m;
	m = 3.141592 * x * x;
	printf("���� ������ %lf�Դϴ�.\n", m);
	return 0;
}
void prog_02()
{
	char a;
	printf("���ڸ� �Է��Ͻÿ�. :");
	scanf(" %c", &a);

	check_alpha(a);
}
char check_alpha(char x)
{
	if (x >= 65 && x <= 122)
		printf("%c�� ���ĺ� �����Դϴ�.\n", x);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", x);
	return 0;
}
void prog_01()
{
	double a;
	printf("�Ǽ��� �Է��Ͻÿ� . :");
	scanf("%lf", &a);

	square(a);


}
double square(double x)
{
	printf("�־��� �Ǽ� %lf �� ������ %lf �Դϴ�.\n", x, x*x);
	return 0;
}