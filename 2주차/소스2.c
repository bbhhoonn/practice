#include<stdio.h>

void main() {

	//��ȣ ������
	int i=1,j;
	j = +i;
	printf("j = %d\n", j);
	j = -i;
	printf("j = %d\n", j);
	
	//���� ������
	i = 3;
	j = ++i;
	printf("i = %d, j = %d\n", i,j);
	j = i++;
	printf("i = %d, j = %d\n", i, j);

	//���� �Ҵ� ������
	i += j;
	j += i;
	printf("i = %d, j = %d\n", i, j);
	getch();
}