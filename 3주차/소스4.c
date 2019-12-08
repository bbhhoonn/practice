#include <stdio.h>

void main() {

	int i = 0;
	int input;
	int sum = 0;

	printf("숫자 네개를 입력하세요. 0은 무시됩니다. \n");

	while (i < 4) {
		printf("%d번째 숫자를 입력하세요 : ", i+1);
		scanf_s("%d", &input);
		if (input == 0) {
			continue;
		}
		sum += input;
		++i;
	}
		printf("4개 숫자의 합은 %d입니다. \n", sum);
		getch();
	}