#include<stdio.h>

void main() {

	int input;
	printf("1�Ǵ� 2�� �Է�  ");
	scanf_s("%d", &input);

	switch (input) {
	case 1:
		printf("1�� �Է��ϼ̽��ϴ�.");
		break;
	case 2:
		printf("2�� �Է��ϼ̽��ϴ�.");
		break;
	default:
		printf("1�� 2 �̿��� �Է��Դϴ�.");

	}
	return 0;
}
		

