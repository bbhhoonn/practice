#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	char str[51];
	printf("50�� ������ ���ڿ� �Է� : ");
	scanf("%s", str);

	int i = 0;
	while (str[i++] != '\0');
	
	i = i - 2;

	printf("�Է��� ���ڸ� �Ųٷ� ��� \n");
	for (; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
	getch();
}