#include<stdio.h>

void main() {

	int input;
	printf("1또는 2를 입력  ");
	scanf_s("%d", &input);

	switch (input) {
	case 1:
		printf("1을 입력하셨습니다.");
		break;
	case 2:
		printf("2을 입력하셨습니다.");
		break;
	default:
		printf("1과 2 이외의 입력입니다.");

	}
	return 0;
}
		

