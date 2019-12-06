#include<stdio.h>
#pragma warning(disable:4996)

void main() {

	int input;
	printf("정수를 입력하세요 : ");
	scanf("%d", &input);

	if (input > 0) {
		printf("입력하신 정수는 양수 \n");
	}
	else if (input < 0) {
		printf("입력하신 정수는 음수 \n");
	}
	else {
		printf("입력하신 정수는 0 \n");
	}
}