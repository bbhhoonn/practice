#include<stdio.h>

int main() {
	int a;
	float b;
	double c;

	printf("������ �Է��ϼ��� : \n");
	scanf_s("%d", &a);

	printf("�Ǽ��� �Է��ϼ��� : \n");
	scanf_s("%f", &b);

	printf("�Ǽ��� �Է��ϼ��� : \n");
	scanf_s("%lf", &c);

	printf("int : %d\n",a);
	printf("float : %f\n", b);
	printf("double : %f\n", c);
	
	return 0;
}