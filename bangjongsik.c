#include <stdio.h>
#include <math.h>

int main()
{
	Double a, b, c, pan;
	printf("��� a, ��� b, ��� c�� ������� �Է��Ͻÿ� : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0)
		printf("�������� ���� %f�Դϴ�.\n", -c / b);
	else
	{		
		pan = b * b - 4 * a *c;
		if (pan >= 0)
	{
		printf("�Ǻ����� ���� %f�Դϴ�.\n", (-b+sqrt(pan))/(2*a));
		printf("�Ǻ����� ���� %f�Դϴ�.\n", (-b-sqrt(pan))/(2*a));

	}
	else
	{
		printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
	}

}
	return 0;