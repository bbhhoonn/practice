#include <stdio.h>

void main() {

	int i = 0;
	int input;
	int sum = 0;

	printf("���� �װ��� �Է��ϼ���. 0�� ���õ˴ϴ�. \n");

	while (i < 4) {
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i+1);
		scanf_s("%d", &input);
		if (input == 0) {
			continue;
		}
		sum += input;
		++i;
	}
		printf("4�� ������ ���� %d�Դϴ�. \n", sum);
		getch();
	}