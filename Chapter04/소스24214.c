#include <stdio.h>

int main(void)
{
	int id, pass, count;
	while (1)
	{
		printf("아이디를 입력하세욥 :");
		scanf("%d", &id);
		printf("패스워드를 입력하세염 : ");
		scanf("%d", &pass);
		count = check(id, pass);
		if (count == 1) break;
	}
	printf("로그인에 성공했습니다!. \n ");
}
int check(int id, int pass)
{
	int super_id = 91;
	int super_pass = 0711;
	static int cnt;


	if (super_id == id && super_pass == pass)
		return 1;
	else
	    printf("로그인에 실패 했어요 남은 기회 %d번\n", 3 - cnt);
		cnt++;
		return 0;
	if (cnt >= 3)
	{
		printf("횟수 초과 님 정지\n");
	}



}
void save(int amount)
{
	static int total;
	if (amount > 0)
		printf("%d\t\t", amount);
	else 
		printf("\t %d \t", amount);

	total += amount;
	printf("%d\n", total);
}