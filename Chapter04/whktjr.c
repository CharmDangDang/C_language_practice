#include <stdio.h> 

int main(void)
{
	int seat[10] = { 0 };

	char yorn;
	int wantyou;
	int wantyou2;
	int people;
	while (1)
	{
		printf("예약을 하시겠습니까? y or n \n");
		scanf(" %c", &yorn);
		if (yorn == 'y') {
			printf("몇분이신가요 2명까지 가능?\n");
			scanf("%d", &people);
			if (people == 1) {
				printf("현재 남아있는 좌석 \n");
				printf("1 2 3 4 5 6 8 9 10 \n");
				for (int b = 0; b < 10; b++) {
					printf("%d ", seat[b]);
				}
				printf("\n앉고 싶은 좌석을 선택해주세요\n");
				scanf("%d", &wantyou);
				if (seat[wantyou - 1] == 0) {
					printf("예약되었습니다...");
					seat[wantyou - 1] = 1;
				}
				else
					printf("이미 예약됐는뎁쇼?? 커플석만 남음 ㅋ\n");

			}
			else if (people == 2) {
				printf("현재 남아있는 좌석 \n");
				printf("1 2 3 4 5 6 8 9 10 \n");
				for (int b = 0; b < 10; b++) {
					printf("%d ", seat[b]);
				}
				printf("\n앉고 싶은 좌석을 선택해주세요\n");
				scanf("%d %d", &wantyou, &wantyou2);
				if (seat[wantyou - 1] == 0 && seat[wantyou2 - 1] == 0) {
					printf("예약되었습니다. 쩝 커플..\n");
					seat[wantyou - 1] = 1, seat[wantyou2 - 1] = 1;
				}
				else
					printf("이미 예약됐는뎁쇼?? 솔로석만 남음 ㅋ\n");
			}



		}
		else break;





	}
}