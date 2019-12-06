#include<stdio.h>

void main() {

	int i;
	printf("Insert i value : ");
	scanf_s("%d", &i);

	int j = (i == 1) || (i == 2) || (i == 3);
	int k = (i >= 1) && (i <= 10);
	printf("j = %d, k = %d\n", j, k);
}