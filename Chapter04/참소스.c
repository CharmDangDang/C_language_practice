#include <stdio.h>
int main(void)
{
	/*int prico1, paid,
	 ochon, chon, obac, change ,bac;
	printf("물건 값 입력하삼(백원단위) : \n");
	scanf("%d", &prico1);
	printf("얼마 내실거임? 거슬러드림(10원,50원짜리 사절) :\n");
	scanf("%d", &paid);
	
	change = paid - prico1;
	ochon = change / 5000;
	change = change % 5000;
	chon = change / 1000;
	change = change % 1000;
	obac = change / 500;
	change = change % 500;
	bac = change / 100;
	change = change % 100;

	printf("가격은 %d이고 내신돈은 %d입니다.\n", prico1, paid);
	printf("거스름돈은 오천원짜리 %d장 천원짜리 %d장\n", ochon, chon);
	printf("오백원짜리 %d개 백원짜리 %d개요 수고\n", obac, bac);

	change = 0;
	change = (prico1 || bac) + 3;
	print */

	int x, result;
	printf("년도를 입력하세요 :");
	scanf("%d", &x);
	result = (x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0);
		(result) ? printf("윤년입니다\n") : printf("평년입니다\n");
} 