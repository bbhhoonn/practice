#include<stdio.h>

void main() {
	int c;
	char str[] = "CProgamming";

	printf("|-----------|\n");

	for (c = 11; c >= 0; c--)
		printf("%12.*s|\n", c + 1, str);
	getch();
}
 