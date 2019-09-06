#include <stdio.h>
#include <time.h>
#define ENTRIES 5
int main()
{
	/*int i, index;
	char dic[ENTRIES][2][30] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"} };
	char word[30];
	printf("단어를 입력하시오 : ");
	scanf_s("%s", word, sizeof(word));
	index = 0;
	for (i = 0; i < ENTRIES; i++)
	{
		if (strcmp(dic[i][1], word) == 0)
		{
			printf("%s : %s\n", word, dic[i][0]);
			return 0;
		}
	}
	printf("사전에서 발견되지 않았습니다.\n");*/

	char cipher[2][62];
	char str[30];
	int i, j;
	srand(time(0));
	for (i = 0; i < 62; i++)
	{
		switch (i / 26)
		{
		case 0:  cipher[0][i] = 'A' + i % 26; break;
		case 1:  cipher[0][i] = 'a' + i % 26; break;
		case 2:  cipher[0][i] = '0' + i % 26; break;
		}
	}
	for (i = 0; i < 62; i++)
	{
		j = rand() % 62;
		cipher[1][i] = cipher[0][j];
		for (int k = 0; k < i; k++)
			if (cipher[1][k] == cipher[1][i])
				i--;
	}
	for (i = 0; i < 62; i++)
		printf("%c", cipher[0][i]);
	printf("\n");
	for (i = 0; i < 62; i++)
		printf("%c", cipher[1][i]);
	printf("\n");
	printf("암호화할 문자열 입력 : ");
	gets_s(str, sizeof(str));
	i = 0;
	while (str[i] != 0)
	{
		for (int k = 0; k < 62; k++)
		{
			if (str[i] == cipher[1][k])
			{
				str[i] = cipher[0][k];
				break;
			}
		}
		i++;
	}
	printf("암호화된 문자열 : %s\n", str);


}