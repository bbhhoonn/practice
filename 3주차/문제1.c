#include<stdio.h>

void main() {

	for (int j = 1; j < 10; ++j) {
		for (int i = 1; i < 10; ++i) {
			printf("%d * %d = %2d  ", i, j, i*j);
		}
		printf("\n");
	}
	getch();

}