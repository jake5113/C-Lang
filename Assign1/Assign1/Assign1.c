#include <stdio.h>

int buf[5][5] = { 0 };

void Display(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d\t", buf[i][j]);
		}
		printf("\n");
	}
}

void main() {
	int num = 1, x = 0, y = 0;
	int i, k, j;
	int sign = 1;
	int size = 5;

	for (k = 0; k < 5; ++k) {
		buf[y][x] = num++;
		x += sign;
	}
	x -= 1;
	for (i = size - 1; i > 0; --i) {
		for (j = 0; j < i; ++j) {
			y += sign;
			buf[y][x] = num++;
		}
		sign *= -1;
		for (k = 0; k < i; ++k) {
			x += sign;
			buf[y][x] = num++;
		}
	}
	Display();
}