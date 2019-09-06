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
	printf("딜러: 카드 생성합니다.\n");
	for (i = 0; i < 52; i++)
	{
		{switch (i / 13)
		{
		case 0: game[i].suit = 'c'; break;
		case 1: game[i].suit = 'd'; break;
		case 2: game[i].suit = 'h'; break;				//카드 생성
		case 3: game[i].suit = 's'; break;
		}
		game[i].value = i % 13 + 1;
		game[i].check = 0;
		}

	}
	printf("딜러 : 섞습니다.\n");
	//for (i = 0; i < 52; i++)					//카드 다시 섞기
	//{
	//	pregame[i] = game[rand() % 52];
		 
		//for (int j = 0; j < i; j++) {
		//	if ((pregame[i].value==pregame[j].value))
		//		i--;
			
	//	}
	//}
	printf("섞었습니다.\n");

	for (i = 0; i < 52; i++)
	{
		if (i % 2 == 0)
		{
			_sleep(1500);
			printf("A님의 턴입니다. \n ");
			_sleep(1500);
			printf("shape : %c , value %d\n", game[i].suit, game[i].value);
			game[i].check = 1;
			Ateam[i] = pregame[i];
		}
		else
		{
			_sleep(1500);
			printf("B님의 턴입니다. \n ");
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
		printf("이름을 입력하시오 :");
		gets(nb[i].name);
		printf("집전화번호 쓰셈 :");
		gets(nb[i].number);
		printf("핸드폰번호 쓰셈 :");
		gets(nb[i].phone);
	}
	printf("찾는 사람 이름 입력 : ");
	scanf("%s", find);

	for (i = 0; i < 3; i++)
	{
		if (strcmp(find, nb[i].name) == 0)
		{
			printf("찾았습니다! ");
			printf("집전화번호 : %s\n", nb[i].number);
			printf("핸드폰번호 : %s\n", nb[i].phone);
		}
	}
	printf("그런 사람 없습네다...\n");

}
void prog_10()
{
	EMPLE josa[10];
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("사번과 이름 입력해주세요\n");
		scanf("%d %s", &josa[i].num, josa[i].name);
		getchar();
		printf("전화번호 입력해주세요\n");
		gets(josa[i].phonum);
		printf("나이 입력해주세요\n");
		scanf("%d", &josa[i].age);
	}
	
		for (i = 0; i < 10; i++)
		{
			if (josa[i].age >= 20 && josa[i].age <= 30)
				printf("이름 = %s 사번 = %d, 나이= %d\n", josa[i].name, josa[i].num, josa[i].age);
		}
}


void prog_09()
{
	struct food fdarray[CNT];
	int i, sum;
	for (i = 0; i < CNT; i++)
	{
		printf("오늘 먹은 음식 뭐예요? \n");
		scanf(" %c",fdarray[i].name);
		printf("오늘 먹은 음식 칼로리는요? \n");
		scanf("%d", fdarray[i].calories);
		sum += fdarray[i].calories;
	}
	printf("총 칼로리 = %d ", sum);




}
void prog_08()
{
	struct circle p;
	printf("좌표와 반지름을 입력해주세요. ");
	scanf("%d %d %d",p.center.x,p.center.y,p.radius);
	double rearea = area(p);
	double reperimeter = perimeter(p);
	printf("원의 면적=%lf, 원의 둘레=%lf\n", rearea, reperimeter);
	

	//CIRCL	
}
double area(struct circle c)
{
	double area;
	//파이알제곱
	return (c.radius*c.radius)*PI;
}
double perimeter(struct circle c)
{
	double perimeter;
	//2파이알
	return (2 * c.radius)*PI;
}
void prog_07()
{
	struct point ab;

	printf("첫번째 좌표를 입력하세요 : ");
	scanf("%d %d", &ab.x, &ab.y);

	int result = quadrant(ab);
		switch (result)
		{
		case 1: printf("1사분면 좌표입니다.\n"); break;
		case 2: printf("2사분면 좌표입니다.\n"); break;
		case 3: printf("3사분면 좌표입니다.\n"); break;
		case 4: printf("4사분면 좌표입니다.\n"); break;
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
	printf("첫번째 좌표를 입력하세요 : ");
	scanf("%d %d", &ab.x, &ab.y);
	printf("두번째 좌표를 입력하세요 : ");
	scanf("%d %d", &cd.x, &cd.y);
	int result = equalPointer(&ab, &cd);
	if (result == 1)
		printf("두 좌표는  일치합니다.");
	else
		printf("두 좌표는 일치하지않습니다.");
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
	printf("첫번째 좌표를 입력하세요 : ");
	scanf("%d %d", &ab.x, &ab.y);
	printf("두번째 좌표를 입력하세요 : ");
	scanf("%d %d", &cd.x, &cd.y);
	int result = equal(ab, cd);
	if (result == 1)
		printf("두 좌표는  일치합니다.");
	else
		printf("두 좌표는 일치하지않습니다.");

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
	printf("제목을 입력해주세요\n");
	gets(mail.title); 
	printf("수신자를 입력해주세요\n");
	gets(mail.sender);
	printf("발신자를 입력해주세요\n");
	gets(mail.receiver);
	printf("내용을 입력해주세요\n");
	gets(mail.content);
	printf("날짜을 입력해주세요\n");
	gets(mail.date);
	printf("우선순위를 입력해주세요\n");
	gets(mail.pri);

	printf("제목 : %s\n", mail.title);
	printf("수신자 : %s\n", mail.sender);
	printf("발신자 : %s\n", mail.receiver);
	printf("내용 : %s\n", mail.content);
	printf("날짜 : %s\n", mail.date);
	printf("우선 순위 : %s\n", mail.pri);

}
void prog_02()
{
	struct account acc = { 1,"홍길동",100000 };
	printf("%d, %s, %d\n", acc.number, acc.name, acc.balance);
}
void prog_01()
{
	struct book bk = { 1,"바람과 함께 사라지다","마가렛 미첼" };
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
		printf("두 점의 위치가 같네욤.\n");
	else
		printf("두 점의 위치가 다르네염;\n");
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
	printf("%d명의 성적을 입력하시오 \n", CNT);
	for (i = 0; i < CNT; i++)
	{
		printf("%d번 성명 입력 : ", i + 1);
		scanf("%s", cym[i].name);
		printf("%d번 국어 성적 입력 : ",i+1);
		scanf("%d", &cym[i].kor);
		printf("%d번 영어 성적 입력 : ", i + 1);
		scanf("%d", &cym[i].eng);
		printf("%d번 수학 성적 입력 : ", i + 1);
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
	printf("\t성명\t국어\t영어\t수학\t총점\t평균\t석차\n");
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
	printf("평점이 가장 높은 학생은 %s\n", cym[pos].name);
	printf("총점 : %d , 평균 : %.2lf", cym[pos].tot, cym[pos].avg);

}
void prog_999()
{
	struct point {
		int x, x1;
		int y, y1;
	};
	struct point p;

	int a[5];

	printf("배열에 넣을 수를 입력해바 : ");
	scanf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

	printf("좌표를 입력해주세요 : ");
	scanf("%d %d", &p.x, &p.y);
	printf("다음 좌표를 입력해주세요 : ");
	scanf("%d %d", &p.x1, &p.y1);
	double result = sqrt((p.x - p.x1)*(p.x - p.x1) + (p.y - p.y1)*(p.y - p.y1));;

	printf("%lf", result);
}