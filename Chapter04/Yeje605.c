#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define CNT 3
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
void prog_13();

void prog_999();
void prog_998();
void prog_lotto();
void prog_trade();
void prog_BallDragon();
void swap(struct point *p1, struct point *p2);
int comphaza(struct point *a, struct point *b);
int equal(struct point p1, struct point p2);
int equalPointer(struct point *p1, struct point *p2);
int quadrant(struct point p);
struct complex2 complex_add(struct complex2 c1, struct complex2 c2);
double perimeter(struct circle c);
double area(struct circle c);
int check(struct card Ateam);

union example {
	int i;
	char c;
};

typedef struct circle CIRCLE;
typedef struct employee EMPLE;
struct point {
	int x;
	int y;
};
struct circle {
	struct point center;
	double radius;
};
struct book {
	int id;
	char title[100];
	char author[20];
};
struct account {
	int number;
	char name[20];
	int balance;
};
struct e_mail {
	char title[20];
	char sender[20];
	char receiver[20];
	char content[50];
	char date[20];
	char pri[10];

};
struct complex2 {
	double real;
	double imag;
};
struct food {
	char name[100];
	int calories;
};
struct employee {
	int num;
	char name[15];
	char phonum[20];
	int age;
};
struct phoneBook {
	char name[5];
	char number[20];
	char phone[20];
};
struct card {
	char suit;
	int value;
	int check; 
};
int main(void)
{
	
	//prog_999();
	//prog_998();
	//prog_lotto();
	//prog_trade();
	//prog_trade();
	//prog_comp();
	//prog_BallDragon();
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
	prog_12();

	
	

}
void prog_12()
{
	struct card pregame[52];
	struct card Ateam[26];
	struct card Bteam[26];
	struct card game[52];
	srand(time(0));
	int i, j;
	printf("����: ī�� �����մϴ�.\n");
	for (i = 0; i < 52; i++)
	{
		{switch (i / 13)
		{
		case 0: game[i].suit = 'c'; break;
		case 1: game[i].suit = 'd'; break;
		case 2: game[i].suit = 'h'; break;				//ī�� ����
		case 3: game[i].suit = 's'; break;
		}
		game[i].value = i % 13 + 1;
		game[i].check = 0;
		}

	}
	printf("���� : �����ϴ�.\n");
	//for (i = 0; i < 52; i++)					//ī�� �ٽ� ����
	//{
	//	pregame[i] = game[rand() % 52];
		 
		//for (int j = 0; j < i; j++) {
		//	if ((pregame[i].value==pregame[j].value))
		//		i--;
			
	//	}
	//}
	printf("�������ϴ�.\n");

	for (i = 0; i < 52; i++)
	{
		if (i % 2 == 0)
		{
			_sleep(1500);
			printf("A���� ���Դϴ�. \n ");
			_sleep(1500);
			printf("shape : %c , value %d\n", game[i].suit, game[i].value);
			game[i].check = 1;
			Ateam[i] = pregame[i];
		}
		else
		{
			_sleep(1500);
			printf("B���� ���Դϴ�. \n ");
			_sleep(1500);
			printf("shape : %c , value %d\n", game[i].suit, game[i].value);
			Bteam[i] = pregame[i];
		}
		
	}
}
int check(struct card Ateam)
{
	int i;
	int count;
	//for (i = 0; i < 26; i++)
	//{
		//if (Ateam[i])
	//}
}
void prog_11()
{
	struct phoneBook nb[3];
	char find[5];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("�̸��� �Է��Ͻÿ� :");
		gets(nb[i].name);
		printf("����ȭ��ȣ ���� :");
		gets(nb[i].number);
		printf("�ڵ�����ȣ ���� :");
		gets(nb[i].phone);
	}
	printf("ã�� ��� �̸� �Է� : ");
	scanf("%s", find);

	for (i = 0; i < 3; i++)
	{
		if (strcmp(find, nb[i].name) == 0)
		{
			printf("ã�ҽ��ϴ�! ");
			printf("����ȭ��ȣ : %s\n", nb[i].number);
			printf("�ڵ�����ȣ : %s\n", nb[i].phone);
		}
	}
	printf("�׷� ��� �����״�...\n");

}
void prog_10()
{
	EMPLE josa[10];
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("����� �̸� �Է����ּ���\n");
		scanf("%d %s", &josa[i].num, josa[i].name);
		getchar();
		printf("��ȭ��ȣ �Է����ּ���\n");
		gets(josa[i].phonum);
		printf("���� �Է����ּ���\n");
		scanf("%d", &josa[i].age);
	}
	
		for (i = 0; i < 10; i++)
		{
			if (josa[i].age >= 20 && josa[i].age <= 30)
				printf("�̸� = %s ��� = %d, ����= %d\n", josa[i].name, josa[i].num, josa[i].age);
		}
}


void prog_09()
{
	struct food fdarray[CNT];
	int i, sum;
	for (i = 0; i < CNT; i++)
	{
		printf("���� ���� ���� ������? \n");
		scanf(" %c",fdarray[i].name);
		printf("���� ���� ���� Į�θ��¿�? \n");
		scanf("%d", fdarray[i].calories);
		sum += fdarray[i].calories;
	}
	printf("�� Į�θ� = %d ", sum);




}
void prog_08()
{
	struct circle p;
	printf("��ǥ�� �������� �Է����ּ���. ");
	scanf("%d %d %d",p.center.x,p.center.y,p.radius);
	double rearea = area(p);
	double reperimeter = perimeter(p);
	printf("���� ����=%lf, ���� �ѷ�=%lf\n", rearea, reperimeter);
	

	//CIRCL	
}
double area(struct circle c)
{
	double area;
	//���̾�����
	return (c.radius*c.radius)*PI;
}
double perimeter(struct circle c)
{
	double perimeter;
	//2���̾�
	return (2 * c.radius)*PI;
}
void prog_07()
{
	struct point ab;

	printf("ù��° ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &ab.x, &ab.y);

	int result = quadrant(ab);
		switch (result)
		{
		case 1: printf("1��и� ��ǥ�Դϴ�.\n"); break;
		case 2: printf("2��и� ��ǥ�Դϴ�.\n"); break;
		case 3: printf("3��и� ��ǥ�Դϴ�.\n"); break;
		case 4: printf("4��и� ��ǥ�Դϴ�.\n"); break;
		}

}
int quadrant(struct point p)
{
	return (p.x > 0 && p.y > 0) ? 1 : (p.x < 0 && p.y > 0) ? 2 : (p.x < 0 && p.y < 0) ? 3 : 4;
}
void prog_06()
{
	struct point ab;
	struct point cd;
	printf("ù��° ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &ab.x, &ab.y);
	printf("�ι�° ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &cd.x, &cd.y);
	int result = equalPointer(&ab, &cd);
	if (result == 1)
		printf("�� ��ǥ��  ��ġ�մϴ�.");
	else
		printf("�� ��ǥ�� ��ġ�����ʽ��ϴ�.");
}
int equalPointer(struct point *p1, struct point *p2)
{
	if (((*p1).x == (*p2).x) && ((*p1).y == (*p2).y))
		return 1;
	else
		return 0;
}	
void prog_05()
{
	struct point ab;
	struct point cd;
	printf("ù��° ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &ab.x, &ab.y);
	printf("�ι�° ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &cd.x, &cd.y);
	int result = equal(ab, cd);
	if (result == 1)
		printf("�� ��ǥ��  ��ġ�մϴ�.");
	else
		printf("�� ��ǥ�� ��ġ�����ʽ��ϴ�.");

}
int equal(struct point p1, struct point p2)
{
	if ((p1.x == p2.x) && (p1.y == p2.y))
		return 1;
	else return 0;
}
void prog_04()
{
	//struct complex2 compy3 = { 3.0 , 5.0 };
	struct complex2 compy2 = { 2.0 , 3.0 };
	struct complex2 compy = { 1.0 , 2.0};
	struct complex2 result = complex_add(compy, compy2);

	printf("%lf+%fi\n", compy.real, compy.imag);
	printf("%lf+%fi\n", compy2.real, compy2.imag);
	printf("%lf+%fi\n", result.real, result.imag);

}
struct complex2 complex_add(struct complex2 c1, struct complex2 c2)
{
	struct complex2 ccomp;
	ccomp.real =c1.real + c2.real;
	ccomp.imag =c1.imag + c2.imag;
	
	return ccomp;

}
void prog_03()
{
	struct e_mail mail;
	printf("������ �Է����ּ���\n");
	gets(mail.title); 
	printf("�����ڸ� �Է����ּ���\n");
	gets(mail.sender);
	printf("�߽��ڸ� �Է����ּ���\n");
	gets(mail.receiver);
	printf("������ �Է����ּ���\n");
	gets(mail.content);
	printf("��¥�� �Է����ּ���\n");
	gets(mail.date);
	printf("�켱������ �Է����ּ���\n");
	gets(mail.pri);

	printf("���� : %s\n", mail.title);
	printf("������ : %s\n", mail.sender);
	printf("�߽��� : %s\n", mail.receiver);
	printf("���� : %s\n", mail.content);
	printf("��¥ : %s\n", mail.date);
	printf("�켱 ���� : %s\n", mail.pri);

}
void prog_02()
{
	struct account acc = { 1,"ȫ�浿",100000 };
	printf("%d, %s, %d\n", acc.number, acc.name, acc.balance);
}
void prog_01()
{
	struct book bk = { 1,"�ٶ��� �Բ� �������","������ ��ÿ" };
	printf("%d, %s, %s\n", bk.id, bk.title, bk.author);
}
void prog_BallDragon()
{

}
void prog_comp()
{
	struct point icy = { 10,20 };
	struct point dalla = { 30,40 };
	int result = comphaza(&icy, &dalla);
	if (result == 1)
		printf("�� ���� ��ġ�� ���׿�.\n");
	else
		printf("�� ���� ��ġ�� �ٸ��׿�;\n");
}
int comphaza(struct point *a, struct point *b)
{
	if (a->x == b->x&&b->y == b->y)
		return 1;
	else return 0;

}
void prog_trade()
{
	struct point aa = { 10,20 };
	struct point bb = { 20,30 };
	swap(&aa, &bb);
	printf("%d %d", aa.x, aa.y);
	printf("%d %d", bb.x, bb.y);

}
void swap(struct point *p1, struct point *p2)
{
	struct point temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}	
void prog_lotto()
{
	int luck[6];
	srand(time(0));
	int i;
	for (i = 0; i < 6; i++)
	{
		luck[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (luck[i] == luck[j])
				i--;
		}
	}
	for (i = 0; i < 6; i++)
		printf("%d, ", luck[i]);
}
void prog_998()
{
	;
	struct sungjok {
		char name[5];
		int kor, eng, mat, tot, rank;
		double avg;
	};
	struct sungjok cym[CNT], temp;
	int i, j;
	printf("%d���� ������ �Է��Ͻÿ� \n", CNT);
	for (i = 0; i < CNT; i++)
	{
		printf("%d�� ���� �Է� : ", i + 1);
		scanf("%s", cym[i].name);
		printf("%d�� ���� ���� �Է� : ",i+1);
		scanf("%d", &cym[i].kor);
		printf("%d�� ���� ���� �Է� : ", i + 1);
		scanf("%d", &cym[i].eng);
		printf("%d�� ���� ���� �Է� : ", i + 1);
		scanf("%d", &cym[i].mat);
		cym[i].tot = cym[i].kor + cym[i].eng + cym[i].mat;
		cym[i].avg = cym[i].tot / 3.0;
		cym[i].rank = 1;
	}
	for (i = 0; i < CNT - 1; i++)
	{
		for(j=i+1;j<CNT;j++)
			if (strcmp(cym[i].name, cym[j].name) > 0)
			{
				temp = cym[i];
				cym[i] = cym[j];
				cym[j] = temp;
			}

	}
	for (i = 0; i < CNT - 1; i++)
		for (j = i + 1; j < CNT; j++)
			if (cym[i].avg > cym[j].avg)
				cym[j].rank++;
			else if (cym[i].avg < cym[j].avg)
				cym[i].rank++;
	printf("\t����\t����\t����\t����\t����\t���\t����\n");
	for (i = 0; i < CNT; i++)
	{
		printf("%6s%6d%6d%6d%6d%5.lf%6d\n",cym[i].name, cym[i].kor, cym[i].eng,
			cym[i].mat, cym[i].tot, cym[i].avg, cym[i].rank);

	}
	int max, pos;
	max = cym[0].tot;
	pos = 0; 
	for(i = 1; i<CNT; i++)
		if (max < cym[i].tot)
		{
			max = cym[i].tot;
			pos = i;
		}
	printf("������ ���� ���� �л��� %s\n", cym[pos].name);
	printf("���� : %d , ��� : %.2lf", cym[pos].tot, cym[pos].avg);

}
void prog_999()
{
	struct point {
		int x, x1;
		int y, y1;
	};
	struct point p;

	int a[5];

	printf("�迭�� ���� ���� �Է��ع� : ");
	scanf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

	printf("��ǥ�� �Է����ּ��� : ");
	scanf("%d %d", &p.x, &p.y);
	printf("���� ��ǥ�� �Է����ּ��� : ");
	scanf("%d %d", &p.x1, &p.y1);
	double result = sqrt((p.x - p.x1)*(p.x - p.x1) + (p.y - p.y1)*(p.y - p.y1));;

	printf("%lf", result);
}