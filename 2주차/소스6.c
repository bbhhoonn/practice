#include<stdio.h>
#pragma warning(disable:4996)

void main() {

	int i;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &i);
	(i == 0) ? printf("�Է��Ͻ� ������ 0") :
		printf("�Է��Ͻ� ������ %s", (i % 2 == 0) ? "¦��":"Ȧ��");
}