#include <stdio.h>
#define PI 3.141592
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
		int x, y, r;
		char op;
		printf("수식을 입력하시오\n_예)5+2\n>>");
		scanf("%d %c %d", &x, &op, &y);
		switch (x>3)
		{
		case 0 :  
		case 1 :
		case '+': r = x + y; break;
		case '-': r = x - y; break;
		case '*': r = x * y; break;
		case '/': r = x / y; break;
		case '%': r = x % y; break;
		case '&': r = x & y; break;
		case '^': r = x ^ y; break;
		case '|': r = x | y; break;


		default:
			printf("연산자를 잘못 입력했습니다.\n");
			return 0;
		}
		if(op=='&'||op=='^'||op=='|')

		/*if (op == '+')
			r = x + y;
		else if (op == '-')
			r = x - y;
		else if (op == '*')
			r = x * y;
		else if (op == '/')
			r = x / y;
		else if (op == '%')
			r = x % y;
		else
		{
			printf("연산자를 잘못 입력하셨습니다");
			return 0;
		}
			printf("%d %c %d = %d \n", x, op, y, r);
			*/
		
	}





	void prog_12()
	{
		char a, b, c, d;
		unsigned int a1;
		printf("첫번째 문자를 입력하세요 :\n");
		scanf(" %c ", &a);
		printf("두번째 문자를 입력하세요 :\n");
		scanf(" %c", &b);
		printf("세번째 문자를 입력하세요 :\n");
		scanf(" %c", &c);
		printf("네번째 문자를 입력하세요 :\n");
		scanf(" %c", &d);
		a1 = a | b << 8 | c << 16 | d << 24;
		printf("결과값 %x\n", a1);
	}
	void prog_11()
	{
		/*double tana, mit, yup;
		yup = 900.0;
		tana = 0.79366;
		mit = yup / tana;
		printf("지구의 반지름은 %lf", mit);
		*/
		double a, b, c, d,e,f,g,h,i,j,k;
		a = 7.2;
			b = 360;
			c = 900;
			d = b / a;//c에 몇을 곱해야하는지
			e = c * d;//둘레
			//e = 2PiR
			f = e / 2 * 3.14;
			printf("지구 반지름은 %lf", f);


	}
	void prog_10()
	{
		int x, y, result;
		printf("당신의 좌표를 입력해주세요.(x,y) :");
		scanf("%d %d", &x, &y);
		result = (x > 0 && y > 0) ? 1 :
			(x < 0 && y > 0) ? 2 :
				(x < 0 && y < 0) ? 3 : 4;
		printf("%d사분면\n", result);
	}
	void prog_09()
	{
		double ac, ae, bc, de, st, sha, pigo;
		printf("지팡이의 길이를 입력하시오 :");
		scanf("%lf", &st);
		printf("지팡이 그림자의 길이를 입력하시오 : ");
		scanf("%lf", &sha);
		printf("피라미드까지의 거리를 입력하시오 : ");
		scanf("%lf", &pigo);
		ac = pigo / sha;
		de = st * ac;

		printf("피라미드의 높이는 %lf입니다. \n", de);

		
		
	}
	void prog_08()
	{
		double a, b, c, d;
		printf("구의 반지름을 알려주세요: ");
		scanf("%lf", &a);
		//표면적은 b 체적은 c
		b = 4.0 *a*a*PI;
		c =   (4.0 / 3.0)*PI* a * a*a;
		printf("표면적은 %.2f, 체적은 %.2f 입니다. \n", b, c);
	}
	void prog_07()
	{
		int a, b;
		printf("15이하의 정수를 2개 입력해 주세요 : ");
			scanf("%d %d", &a, &b);
			
			printf("2를 곱하고 싶은 횟수 : %d\n", b);
			printf("%d<<%d의 값 : %d\n",a,b, a << b);
			
	}
	void prog_06()
	{
		int a, b, c;
		printf("100미만의 정수를 입력하세요 : ");
		scanf("%d", &a);
		b = ~a + 1; //보수
		printf("%d의 보수는 : %d\n", a, b);

	}
	void prog_05()
	{
		int a, b, c;
		printf("100보다 작은 정수를 입력해주세요 : ");
		scanf("%d", &a);
		b = a / 10;//십의 자리
		c = a % 10;//일의 자리
		printf("십의 자리 : %d\n일의 자리 : %d\n",b, c);

	}
	void prog_04()
	{
		double a, b,c,d;
		printf("당신의 키를 입력해주세요(cm) : ");
			scanf("%lf", &a);
		b = a / 2.54; //인치
		c = (int)b / 12; //피트
		d = b - (c * 12); // 남은 인
		printf("%.2f는 %.0f피트 %.2f인치 입니다.", a, c, d);

	}
	void prog_03()
	{
		int x,y,z, max;
		printf("3개의 정수를 입력해주세용: ");
		scanf("%d %d %d", &x, &y, &z);
		max = (x > y&&x>z ) ? x : (y>x&&y>z)?y:z ;
		


		printf("그 중 제일 큰 수는 %d 입니다. \n",max);

	}
	void prog_02()
	{
		double a, b;
		printf("실수를 2개 입력해주세요: ");
		scanf("%lf %lf", &a, &b);
		//합 차 곱 몫
		printf("두 실수의 합은 %.2f, 차는 %.2f \n", a + b, a - b);
		printf("두 실수의 곱은 %.2f, 몫은 %.2f \n", a*b, a / b);


	}
	void prog_01()
	{
		int a, b;
		printf("정수 2개를 입력해주세요 :\n");
		scanf("%d", &a, &b);
		printf("몫: %d, 나머지: %d\n", a / b, a%b);
		
	}


