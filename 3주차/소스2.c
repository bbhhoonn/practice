#include <stdio.h>

void main() {

	int i, input;
	i = 1;
	printf("�ƹ� ������ �Է��ϼ���. 0�� �Է��ϸ� �Է��� �����մϴ�. \n");

	while (1) {
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i);
		scanf_s("%d", &input);
		if (input == 0) {
			printf("�Է��� �����մϴ�. \n");
			break;
		}
		printf("%d��° ���ڴ� %d�Դϴ�. \n", i++,input);
	}
}