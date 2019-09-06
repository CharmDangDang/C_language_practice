#include <stdio.h>
void prog_01();
void prog_02();
void prog_03();
void prog_04();
void prog_05();
void prog_06();
int main(void)
{
	//prog_01(); //함수호출
	//prog_02();
	//prog_03();
	//prog_04();
	//prog_05();
	prog_06();
}
void prog_06()
{
	double w, moonw;
	printf("님 몸무게 몇임 똑바로 입력하셈 :");
	scanf("%lf", &w);
	moonw = w * 0.17;
	printf("달에서 다이어트 성공 몸무게 : %.2f.\n", moonw);

}
void prog_05()
{
	double x, ans;
	printf("3x^+7x+11 해드림 x 입력하셈: ");
	scanf("%lf", &x);
	ans = 3 * (x*x) + (7 * x) + 11;
	printf("답은 %.2f입니당.\n", ans);

}
void prog_04()
{
	double f, c;
	printf("화씨 온도를 입력해주세용 : ");
	scanf("%lf", &f);
	c = 5.0 / 9.0 * (f - 32.0);
	printf("현재 온도는 섭씨 %.2f입니다.\n", c);
}
void prog_03()
{
	double nopi, mitbyun, area;
	printf("삼각형의 높이를 입력해주세용 :");
	scanf("%lf", &nopi);
	printf("삼각형의 밑면을 입력해주세용 :");
	scanf("%lf", &mitbyun);
	area = 0.5*nopi*mitbyun;
	printf("그 삼각형의 넓이는 %.2f입니당.\n", area);
}/////////////////////////////////////////////////////////////////
void prog_02()
{
	double mile, meter;
	printf("마일을 입력해주세용 :");
	scanf("%lf", &mile);
	meter = mile * 1.609;
	printf("%.2f마일은 %.3f미터입니당!", mile, meter);

}////////////////////////////////////////////////////////////////
void prog_01() //함수 정의
{
	double x, y, z, sum, ave;
	printf("실수를 입력하시오 :");
	scanf("%lf, &x");
	printf("실수를 입력하시오 :");
	scanf("%lf, &y");
	printf("실수를 입력하시오 :");
	scanf("%lf, &z");
	sum = x + y + z;
	ave = sum / 3.0;
	printf("합은 %f이고, 평균은 %f입니다.\n", sum, ave);

}//////////////////////////////////////////////////////////////////////////////////