#include<stdio.h>

int main() {
	/*�� ������ �Է� �޾� �� ������ ����, ����, ����, ������ ��� ���
	�� �Ǽ��� �Է� �޾� �� �Ǽ��� ����, ������ ��� ���*/
	int a1, a2;
	float b1, b2;

	printf("�� ������ �Է��ϼ���\n");
	scanf_s("%d %d", &a1, &a2);
	printf("�� �Ǽ��� �Է��ϼ���\n");
	scanf_s("%f %f", &b1, &b2);

	printf("%d + %d = %d\n", a1,a2,a1+a2);
	printf("%d - %d = %d\n", a1, a2, a1 - a2);
	printf("%d * %d = %d\n", a1, a2, a1 * a2);
	printf("%d / %d = %d\n", a1, a2, a1 / a2);

	printf("%f * %f = %f\n", b1, b2, b1 * b2);
	printf("%f / %f = %f\n", b1, b2, b1 / b2);

	return 0;

}