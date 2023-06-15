#include <stdio.h>
#include "GuGudanEx.h"

void main() {
	int i, j, k;
	for (k = 1; k < 10; k += 3) {
		for (i = 1; i < 10; i++) {
			for (j = k; j < k + 3; j++) {
				printf("%d * %d = %d\t", j, i, i * j);
			}
			printf("\n");
		}
		printf("\n");
	}



	/*for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 4; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
			if (j % 3 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 4; j < 7; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
			if (j % 3 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 7; j < 10; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
			if (j % 3 == 0) {
				printf("\n");
			}
		}
	}*/

}