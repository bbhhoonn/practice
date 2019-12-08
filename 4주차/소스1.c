#include<stdio.h>

void main() {

	int arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = i + 1;
	}

	for (int j = 0; j < 5; j++) {
		if (arr[j] % 2 == 0) {
			arr[j] = 3 * arr[j];
		}
	}

	for (int k = 4; k >= 0; k--) {
		printf("%d ", arr[k]);
	}

	getch();


}