#include<stdio.h>
#pragma warning(disable:4996)

void main() {
	char str[51];
	printf("50자 이하의 문자열 입력 : ");
	scanf("%s", str);

	int i = 0;
	while (str[i++] != '\0');
	
	i = i - 2;

	printf("입력한 문자를 거꾸로 출력 \n");
	for (; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
	getch();
}