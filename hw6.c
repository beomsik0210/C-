#pragma warning(disable :4996)
#include <stdio.h>

int main(void) {
	
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	int i,swap;

	int* a1 = &arr1[0];
	int* a2 = &arr2[0];
	printf("arr1:");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\narr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

	for (i = 0; i < 6; i++) {
		swap = *a1;
		*a1 = *a2;
		*a2 = swap;
		*a1++;
		*a2++;
	}

	printf("\n\nafter swap\n");
	printf("arr1: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\narr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
}