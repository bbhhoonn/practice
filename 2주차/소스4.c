#include<stdio.h>
#pragma warning(disable:4996)

void main() {

	int i, j;
	i = sizeof(int) % 3 + (21 / 4 >= 3) * 3;
	j = i++ * (9 - 2 * 3);
	printf("i = %d, j = %d\n", i, j);
	getch();
}