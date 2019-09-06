#include <stdio.h>
#include <math.h>

int main()
{
	Double a, b, c, pan;
	printf("계수 a, 계수 b, 계수 c를 차레대로 입력하시오 : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0)
		printf("방정식의 근은 %f입니다.\n", -c / b);
	else
	{		
		pan = b * b - 4 * a *c;
		if (pan >= 0)
	{
		printf("판별식의 근은 %f입니다.\n", (-b+sqrt(pan))/(2*a));
		printf("판별식의 근은 %f입니다.\n", (-b-sqrt(pan))/(2*a));

	}
	else
	{
		printf("실근이 존재하지 않습니다.\n");
	}

}
	return 0;