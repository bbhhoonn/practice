#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	char str[51];
	printf("50�� ������ �ҹ��� ���ĺ� �Է� : ");
	scanf("%s", str);

	int i = 0;
	while (str[i++] != '\0');

	i = i - 2;

	printf("�Է��� ������ Ȧ�������� �빮��ȭ�Ͽ� ��� \n");
	for (int k = 0; k <= i; k++) {
		printf("%c", k % 2 == 0 ? str[k] - 32 : str[k]);
	}
	printf("\n");
	getch();
}