#include<stdio.h>
#pragma warning(disable:4996)

void main() {

	int i;
	printf("정수를 입력하세요 : ");
	scanf("%d", &i);
	(i == 0) ? printf("입력하신 정수는 0") :
		printf("입력하신 정수는 %s", (i % 2 == 0) ? "짝수":"홀수");
}