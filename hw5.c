#pragma warning(disable : 4996)
#include <stdio.h>

int main(void) {
	int arr[5];
	int arr2[3], arr3[3];
	int a;
	int k = 0;
	int l = 0;

	printf("5개의 정수를 입력하세요. :");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a);
		arr[i] = a;
	}

	for (int j = 0; j < 5; j++) {
		if (arr[j] % 2 != 0) {
			arr2[k] = arr[j];
			k++;
		}

		if (arr[j] % 2 == 0) {
			arr3[l] = arr[j];
			l++;
		}
	}
	printf("홀수 출력: ");
	for (int b = 0; b < k; b++) {
		printf(" %d", arr2[b]);
	}
	printf("\n짝수 출력: ");
	for (int c = 0; c < l; c++) {
		printf(" %d", arr3[c]);
	}
}