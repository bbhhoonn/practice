#include<stdio.h>

void main() {
	
	//함수사용 X

	int num = 5;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 5-i; j++) {
			printf("*");
		}
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i+1; j++) {
			printf("*");
		}
		for (int k = 1; k <= i; k++) {
			printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i+1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 5-i; k++) {
			printf("*");
		}
		printf("\n");
	}
	getch();
}