#include<stdio.h>

void main() {
	float arr_1[2][3] = { { 70, 94, 70}, {80, 90, 85} };
	float arr_2[2][3] = { { 83, 95, 90}, {90, 60, 82} };
	float arr_3[2][3] = { { 98, 92, 91}, {89, 94, 87} };
	float sum1 = 0; 
	float sum2 = 0;
	float sum3 = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum1 += arr_1[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum2 += arr_2[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum3 += arr_3[i][j];
		}
	}

	printf("1¹İ ÀüÃ¼ Æò±Õ : %f\n", sum1 / 6);
	printf("2¹İ ÀüÃ¼ Æò±Õ : %f\n", sum2 / 6);
	printf("3¹İ ÀüÃ¼ Æò±Õ : %f\n", sum3 / 6);
}