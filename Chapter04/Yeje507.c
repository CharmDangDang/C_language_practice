#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // 문자 처리 함수 ㅇㅇㅇㅇ


#define MIN(a,b)  ((a<b)? a: b)
#define MAX(a,b)  ((a>b)? a: b)
#define WORDS 5

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
void prog_14();
void prog_15();
void prog_16();
void prog_205();
void prog_548();
void prog_nansu();
void get_sum_diff(int x, int y, int *p_sum, int *p_diff);
void array_fill(int *a, int size);
void array_print(int *a, int size);
void convert(double *grades, double *scores, int size);
void array_copy(int *a, int *b, int size);
void array_add(int *a, int *b, int *c, int size);
int array_sum(int *a, int size);
void get_lcm_gcd(int x, int y, int *plcm, int *p_gcd);
void merge(int *a, int *b, int *c, int size);
void get_int(int *px, int *py);
void encrypt(char cipher[], int shift);
void decrypt(char cipher[], int shift);

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
	//prog_13();
	//prog_14();
	//prog_15();
	//prog_16();
	//prog_205();
	//prog_548();
	prog_nansu();

}
void prog_ninja()
{

}
void prog_nansu()
{
	char cipher[2][62];
	char str[30];
	int i,j;
	srand(time(0));
	for (i = 0; i < 62; i++)
	{
		switch (i / 26)
		{
		case 0: cipher[0][i] = 'A' + i % 26; break;
		case 1: cipher[0][i] = 'a' + i % 26; break;
		case 2: cipher[0][i] = '0' + i % 26; break;
		}
	}
	for (i = 0; i < 62; i++)
	{
		j = rand() % 62;
		cipher[1][i] = cipher[0][j];
		for (int k = 0; k < i; k++)
		{
			if (cipher[1][k] == cipher[1][i])
				i--;
		}
	}
	printf("암호화 할 문장을 써주세요 : ");
	gets(str)

	for (i = 0; i < 62; i++)
		printf("%c", cipher[0][i]);
	printf("\n");
	for (i = 0; i < 62; i++)
		printf("%c", cipher[1][i]);
	printf("\n");
}
void randomdecrypt(char str)
{
	while (str[i] != '\n') {
		if str
	}
}
void prog_548()
{
	char cipher[50];
	int shift = 3;
	int num;
	printf("MENU\n");
	printf("1--암호화\n");
	printf("2--복호화\n");
	scanf("%d", &num);
	printf("문자열을 입력하시오 : ");
	gets(cipher);
	switch (num) {
	case 1: encrypt(cipher, shift); break;
	case 2: decrypt(cipher, shift); break;
	}
	
	
	
}
void encrypt(char cipher[], int shift)
{

	int i = 0;
	while (cipher[i] != '\0') {
		if (cipher[i] >= 'a'&&cipher[i] <= 'z') {
			cipher[i] += shift;
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
	}
		pirntf("암호화 성공 : %s \n", cipher);
}
void decrypt(char cipher[], int shift)
{
	int i = 0;
	while (cipher[i] != '\0') {
		if (cipher[i] >= 'a'&& cipher[i] <= 'z') {
			cipher[i] -= shift;
			if (cipher[i] < 'a')
				cipher[i] += 26;
		}
	}
	printf("복호화 성공 : %s \n", cipher);
}
void prog_205()
{
	int i, index;
	char dic[WORDS][2][30] = {
		{"book", "책"},
	{"boy","소년"},
	{"computer","컴퓨터"},
	{"language", "언어"},
	{"rain","엄복동"} };

	char word[30];
	printf("단어를 입력하삼 : ");
	scanf("%s", word);
	index = 0;
	for (i = 0; i < WORDS; i++) {
		if (strcmp(dic[index][0],word) == 0) {
			printf("%s : %s \n", word, dic[index][1]);
			return 0;
		}
		index++;
	}
	printf("사전에서 발견되지 않았습니다.\n");

	return 0;
	
}
void prog_13()
{
	char s[] = "Man is immortal, because he has a soul";
	char seps[] = "\t\n ,";
	char *token;
	int cnt = 0;

	token = strtok(s, seps); //seps 안하고  "  , " 이런식으로 해도 된다잉 ^^7
	while (token != NULL)
	{
		printf("토큰: %s\n", token);
		cnt++;
		token = strtok(NULL, seps);
	}
	printf("%d개 \n", cnt);
	return 0;

}
void reprog_11()
{









		int a[4] = { 1, 3, 5, 7 },b[4] = {2};
}
void remerge(int *a, int *b, int *c, int size)
{
	int i = 0, j = 0, k = 0;
	//for(i ,j,k; i<size&&b<size)
	//{ }
}
void prog_12()
{
	
	int a, b;
	get_int(&a, &b);
	int sum = a + b;
	printf("정수의 합은 %d ",&sum );
}
void get_int(int *px, int *py)
{
	printf("2개의 정수를 입력하세요. : ");
	scanf("%d %d", px, py);
}
void prog_11()
{
int a[] = { 2 , 5, 7 , 8 };
int b[] = { 1 , 3, 4 , 6 };
	
int c[8];

merge(a, b, c, sizeof(a) / sizeof(a[0]));
int i;
printf(" c[] = ");
for (i = 0; i < 8; i++);
{
	printf(" %d ", c[i]);
}
printf("\n");

}
void merge(int *a, int *b, int *c, int size)
{

	int j = 0, k = 0;
	for (int i = 0; i < size * 2; i++)
	{
		if (j < size&&k < size)
		{
			if (*(a+j) <= *(b+k))
			{
				*(c+i) = *(a + j);
				j++;
			}
			else
			{
				*(c + i) = *(b + k);
				k++;
			}
		}
		else 
		{
				if (j == size)
				{
				*(c + i) = *(b + k);
				k++;
				}
				else
				{
				*(c + i) = *(a + j);
				j++;
				}
		}
	}
}	
/*
while( i<size ) 
c[k++] = a[i++];
*/
/*int a[10], i, max, min;
srand(time(0));
for (i = 0; i < 10; i++) {
	a[i] = rand();
}
for (i = 0; i < 10; i++) {
	if (a[i] > a[i + 1])
		max = a[i];
	else if (a[i] < a[i + 1])
		min = a[i];*/
void prog_10()
{
	int a, b;
	int gcd;
	int lcm;
	printf("두개 정수를 입력하삼. : ");
	scanf("%d %d", &a, &b);
	get_lcm_gcd(a, b, &lcm, &gcd);
	printf("최소 공배수는 %d\n", lcm);
	printf("최대 공약수는 %d\n", gcd);

}
void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd)
{
	*p_gcd = 1;     
	int range = MIN(x, y);
	for (int i = 1; i <= range; i++)
	{ 
		if (x % i == 0 && y % i == 0)
		{ 
			*p_gcd = i; 

		}
	}
	*p_lcm = (x*y) /(*p_gcd);


}
void prog_09()
{
	int a[10];
	int i;
	int enom = 200;
	for (i = 0; i < 10; i++)
	{ 
		a[i] = 100 * i;  // 0 -> 0 1-> 100 -> 2-> 200,  3번째 멤버가 200만원
	}
	int member = search(a, sizeof(a) / sizeof(a[0]), enom);
	printf("찾으시는 200만원 받는놈은 %d번째 놈입니다. \n", member);
	if (member == -1)
		printf("찾는놈은 퇴사했나봅니다.... ㄲㅂ\n");
}
int search(int *a, int size, int search_value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i] == search_value)
		{
			return i+1;

		}

	}
	return -1;
}
void prog_08()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
	}
	int wolsum = array_sum(a, sizeof(a) / sizeof(a[0]));
	printf("월급의 총액은 %d 입니다 \n", wolsum);

}
int array_sum(int *a, int size)
{
	int i, sum = 0;
	printf("a[] = { ");
	for (i = 0; i < size; i++)
	{
		printf(" %d ", *(a + i));
		sum += *(a + i);
	}
	printf(" } \n");
	return sum;
}
void prog_07()
{
	int a[10], b[10] ,c[10];
	srand(time(0));
	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		b[i] = rand() % 10;
	}
	array_add(a, b, c, sizeof(a) / sizeof(a[0]));

}
void array_add(int *a, int *b, int *c, int size)
{
	int i;
	printf("a[] + b[] = c[]\n");
	for (i = 0; i < size; i++)
	{
		*(c + i) = *(a + i) + *(b + i);
		printf("%d  +  %d  = %d\n",*(a+i),*(b+i), *(c + i));
	}
}
void prog_06()
{
	int i;
	int a[10];
	int b[10];
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
	}
	array_copy(a, b, sizeof(a) / sizeof(a[0]));

}
void array_copy(int *a, int *b, int size)
{
	int i;
	printf("a[] -> b[]\n");
	for (i = 0; i < size; i++)
	{
		*(b + i) = *(a + i);
		printf("  %d ->   %d\n", *(a + i), *(b + i));
		
	}
}
void prog_05()
{
	double a[10];
	double scores[10];
	srand(time(0));
	for (int b = 0; b < 10; b++) {
		a[b] = rand() % 44 / 10.0;
		printf("%lf \n", a[b]);
	}
	convert(a, scores, sizeof(a) / sizeof(a[0]));
		
}
void convert(double *grades, double *scores, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		
		*(scores +i) = *(grades + i)*(100 / 4.3);
		printf("%.2f  ->  %.2f \n",*(grades+i), *(scores + i));
	}
}
void prog_04()
{
	int a[] = { 1 ,2 ,3, 4, 0 , 0 ,0 ,0 ,0,0 };
	array_print(a, sizeof(a) / sizeof(a[0]));

}
void array_print(int *a, int size)
{
	int i;
	printf("a[] = { ");
	for (i = 0; i < size; i++)
	{
		printf(" %u ", *(a + i));
	}
	printf(" } \n");
}
void prog_03()
{
	int a[10];
	array_fill(&a, sizeof(a)/sizeof(a[0]));
	int i;
	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		printf("%d \n", a[i]);
		
	}
	
}
void array_fill(int *a, int size)
{
	int i;
	srand(time(0));
	for (i = 0; i < size; i++)
	{
		*(a+i) = rand() % 100;
		//a[i] = rand() % 100; 이렇게 해도됨 배열은 ㅇㅇ
	}
}
void prog_02()  // 마즘
{

	//int a, b;
	//int *c, *d;
	//printf("합과 차를 구할 수를 입력해주세요 : ");
	//scanf("%d %d", &a, &b);
	//*c = &a; *d = &b;
	//get_sum_diff(a, b, *c, *d);
	int i = 5, j = 7;
	int f, g;
	get_sum_diff(i, j, &f, &g);

	printf("원소들의 합  = %d\n", f);
	printf("원소들의 차  = %d \n", g);

}
void get_sum_diff(int x, int y, int *p_sum, int *p_diff) {
	
	*p_sum = x + y;
	*p_diff = x - y;
	
}
void prog_01()  //  맞음 
{
	int x = 0x12345678;
	unsigned char *xp = (char *)&x;

	printf("바이트 순서 :  %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
	return 0;
}