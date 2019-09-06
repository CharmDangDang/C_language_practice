#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);
static int h = 0;
int main(void)
{
	hanoi_tower(64, 'a', 'b', 'c');
	
}
void hanoi_tower(int n, char from, char tmp, char to)
{
	
	
	if (n == 1)
	{
		printf("판 1을 %c에서 %c으로 옮깁니다.%d.\n", from, to, h);
		
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c으로 옮깁니다.%d.\n", n, from, to,h );
		
		hanoi_tower(n - 1, tmp, from, to);
	} h++;
}