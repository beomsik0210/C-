#pragma warning(diasble:4996)
#include <stdio.h>


typedef struct country {
	char name[20];
	char country[20];
	int population;

} Country;

void Show(Country* c) {
	printf("Printing the three cities:\n");
	printf("%s in %s with a population of %d people \n", c->name, c->country, c->population);
	}

int main(void) {
	Country arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf_s("%s", arr[i].name);
		printf("Country> ");
		scanf_s("%s", arr[i].country);
		printf("Population> ");
		scanf_s("%d", arr[i].population);
	}
	
	for (i = 0; i < 3; i++) {
		Show(&arr[i]);
	}
	return 0;
}