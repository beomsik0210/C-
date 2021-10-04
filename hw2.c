#pragma warning(disable 4996)
#include <stdio.h>

int main(void) {
	
	double k, m;

	printf("Please enter kilometers: ");
	scanf_s("%lf", &k);
	
	m = k / 1.609;

	printf("%.1f% km is equal to %.1f miles", k, m);

}