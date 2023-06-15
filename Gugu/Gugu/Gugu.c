#include <stdio.h>

void main() {
	int a;
	printf("¸î´Ü:");
	scanf_s("%d", &a);

	for (int j = 1; j < 10; j++) {
		printf("%d * %d = %d\n", a, j, a * j);
	}
}
