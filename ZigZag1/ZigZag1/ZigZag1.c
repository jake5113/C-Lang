#include <stdio.h>

void main() {
	int numMax, numLine;
	printf("ZigZag ���� ������α׷��Դϴ�.\n");
	printf("����ϰ��� �ϴ� �ִ밪�� �Է��ϼ���: ");
	scanf_s("%d", &numMax);
	printf("���ٿ� ����ϰ��� �ϴ� ������ ������ �Է��ϼ���: ");
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