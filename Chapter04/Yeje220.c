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
		printf("������ �Է��Ͻÿ�\n_��)5+2\n>>");
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
			printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
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
			printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�");
			return 0;
		}
			printf("%d %c %d = %d \n", x, op, y, r);
			*/
		
	}





	void prog_12()
	{
		char a, b, c, d;
		unsigned int a1;
		printf("ù��° ���ڸ� �Է��ϼ��� :\n");
		scanf(" %c ", &a);
		printf("�ι�° ���ڸ� �Է��ϼ��� :\n");
		scanf(" %c", &b);
		printf("����° ���ڸ� �Է��ϼ��� :\n");
		scanf(" %c", &c);
		printf("�׹�° ���ڸ� �Է��ϼ��� :\n");
		scanf(" %c", &d);
		a1 = a | b << 8 | c << 16 | d << 24;
		printf("����� %x\n", a1);
	}
	void prog_11()
	{
		/*double tana, mit, yup;
		yup = 900.0;
		tana = 0.79366;
		mit = yup / tana;
		printf("������ �������� %lf", mit);
		*/
		double a, b, c, d,e,f,g,h,i,j,k;
		a = 7.2;
			b = 360;
			c = 900;
			d = b / a;//c�� ���� ���ؾ��ϴ���
			e = c * d;//�ѷ�
			//e = 2PiR
			f = e / 2 * 3.14;
			printf("���� �������� %lf", f);


	}
	void prog_10()
	{
		int x, y, result;
		printf("����� ��ǥ�� �Է����ּ���.(x,y) :");
		scanf("%d %d", &x, &y);
		result = (x > 0 && y > 0) ? 1 :
			(x < 0 && y > 0) ? 2 :
				(x < 0 && y < 0) ? 3 : 4;
		printf("%d��и�\n", result);
	}
	void prog_09()
	{
		double ac, ae, bc, de, st, sha, pigo;
		printf("�������� ���̸� �Է��Ͻÿ� :");
		scanf("%lf", &st);
		printf("������ �׸����� ���̸� �Է��Ͻÿ� : ");
		scanf("%lf", &sha);
		printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� : ");
		scanf("%lf", &pigo);
		ac = pigo / sha;
		de = st * ac;

		printf("�Ƕ�̵��� ���̴� %lf�Դϴ�. \n", de);

		
		
	}
	void prog_08()
	{
		double a, b, c, d;
		printf("���� �������� �˷��ּ���: ");
		scanf("%lf", &a);
		//ǥ������ b ü���� c
		b = 4.0 *a*a*PI;
		c =   (4.0 / 3.0)*PI* a * a*a;
		printf("ǥ������ %.2f, ü���� %.2f �Դϴ�. \n", b, c);
	}
	void prog_07()
	{
		int a, b;
		printf("15������ ������ 2�� �Է��� �ּ��� : ");
			scanf("%d %d", &a, &b);
			
			printf("2�� ���ϰ� ���� Ƚ�� : %d\n", b);
			printf("%d<<%d�� �� : %d\n",a,b, a << b);
			
	}
	void prog_06()
	{
		int a, b, c;
		printf("100�̸��� ������ �Է��ϼ��� : ");
		scanf("%d", &a);
		b = ~a + 1; //����
		printf("%d�� ������ : %d\n", a, b);

	}
	void prog_05()
	{
		int a, b, c;
		printf("100���� ���� ������ �Է����ּ��� : ");
		scanf("%d", &a);
		b = a / 10;//���� �ڸ�
		c = a % 10;//���� �ڸ�
		printf("���� �ڸ� : %d\n���� �ڸ� : %d\n",b, c);

	}
	void prog_04()
	{
		double a, b,c,d;
		printf("����� Ű�� �Է����ּ���(cm) : ");
			scanf("%lf", &a);
		b = a / 2.54; //��ġ
		c = (int)b / 12; //��Ʈ
		d = b - (c * 12); // ���� ��
		printf("%.2f�� %.0f��Ʈ %.2f��ġ �Դϴ�.", a, c, d);

	}
	void prog_03()
	{
		int x,y,z, max;
		printf("3���� ������ �Է����ּ���: ");
		scanf("%d %d %d", &x, &y, &z);
		max = (x > y&&x>z ) ? x : (y>x&&y>z)?y:z ;
		


		printf("�� �� ���� ū ���� %d �Դϴ�. \n",max);

	}
	void prog_02()
	{
		double a, b;
		printf("�Ǽ��� 2�� �Է����ּ���: ");
		scanf("%lf %lf", &a, &b);
		//�� �� �� ��
		printf("�� �Ǽ��� ���� %.2f, ���� %.2f \n", a + b, a - b);
		printf("�� �Ǽ��� ���� %.2f, ���� %.2f \n", a*b, a / b);


	}
	void prog_01()
	{
		int a, b;
		printf("���� 2���� �Է����ּ��� :\n");
		scanf("%d", &a, &b);
		printf("��: %d, ������: %d\n", a / b, a%b);
		
	}


