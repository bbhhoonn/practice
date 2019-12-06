#include<stdio.h>
#pragma warning(disable:4996)
void main() {
    float num1,num2;
	char op;

	printf("첫번째 실수를 입력하세요 ");
	scanf_s("%f", &num1);
	printf("두번째 실수를 입력하세요 ");
	scanf_s("%f", &num2);
	printf("연산자를 입력하세요 (+,-,*,/) ");
	scanf_s("%*c%c", &op,sizeof(op));
	
	switch (op) {
	case '+':
		printf("덧셈 결과 : %f",num1+num2);
		break;
	case '-':
		printf("뺄셈 결과 : %f", num1 - num2);
	case '*':
		printf("곱셈 결과 : %f", num1 * num2);
	case '/':
		if (num2 == 0) {
			printf("0으로 나누지 마십시오");
		}
		else {
			printf("나눗셈 결과 : %f", num1 / num2);
		}
		break;
	default:
		printf("주어진 연산자가 아닙니다.");
		break;

	}
}
