#pragma warning (disable : 4996)
#include <stdio.h>

int main(void) {
	int n1, n2;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d %d", &n1, &n2);

	printf("%d & %d = %d \n", n1, n2, n1 & n2);
	printf("%d | %d = %d \n", n1, n2, n1 | n2);
	printf("%d ^ %d = %d", n1, n2, n1 ^ n2);

	return 0;
}