#include <stdio.h>

void main() {
	int arr[][3] = {10,20,30,40,50};

	int aaa[3][5];
	int total = 0;
	int sum[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("aaa[%d][%d]:", i, j);
			scanf_s("%d", &aaa[i][j]);
			total += aaa[i][j];
			sum[i] += aaa[i][j];
		}
		printf("\n");
		printf("sum%d:%d",i,sum[i]);
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%4d\t", aaa[i][j]);
		}
		printf("\n");
	}

	printf("total:%d", total);
}