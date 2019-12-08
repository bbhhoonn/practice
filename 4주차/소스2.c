#include<stdio.h>

void main() {

	int arr[3][4];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = i + j;
			printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
		}
		printf("\n");
	}
	\
	getch();
}