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
	printf("�󸶳� �ݺ��ұ��? : ");
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
	printf("�ʱ� �ݾ� $%d\n", initial_money);
	printf("��ǥ �ݾ� $%d\n", goal);
	printf("100�� �߿��� %d�� ����\n", wins);
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
		printf("������� : \n");
		scanf("%d", &b);
		c++; //�õ� Ƚ��
		if (a > b)
			printf("���̾�\n");
		else if (a<b)
			printf("�ٿ��̾�\n");
		else break;
	} while (a != b); {
		printf("����� ��������~ ��������\n");
		printf("�õ� Ƚ���� %d\n", c);
	}
}
void prog_14()
{
	unsigned long long  a = 1;
	for (int i = 1; i <= 50; i++)
	{
		printf("a4������ ���� Ƚ�� %d\n", i);
		printf("���� a4������ �β� %d\n", a);
		a *= 2;
	}
	
}
void prog_13()
{
	//a�� ������ �� , 
	int a = 10;
	int i = 1;
	for (i = 1; i <= 7; i++)
	{
		a *= 4;
		printf("%d�ð��� ������ ���� 4��� �����մϴ�.\n", i);
		printf("������ ���� %d�� �����߽��ϴ�.\n", a);
	}
	/*while (i <= 7) {
		printf("%d�ð��� ������ ���� 4��� �����մϴ�.\n", i);
		a *= 4;
		printf("������ ���� %d�� �����߽��ϴ�.\n", a);
		i++;*/
	
}
	void prog_12()
{
	int half;
	double x = 100.0, y = 100.0 , z;
		printf("�ݰ��⸦ �Է��ϼ��� : ");

	scanf("%d", &half);
	while (y < x*0.1) {
		z += half;
		y /= 2.0;
		printf("%.0lf�� �Ŀ� ���� ���� ���� %.2lf", z, y);

	}
	printf("10���� 1 ���Ϸ� �Ǳ���� �ɸ��ð� %.0lf", z);
}
void prog_11()
{
	char a ,b;
	printf("���ڸ� �Է��Ͻÿ� : ");
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
	printf(" ����� ��ǥ�� �����ּ��� (x,y) :");
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0)
		printf("1��и�");
	else if (x < 0 && y>0)
		printf("2��и�");
	else if (x < 0 && y < 0)
		printf("3��и�");
	else printf("4��и���");
}
void prog_09()
{
	double x,y;
	printf("x�� ���� �Է��Ͻÿ� :");
	scanf("%lf", &x);
	if (x <= 0)
		y = x * x - 9 * x + 2;
	else 
		y = 7 * x + 2;
	printf("f(x)�� ���� %lf", y);

	
}
void prog_08()
{
	int a, b;
	printf("���� �ð��� ���̸� �Է����ּ���(����) :");
	scanf("%d %d", &a, &b);
	if (a < 17)
		if (b >= 13 && b <= 64)
			printf("34000��");
		else
			printf("25000��");
	else
		printf("10000��");

	/*if (a < 17 && 65>b>12 )
		printf("����� 34000�� �Դϴ�,\n ");
	else if (a < 17 &&(b<13||b>64))
		printf("����� 25000�� �Դϴ�.\n ");

	else if (a>16)
		printf("����� 10000�� �Դϴ�.\n ");*/

}
void prog_07()
{
	int a, b;
	double c ,d,f;
	printf("ü�߰� Ű�� ������ �Է����ּ��� : ");
	scanf("%d %d", &a, &b);
	c = (b - 100)*0.9;
	if (a > c+5)
		printf("��ü���Դϴ�.\n");
	else if (a<c-5)
		printf("��ü�� �Դϴ�.\n");
	else printf("ǥ���Դϴ�.\n");
}
void prog_06()
{
	
	int a;
	loop:
	printf("���� ����ΰ���? ���ڷ� �Է����ּ���");
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
	{printf("�߸� �Է�");
	goto loop;
	}
	}


}
void prog_05()
{
	int a,b;
	printf("Ű(cm)�� ���̸� �Է��ϼ��� :");
	scanf("%d %d", a, b);
	if (a >= 140 && b >= 10)
		printf("Ÿ�� �����ϴ�.\n");
	else printf("������ ������");

}
void prog_04()
{

	int a, b;
	printf("�����Ͻÿ� (1.���� 2.���� 3.��)");
	scanf("%d", &a);
	srand(time(0));
	b = (rand() % 3 + 1);
	printf("��ǻ�ʹ� %d ����\n", b);
	if (a == b)
		printf("���� �����\n");
	else if (a > b || a == 1, b == 3)
		printf("����ڰ� �̰���\n");
	else printf("��ǻ�Ͱ� �̱�\n");
	


}
void prog_03()
{
	int x, y, z, min;
	printf("���� 3���� �Է����ּ���");
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
	printf(" ������ 2�� �Է��Ͻÿ� :");
	scanf("%d %d", &a, &b);
	if (a%b == 0)
		printf("b�� a�� ����Դϴ�.\n");
	else if (b%a == 0)
		printf("a�� b�� ����Դϴ�.\n");
	else printf("�ƹ��� ����� �ƴմϴ�. \n");

}
void prog_01()
	{
		
		char a;		
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf("%c", &a);
		switch (tolower(a))
		{
		case 'i':
		case 'o':
		case 'u':
		case 'a':
		case 'e':
			printf("�Է��Ͻ� ���ڴ� �����Դϴ�.\n");
				break;
		default:
			printf("�Է��Ͻ� ���ڴ� �����Դϴ�.\n");

		}
	
	
	}