#include <stdio.h>
void prog_01();
void prog_02();
void prog_03();
void prog_04();
void prog_05();
void prog_06();
int main(void)
{
	//prog_01(); //�Լ�ȣ��
	//prog_02();
	//prog_03();
	//prog_04();
	//prog_05();
	prog_06();
}
void prog_06()
{
	double w, moonw;
	printf("�� ������ ���� �ȹٷ� �Է��ϼ� :");
	scanf("%lf", &w);
	moonw = w * 0.17;
	printf("�޿��� ���̾�Ʈ ���� ������ : %.2f.\n", moonw);

}
void prog_05()
{
	double x, ans;
	printf("3x^+7x+11 �ص帲 x �Է��ϼ�: ");
	scanf("%lf", &x);
	ans = 3 * (x*x) + (7 * x) + 11;
	printf("���� %.2f�Դϴ�.\n", ans);

}
void prog_04()
{
	double f, c;
	printf("ȭ�� �µ��� �Է����ּ��� : ");
	scanf("%lf", &f);
	c = 5.0 / 9.0 * (f - 32.0);
	printf("���� �µ��� ���� %.2f�Դϴ�.\n", c);
}
void prog_03()
{
	double nopi, mitbyun, area;
	printf("�ﰢ���� ���̸� �Է����ּ��� :");
	scanf("%lf", &nopi);
	printf("�ﰢ���� �ظ��� �Է����ּ��� :");
	scanf("%lf", &mitbyun);
	area = 0.5*nopi*mitbyun;
	printf("�� �ﰢ���� ���̴� %.2f�Դϴ�.\n", area);
}/////////////////////////////////////////////////////////////////
void prog_02()
{
	double mile, meter;
	printf("������ �Է����ּ��� :");
	scanf("%lf", &mile);
	meter = mile * 1.609;
	printf("%.2f������ %.3f�����Դϴ�!", mile, meter);

}////////////////////////////////////////////////////////////////
void prog_01() //�Լ� ����
{
	double x, y, z, sum, ave;
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf, &x");
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf, &y");
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf, &z");
	sum = x + y + z;
	ave = sum / 3.0;
	printf("���� %f�̰�, ����� %f�Դϴ�.\n", sum, ave);

}//////////////////////////////////////////////////////////////////////////////////