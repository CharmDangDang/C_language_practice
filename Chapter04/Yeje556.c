#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 



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
void prog_17();
int str_chr(char *s, char c);
void str_array(char *s);
void str_chrnum(char *s);
int get_response(char *prompt);
char firstupper(char *a);
void lastupper(char *a);

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
	prog_17();

}
void prog_17()
{
#define SIZE 100

	
		int i, j, k;
		char text[SIZE];

		printf("광고하고 싶은 텍스트를 입력하시오: ");
		gets(text);

		for (i = 0; text[i] != NULL; i++);
		j = i;
		k = 0;
		while (1) {
			system("cls");
			for (i = 0; i < j; i++)
				printf("%c", text[(i + k) % j]);
			k++;
			Sleep(500);
		}
		return 0;
	



}
void prog_16()
{
	char str[100];
	int size, i, k, x = 10, y = 10;
	printf("광고를 하고 싶은 텍스트를 입력하시옹 : ");
	gets(str);
	size = strlen(str);
	k = 0;
	while (1)
	{
	//	COORD pos = { x,y };
	//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE);

			for (i = k; i < (k + size); i++)
			{
				printf(*(str + 1 % size));
			}
		
	}
}
void prog_14()
{
	char a[80],b[80]="";
	char find[10];
	char change[10];
	printf("문자열을 입력하세욤  : ");
	gets(a);
	printf("찾을 문자열 : ");
	gets(find);
	printf("바꿀 문자열 : ");
	gets(change);
	char seps[] = " ,\t\n";
	char *token;
	token = strtok(a, seps);

	while (token != NULL)
	{
		if (strcmp(token, find) == 0)
			strcat(b, change);
		else
			strcat(b, token);
		token = strtok(NULL, seps);
		strcat(b," ");
	}
	printf("수정된 문자열 : %s\n", b);



}
void prog_13()
{
	char a[100];
	printf("문자열을 입력하세요");
	gets(a);
	char b[2] = { '.',',' };
	char *p;
	int count= 0;
	int i = 0;
	while (a[i] != NULL)
	{
		if (a[i] == b[0] || a[i] == b[1])
			count++;
		i++;
	}
		printf("%s에 있는 쉼표 마침표는 총 %d개 입니다. \n", a, count);
}
void prog_12()
{
	char a[30];
	printf("성과 이름을 대문자로 입력하세요 . ");
	gets(a);

	
	char seps[] = " ,\t\n";
	char *token;
	char *b[10];
	int i = 0;
	token = strtok(a, seps);
	b[i] = token;
	token = strtok(NULL, seps);
	b[++i] = token;
	
	printf("%s , %s", b[1], b[0]);

}
void prog_11()
{
	char a[30];
	printf("문자열을 입력해주세요 . ");
	gets(a);
	char seps[] = " ,\t\n";
	char *token;
	char *b[10];
	int i = 0;
	
	token = strtok(a, seps);
	b[i] = token;
	

	while (token != NULL) {
		i++;
		token = strtok(NULL, seps);
		b[i] = token;   ////////여기서 빠져나올떄 i가 1개 증가
								//소름;
	}
	i--;
	for (; i >= 0; i--) {
		printf("%s ", b[i]);
	}
	printf("\n");
}
void prog_10()
{
	char a[30];
	printf("문자열을 입력하시오. : ");
	gets(a);
	tolower(a);
	
	for (int i = 0; i < strlen(a) / 2; i++)
	{
		//if (strcmp(a[i], a[strlen(a) - 1 - i]) == 0)
		if(a[i]!=a[strlen(a)-1-i])
			printf("회문이 아니네용 ㄲㅂ");
	}
	printf("%s는 회문이 맞습니다. \n", a);
}
void prog_09()
{
	char a[30];
	printf("텍스트를 입력하세욤 : ");
	gets(a);
	//if (a[0] <= "z"&&a[0] >= "a")
		//a[0] = toupper(a[0]);
	firstupper(a);
	lastupper(a);
	
	printf("%s \n", a);
}
char firstupper(char *a)
{
	if(islower(a[0]))
		a[0] = toupper(a[0]);
	return a;
}
void lastupper(char *a)
{
	int len = strlen(a);
	if (ispunct(a[strlen(a) - 1] == 0)) {
		a[len] = '.';  // 여기가 문제이다ㅏㅏㅏㅏㅏ
		a[len + 1] = NULL;
	}
	return a;
}
void prog_08()
{
	char a[30];
	printf("문자열을 입력해주세용 :");
	gets(a);
	char seps[] = " ,\t\n";
	char *token;
	int count = 0;
	token= strtok(a, seps);
	while (token != NULL)
	{
		token = strtok(NULL, seps);
		count++;
	}
	printf("단어의 수는 %d개 입니다.\n",count);
}
void prog_07()
{
	char prompt[30];
	printf("게임을 하시겠습니까? ");
	gets(prompt);
	str_upper(prompt);
	int ab = get_response(prompt);
	if(ab==0)
	printf("때려쳐 그냥 \n");
	else	
		printf("긍정적인 답변. \n");

}
int get_response(char *prompt)
{
	if (strcmp(prompt, "YES") == 0 || strcmp(prompt, "OK")==0)
		return 1;
	else if (strcmp(prompt, "NO") ==0)
		return 0;
}
void prog_06()
{
	char a[30];
	printf("문자열을 입력하시오 : ");
	gets(a);
	str_upper(a);
	
	printf("변환된 문자열 : %s \n", a);
	
}
str_upper(char*s)
{
	
	
	int i;
	for (i = 0; s[i] != NULL; i++)
		if (s[i] >= 'a'&&s[i] <= 'z')
			s[i] += 'A' - 'a';
		else
			printf("소문자만 입력해주세요^^7 ");

	
	//'A'-'a' = -26



}
void prog_05()
{
	char c;
	printf("문자를 입력하시오 . : ");
	c= getchar();
	while (1)
	{
		if (c >= 'a') {
		putchar(toupper(c));
		printf("\n");
		break;
	}
		else if (c <= 'Z') {
			putchar(tolower(c)); 
			printf("\n");
			break;
		}
		else if (c == '.')
			break;
	}
}
void prog_04()
{
	char s[30];
	printf("문자열을 입력하세요. :");
	gets(s);
	str_chrnum(s);

}
void str_chrnum(char *s)
{
	
	for (char i= 'a'; i <= 'z'; i++)
		printf("%c의 갯수 : %d \n", i, str_chr(s, i));
	
		
	
}
/*void prog_04()
{
	char s[30];
	char b[2][30];
	int i = 97;
	
	printf("문자열을 입력하시오. : ");
	gets(s);
	str_array(s);
}
void str_array(char *s)
{
	int p[26] = { 0 };
	int i = 0;
	while (s[i] != '0')
	{
		for (int k = 0; k < 26; k++)
			p[k] = strchr(s, i);

			i++;
	}
	for(int k= 0; k<26; k++)
		if (p[k] != 0)
		{
			printf("%d ", p[k]);
		}
	

}*/
void prog_03()
{
	char s[30];
	char c;
	printf("문자열을 입력하시오 . :");
	gets(s);
	printf("갯수를 셀 문자를 입력하시오. :");
	scanf("%c", &c);
	printf("%c의 갯수 : %d\n", c, str_chr(s, c));

}
int str_chr(char *s, char c)
{
	int num = 0;
	int i=0;
	while (s[i] != '0')
	{
		if (s[i] == c) {
			num++;
		}

		i++;
	}
	return num;


}
void prog_02()
{
	char a[100];
	printf("공백문자가 있는 문자열을 입력하시오. : ");
	gets(a);
	int i=0;
	while (a[i] != '\0')
	{
		if (a[i] != ' ')
			printf("%c", a[i]);
		i++;
	}
	printf("\n");

}
void prog_01()
{
	char a;
	printf("문자를 입력하시오 : \n");
	scanf("%c", &a);
	printf("아스키 코드값 : %d\n", a);
}