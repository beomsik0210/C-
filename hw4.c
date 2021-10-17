#pragma warning (disable : 4996)
#include <stdio.h>

int Binary(int n) {
	if (n < 1) {
		return;
	}

	Binary(n / 2);

	printf("%d", n % 2);
}



int main(void) {
	int n;

	printf("Please enter a number: ");
	scanf_s("%d", &n);

	Binary(n);

	return 0;
}