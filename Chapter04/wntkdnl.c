#include <stdio.h>
#define SIZE 6

int main(void)
{


	int freq[SIZE] = { 0 };

	int i;
	srand(time(0));
	for (i = 0; i < 100000; i++)
	{
		++freq[rand() % 6];
	}

	int a;

	for (a = 0; a < SIZE; a++)
		printf("�ֻ��� %d�� ���� Ƚ�� %d\n", a + 1, freq[a]);

	




}