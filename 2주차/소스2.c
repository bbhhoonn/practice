#include<stdio.h>

void main() {

	//부호 연산자
	int i=1,j;
	j = +i;
	printf("j = %d\n", j);
	j = -i;
	printf("j = %d\n", j);
	
	//증감 연산자
	i = 3;
	j = ++i;
	printf("i = %d, j = %d\n", i,j);
	j = i++;
	printf("i = %d, j = %d\n", i, j);

	//복합 할당 연산자
	i += j;
	j += i;
	printf("i = %d, j = %d\n", i, j);
	getch();
}