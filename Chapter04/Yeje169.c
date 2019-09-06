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
	printf("화재가 발생하였습니다.\n");
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
	printf("아스키 코드값을 입력하시오 0~127 : ");
	scanf("%d", &a);
	printf("문자:%c 입니다.\n", (char)a);

}
void prog_07()
{

	double a, b, c, d, e;
	printf("질량이랑 속도를 입력하셈 : ");
	scanf("%lf %lf", &a, &b);
	c = a * b*b / 2.0;
	printf("질량(kg): %.2lf\n속도(m/s): %.2lf\n운동에너지(J): %.2lf\n",a,b, c);


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
	printf("집이 몇평이신가요? :");
	scanf("%lf", &a);
	meter = a * pyung;
	printf("당신의 집은 %.2lf평방미터네요.\n", meter);
	

}
void prog_04()
{
	double a, b, c, d ;
	printf("상자의 가로 세로 높이 한번에 입력하셈 : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = a * b*c;
	printf("상자의 부피는 %.2lf입니다.\n", d);
}
void prog_03()
{
	int x, y, tmp;
	x = 10;
	y = 20;
	tmp = x;
	x = y;
	y = tmp;
	printf("x는 %d, y는 %d\n", x, y);
}
void prog_02()
{
	int a;
	printf("16진수를 입력하세욤 : \n");
	scanf("%x", &a);
	printf("8진수로는 %#o입니다.\n", a);
	printf("10진수로는 %d입니다.\n", a);
	printf("16진수로는 %#x입니다.\n",a);


}
void prog_01()
{


	double TT;
	printf("실수를 하나 입력하시오(숫자) : \n");
	scanf("%lf", &TT);
	printf("실수형식으로는 %lf입니다\n", TT);
	printf("지수형식으로는 %e입니다\n", TT);

}