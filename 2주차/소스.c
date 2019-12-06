#include<stdio.h>

int main()
{
	int a, b;
	int result;
	char k; //문자형으로 받을땐 char  ※주의※
	printf(" 첫번째 값을 입력해주세요 ==>  ");
	scanf_s("%d", &a);
	printf("+, -, *, / 중 하나를 입력해 주십시오 ==>  ");
	scanf_s("%*c%c", &k, 1);
	printf(" 두번째 값을 입력해주세요 ==>  ");
	scanf_s("%d", &b);
	if (k == '+') {
		result = a + b;
		printf("%d + %d = %d \n", a, b, result);
	}
	if (k == '-') {
		result = a - b;
		printf("%d - %d = %d \n", a, b, result);
	}
	if (k == '*') {
		result = a * b;
		printf("%d * %d = %d \n", a, b, result);
	}
	if (k == '/') {
		if (b != 0) {//0으로 나눌때 오류 방지
			result = a / b;
			printf("%d / %d = %d \n", a, b, result);
		}
		else
			printf("0으로 나누시면 안됍니당 ^*^ \n");
	}

	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d \n", a, b, result);
		}
		else
			printf("0으로 나누면 나머지 값이 안됩니다. \n");
	}
	return 0;
}