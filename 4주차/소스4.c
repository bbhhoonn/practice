#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	char str[51];
	printf("50자 이하의 소문자 알파벳 입력 : ");
	scanf("%s", str);

	int i = 0;
	while (str[i++] != '\0');

	i = i - 2;

	printf("입력한 문자의 홀수번쨰를 대문자화하여 출력 \n");
	for (int k = 0; k <= i; k++) {
		printf("%c", k % 2 == 0 ? str[k] - 32 : str[k]);
	}
	printf("\n");
	getch();
}