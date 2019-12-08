#include <stdio.h>

void main() {

	int i, input;
	i = 1;
	printf("아무 정수를 입력하세요. 0을 입력하면 입력을 종료합니다. \n");

	while (1) {
		printf("%d번째 숫자를 입력하세요 : ", i);
		scanf_s("%d", &input);
		if (input == 0) {
			printf("입력을 종료합니다. \n");
			break;
		}
		printf("%d번째 숫자는 %d입니다. \n", i++,input);
	}
}