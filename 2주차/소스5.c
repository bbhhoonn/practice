#include<stdio.h>
#pragma warning(disable:4996)

void main() {

	int input;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &input);

	if (input > 0) {
		printf("�Է��Ͻ� ������ ��� \n");
	}
	else if (input < 0) {
		printf("�Է��Ͻ� ������ ���� \n");
	}
	else {
		printf("�Է��Ͻ� ������ 0 \n");
	}
}