#include<stdio.h>
#pragma warning(disable:4996)
void main() {
    float num1,num2;
	char op;

	printf("ù��° �Ǽ��� �Է��ϼ��� ");
	scanf_s("%f", &num1);
	printf("�ι�° �Ǽ��� �Է��ϼ��� ");
	scanf_s("%f", &num2);
	printf("�����ڸ� �Է��ϼ��� (+,-,*,/) ");
	scanf_s("%*c%c", &op,sizeof(op));
	
	switch (op) {
	case '+':
		printf("���� ��� : %f",num1+num2);
		break;
	case '-':
		printf("���� ��� : %f", num1 - num2);
	case '*':
		printf("���� ��� : %f", num1 * num2);
	case '/':
		if (num2 == 0) {
			printf("0���� ������ ���ʽÿ�");
		}
		else {
			printf("������ ��� : %f", num1 / num2);
		}
		break;
	default:
		printf("�־��� �����ڰ� �ƴմϴ�.");
		break;

	}
}
