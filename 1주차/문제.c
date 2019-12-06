#include<stdio.h>

int main() {
	/*두 정수를 입력 받아 두 정수의 덧셈, 뺄셈, 곱셈, 나머지 결과 출력
	두 실수를 입력 받아 두 실수의 곱셈, 나눗셈 결과 출력*/
	int a1, a2;
	float b1, b2;

	printf("두 정수를 입력하세요\n");
	scanf_s("%d %d", &a1, &a2);
	printf("두 실수를 입력하세요\n");
	scanf_s("%f %f", &b1, &b2);

	printf("%d + %d = %d\n", a1,a2,a1+a2);
	printf("%d - %d = %d\n", a1, a2, a1 - a2);
	printf("%d * %d = %d\n", a1, a2, a1 * a2);
	printf("%d / %d = %d\n", a1, a2, a1 / a2);

	printf("%f * %f = %f\n", b1, b2, b1 * b2);
	printf("%f / %f = %f\n", b1, b2, b1 / b2);

	return 0;

}