#include <stdio.h> 
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
	prog_11();
	
}
void prog_11()
{
	printf("\"ASCII code\",'A','B','C'\n\\t \\a \\n\n");

}
void prog_10()
{
	printf("\a");
	printf("ȭ�簡 �߻��Ͽ����ϴ�.\n");
	printf("\a");


}
void prog_09()
{
	int a='a';
	printf("%c %c %c\n", a + 1, a + 2, a + 3);
	
}
void prog_08()
{
	int a;
	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ� 0~127 : ");
	scanf("%d", &a);
	printf("����:%c �Դϴ�.\n", (char)a);

}
void prog_07()
{

	double a, b, c, d, e;
	printf("�����̶� �ӵ��� �Է��ϼ� : ");
	scanf("%lf %lf", &a, &b);
	c = a * b*b / 2.0;
	printf("����(kg): %.2lf\n�ӵ�(m/s): %.2lf\n�������(J): %.2lf\n",a,b, c);


}
void prog_06()
{
	double a, b;
	a = 3.32e-3;
	b = 9.76e-8;
	printf("%lf\n", a + b);
}
void prog_05()
{
#define pyung 3.3058;
	double a,meter;
	printf("���� �����̽Ű���? :");
	scanf("%lf", &a);
	meter = a * pyung;
	printf("����� ���� %.2lf�����ͳ׿�.\n", meter);
	

}
void prog_04()
{
	double a, b, c, d ;
	printf("������ ���� ���� ���� �ѹ��� �Է��ϼ� : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = a * b*c;
	printf("������ ���Ǵ� %.2lf�Դϴ�.\n", d);
}
void prog_03()
{
	int x, y, tmp;
	x = 10;
	y = 20;
	tmp = x;
	x = y;
	y = tmp;
	printf("x�� %d, y�� %d\n", x, y);
}
void prog_02()
{
	int a;
	printf("16������ �Է��ϼ��� : \n");
	scanf("%x", &a);
	printf("8�����δ� %#o�Դϴ�.\n", a);
	printf("10�����δ� %d�Դϴ�.\n", a);
	printf("16�����δ� %#x�Դϴ�.\n",a);


}
void prog_01()
{


	double TT;
	printf("�Ǽ��� �ϳ� �Է��Ͻÿ�(����) : \n");
	scanf("%lf", &TT);
	printf("�Ǽ��������δ� %lf�Դϴ�\n", TT);
	printf("�����������δ� %e�Դϴ�\n", TT);

}