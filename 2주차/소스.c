#include<stdio.h>

int main()
{
	int a, b;
	int result;
	char k; //���������� ������ char  �����ǡ�
	printf(" ù��° ���� �Է����ּ��� ==>  ");
	scanf_s("%d", &a);
	printf("+, -, *, / �� �ϳ��� �Է��� �ֽʽÿ� ==>  ");
	scanf_s("%*c%c", &k, 1);
	printf(" �ι�° ���� �Է����ּ��� ==>  ");
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
		if (b != 0) {//0���� ������ ���� ����
			result = a / b;
			printf("%d / %d = %d \n", a, b, result);
		}
		else
			printf("0���� �����ø� �ȉϴϴ� ^*^ \n");
	}

	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d \n", a, b, result);
		}
		else
			printf("0���� ������ ������ ���� �ȵ˴ϴ�. \n");
	}
	return 0;
}