#pragma warning (disable : 4996)
#include <stdio.h>

int main(void) {
	
	int n, t = 0;

	printf("Please enter a number: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			t++;
	}

	if (t == 2)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");

}