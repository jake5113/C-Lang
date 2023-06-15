#include <stdio.h>

void main() {
	int numMax, numLine;
	printf("ZigZag 숫자 출력프로그램입니다.\n");
	printf("출력하고자 하는 최대값을 입력하세요: ");
	scanf_s("%d", &numMax);
	printf("한줄에 출력하고자 하는 숫자의 개수를 입력하세요: ");
	scanf_s("%d", &numLine);
	
	for (int i = 1; i < numMax + 1; i++) {
		printf("%-10d", i);
		if (i % numLine == 0) {
			printf("\n");
			for (int j = i + numLine; j > i; j--) {
				if (numMax < j) {
					printf("%10c",' ');
					continue;
				}
				printf("%-10d", j);
			}
			i += numLine;
			printf("\n");
		}
	}
}