#include<stdio.h>

int main() {
	int a;
	float b;
	double c;

	printf("정수를 입력하세요 : \n");
	scanf_s("%d", &a);

	printf("실수를 입력하세요 : \n");
	scanf_s("%f", &b);

	printf("실수를 입력하세요 : \n");
	scanf_s("%lf", &c);

	printf("int : %d\n",a);
	printf("float : %f\n", b);
	printf("double : %f\n", c);
	
	return 0;
}