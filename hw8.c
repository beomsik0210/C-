#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

void convCase(char*str)
{
	int i;
	int len;
	len = strlen(str);
	const int diff = 'a' - 'A';
	for (i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;

		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
		else
			continue;
	}
}


int main(void) {
	
	char str[512] = {0};
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	convCase(str);
	
	printf("Output> %s", str);
	return 0;
}