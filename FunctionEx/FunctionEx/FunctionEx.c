#include <stdio.h>

//연습문제1
int abs() {
	//문제1
	int num;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);
	num = num >= 0 ? num : -num;
	printf("절댓값은 : %d입니다.\n", num);
}

//연습문제2
int fiboR(int n) {
	if (n <= 2) {
		return 1;
	}
	else
	{
		return fiboR(n - 1) + fiboR(n - 2);
	}
}

//연습문제3
int inputInt() {
	int a;
	printf("input: ");
	scanf_s("%d", &a);
	return a;
}
int plus(int i, int j) {
	printf("%d + %d = %d\n", i, j, i + j);

}
int minus(int i, int j) {
	printf("%d - %d = %d\n", i, j, i - j);

}
int multiply(int i, int j) {
	printf("%d * %d = %d\n", i, j, i * j);

}
float divide(int i, int j) {
	printf("%d / %d = %lf\n", i, j, (float)i / j);
}
void testSlv3() {
	int num1, num2;
	num1 = inputInt();
	num2 = inputInt();
	plus(num1, num2);
	minus(num1, num2);
	multiply(num1, num2);
	divide(num1, num2);
}

//연습문제8
void testSlv8() {
	int a = sum(10);
	printf("%d", a);
}
int sum(int n) {
	if (n <= 1) {
		return 1;
	}
	else
	{
		return n + sum(n - 1);
	}
}

//문제1
void test_1() {
	int a, b, c;
	a = inputInt();
	b = inputInt();
	c = inputInt();
	max(a, b, c);
	min(a, b, c);
}
int max(int a, int b, int c) {
	int max = a > b ? a : a > c ? a : b > c ? b : c;
	printf("max: %d\n", max);
}
int min(int a, int b, int c) {
	int min = a < b ? a : a < c ? a : b < c ? b : c;
	printf("min: %d\n", min);
}

//문제2
double inputDbl() {
	double a;
	printf("input: ");
	scanf_s("%lf", &a);
	return a;
}
void CelToFah(double cel) {
	double fah = 1.8 * cel + 32;
	printf("cel: %lf\n", cel);
	printf("fah: %lf\n", fah);
}
void FahToCel(double fah) {
	double cel = (fah - 32) / 1.8;
	printf("fah: %lf\n", fah);
	printf("cel: %lf\n", cel);
}
void test_2() {
	double cel, fah;
	cel = inputDbl();
	CelToFah(cel);
	fah = inputDbl();
	FahToCel(fah);
}

//문제3****
void fibo(int n) {
	int i=0, sum = 1;
	while (i < n)
	{
		printf("%d ", sum);
		sum += sum + sum-1;
		i++;
	}
}

void main() {
	fibo(10);
}