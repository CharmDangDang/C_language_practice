#include <stdio.h>
int main()
{
	double ls, st, second,bun;
	ls = 300000.0;
		st = 149600000.0;
		second = st / ls;
		printf("빛의 속도는 초속 %.2fkm이고,\n", ls);
			printf("태양과 지구와의 거리는 %.2fkm입니다.\n", st);
			printf("빛이 지구에 도달하는 시간은 약 %.2f초입니다.\n", second);
			bun = (int)second/60;
			printf("%d분 %d초\n", (int)second / 60, (int)second % 60);
				
}