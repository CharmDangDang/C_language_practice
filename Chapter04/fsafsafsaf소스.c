#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>


void disp_car(int car_number, int distance)
{
	int i;

	printf("CAR #%d:", car_number);
	for(i = 0; i < distance / 10; i++ )
		printf("*");
	printf("\n");
}
int main(void)
{
	int max;

	int i;
	int car1_dist = 0, car2_dist = 0 , car3_dist = 0 ;

	srand((unsigned)time(NULL));
	for(i = 0; i < 15; i++) {
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		
		if (car1_dist > car2_dist && car1_dist > car3_dist)
			max = car1_dist;
		else if (car1_dist < car2_dist && car2_dist> car3_dist)
			max = car2_dist;
		else
			max = car3_dist;

		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		disp_car(3, car3_dist);
		for (int i = 0; i < max + 7; i++)
			printf("-");
		printf("\n");
		Sleep(200);
	}
	if (car1_dist > car2_dist && car1_dist > car3_dist)
		printf("CAR #1 辦蝓\n");
	else if (car1_dist < car2_dist && car2_dist> car3_dist)
		printf("CAR #2 辦蝓\n");
	else
		printf("CAR #3 辦蝓 六 \n");




}