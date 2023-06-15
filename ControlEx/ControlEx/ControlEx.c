#include <stdio.h>

void main() {
	//문제1
	/*int num, i=0;
	printf("양의 정수: ");
	scanf_s("%d", &num);
	while (i < num)
	{
		printf("Hello Wolrd!\n");
		i++;
	}*/

	//문제2
	//int num;
	//printf("양의 정수: ");
	//scanf_s("%d", &num);
	//for (int i = 1; i < num+1; i++)
	//{
	//	printf("%d ", i * 3);
	//}

	//문제3
	//int num, sum = 0;
	//while (1) {
	//	printf("양의 정수: ");
	//	scanf_s("%d", &num);
	//	sum += num;
	//	if (num == 0)
	//	{
	//		printf("%d", sum);
	//		break;
	//	}
	//}

	//문제4
	//int num;
	//printf("몇단: ");
	//scanf_s("%d", &num);
	//for (int i = 9; i > 0; i--)
	//{
	//	printf("%d * %d = %d\n", num, i, num * i);
	//}

	//문제5
	//for (int i = 1; i < 100; i++)
	//{
	//	if (i % 7 == 0 || i % 9 == 0) {
	//		printf("%d\n", i);
	//	}
	//}

	//문제6
	//int num1, num2;
	//printf("num1: ");
	//scanf_s("%d", &num1);
	//printf("num2: ");
	//scanf_s("%d", &num2);
	//if (num1 - num2 >= 0)
	//{
	//	printf("%d", num1 - num2);
	//}
	//else {
	//	printf("%d", num2 - num1);
	//}

	//문제7
	//int num1, num2, sum;
	//printf("num1: ");
	//scanf_s("%d", &num1);
	//printf("num2: ");
	//scanf_s("%d", &num2);
	//sum = num1 - num2 >= 0 ? num1 - num2 : num2 - num1;
	//printf("%d", sum);

	//문제8
	//for (int i = 2; i < 9; i += 2) {
	//	for (int j = 1; j < i+1; j++) {
	//		printf("%d * %d = %d\n", i, j, i * j);
	//	}
	//}

	//문제9
	//int num, count, sum = 0;
	//double avrg;
	//printf("몇개의 정수를 입력 받을 것인가? ");
	//scanf_s("%d", &count);
	//for (int i = 1; i < count+1; i++) {
	//	printf("정수%d:", i);
	//	scanf_s("%d", &num);
	//	sum += num;
	//}
	//printf("평균 값: %.2lf", (double)sum / count);

	//문제10
	//int count = 1, num, sum = 0;
	//while (count < 6)
	//{
	//	printf("정수%d:", count);
	//	scanf_s("%d", &num);
	//	if (num < 1) {
	//		printf("1 이상의 정수를 입력하세요!!\n");
	//		continue;
	//	}
	//	sum += num;
	//	count++;
	//}
	//printf("5개의 정수의 합:%d", sum);

	//문제11
	//for (int i = 0; i < 5; i++)
	//{

	//	for (int j = 0; j < i; j++)
	//	{
	//		printf("o");
	//	}
	//	printf("*\n");
	//}

	//int i = 0;
	//while (i < 5)
	//{
	//	int j = 0;
	//	while (j < i)
	//	{
	//		printf("o");
	//		j++;
	//	}
	//	printf("*\n");
	//	i++;
	//}

	//223- 문제3
	//int score;
	//printf("점수: ");
	//scanf_s("%d", &score);
	//switch (score)
	//{
	//case 90:
	//case 91:
	//case 92:
	//case 93:
	//case 94:
	//case 95:
	//case 96:
	//case 97:
	//case 98:
	//case 99:
	//	printf("A\n");
	//	break;
	//case 80:
	//case 81:
	//case 82:
	//case 83:
	//case 84:
	//case 85:
	//case 86:
	//case 87:
	//case 88:
	//case 89:
	//	printf("B\n");
	//	break;

	//default:
	//	printf("F");
	//	break;
	//}

}