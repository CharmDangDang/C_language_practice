#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int i, x, y, red, green, blue;

	HDC hdc= GetWindowDC(GetForegroundWindow());

	srand((unsigned)time(NULL));
	for (i = 0; i < 2000000; i++)
	{
		x = rand() % 500;
		y = rand() % 500;

		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;

		SetPixel(hdc, x, y, RGB(red, green, blue));
		
	}
	_getch();
	return 0;
}