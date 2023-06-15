#include <stdio.h>
#include <stdlib.h>

void increase(int* p) {
	(*p)++;
}

void output(int* p) {
	printf("%d\n", *(p + 0));
	printf("%d\n", *(p + 1));
	printf("%d\n", *(p + 2));

	printf("%d\n", p[0]);
	printf("%d\n", p[1]);
	printf("%d\n", p[2]);


}

void main() {
	char* names[3] = { "sam","hello","rulu" };

	printf("%c", names[0][1]);
	int* p = NULL;
}


void arrarr() {
	int aaa[3] = { 10,20,30 };
	int bbb[3] = { 100,200,300 };
	int ccc[3] = { 1000,2000,3000 };

	int* ps[3] = { aaa ,bbb,ccc };
	printf("%d", ps[1][1]);
}

void string() {
	char aaa[10] = "Hello";
	printf("%s\n", aaa);

	char* p = "android";
	printf("%s\n", p);
}

void exIncrease() {
	int a = 10;
	printf("a: %d\n", a);

	increase(&a);
	printf("a: %d\n", a);
}

void ex1() {
	int a = 10;
	int* p = &a;

	printf("%p \n", &a);
	printf("%p \n", p);

	//p가 가진 주소안에 있는 데이터를 출력해보기
	printf("%d \n", *p);


	double b = 3.14;
	double* p2 = &b;
	printf("%lf \n", *p2);

	char c = 'G';
	char* p3 = &c;
	printf("%c \n", *p3);


	int num = 100;
	int* pp = &num;

	*pp = 200;
	printf("%d \n", num);

	printf("input : ");
	scanf_s("%d", pp);
	printf("%d \n", num);
}