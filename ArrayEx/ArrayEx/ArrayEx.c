#include <stdio.h>


void main() {
	int arr[5], max, min, sum;
	for (int i = 0; i < 5; i++) {
		printf("element%d:", i);
		scanf_s("%d", &arr[i]);
	}



















}



int input() {
	int a;
	printf("input: ");
	scanf_s("%d", &a);
	return a;
}
////문제4
//int arr1[4][3] = {
//	{23,75,85},
//	{12,77,51},
//	{25,66,30},
//	{19,90,88}
//};
//int arr2[4][3] = {
//	{11,15,47},
//	{74,85,69},
//	{57,86,28},
//	{90,22,33}
//};
//int arrSum[4][3];
//int arrSub[4][3];

//for (int i = 0; i < 4; i++) {
//	for (int j = 0; j < 3; j++) {
//		arrSum[i][j] = arr1[i][j] + arr2[i][j];
//		arrSub[i][j] = arr1[i][j] - arr2[i][j];
//		arrSub[i][j] = arrSub[i][j] >= 0 ? arrSub[i][j] : -arrSub[i][j];
//		printf("%d ", arrSum[i][j]);
//	}
//	printf("\n");
//}
//printf("\n\n");

//for (int i = 0; i < 4; i++) {
//	for (int j = 0; j < 3; j++) {
//		printf("%d ", arrSub[i][j]);
//	}
//	printf("\n");
//}


//문제2
//int apt[3][3], sum = 0;
//for (int i = 0; i < 3; i++) {
//	for (int j = 0; j < 3; j++) {
//		printf("%d층 %d호의 가족은 몇 명입니까? : ", i+1, j+1);
//		scanf_s("%d", &apt[i][j]);
//		sum += apt[i][j];
//	}
//}
//	printf("열혈아파트 총 주민수는 %d명입니다.", sum);


//문제1
//int array1[2][4] = { {1,2,3,4},{5,6,7,8} };
//int array2[4][2];

//for (int i = 0; i < 2; i++) {
//	for (int j = 0; j < 4; j++) {
//		array2[j][1-i] = array1[i][j];
//	}
//}

//for (int i = 0; i < 4; i++) {
//	for (int j = 0; j < 2; j++) {
//		printf("%d", array2[i][j]);
//		
//	}
//	printf("\n");
//}


//문제5
//float mul[5];
//float a[5] = { 2.2,3.5,2.5,10.1,4.0 };
//float b[5] = { 3.3,2.0,4.0,1.0,2.5 };
//for (int i = 0; i < 5; i++)
//{
//	mul[i] = a[i] * b[i];
//	printf("%lf\n", mul[i]);
//}


//문제2
//int score[10], sum=0, avrg;
//for (int i = 0; i < sizeof(score)/sizeof(int); i++) {
//	score[i] = input();
//	sum += score[i];
//}
//printf("총점:%d\n", sum);
//printf("평균:%d", sum/ 10);
//}