#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

double variance(double* a, double b, int c) {
	int i;
	double v = 0;
	for (i = 0; i < 5; i++) {
		v = v + pow(a[i] - b, 2);
	}
	v = v / c;
	return v;
}

void Showstandard(double x) {
	double s = 0;
	s = sqrt(x);
	printf("Standard Deviation = %.3lf \n", s);
}

int main(void) {
	double arr1[5];
	double x[5];
	int i;

	int n = 5;
	double m = 0;
	double v = 0;
	double avg = 0;

	printf("Enter 5 real numbers: ");

	for (i = 0; i < 5; i++) {
		scanf_s("%lf", &arr1[i]);
	}
	
	for (i = 0; i < 5; i++) {
		m = m + arr1[i];
	}
	
	avg = m / n;

	v = variance(arr1, avg, n);

	Showstandard(v);
}