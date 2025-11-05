#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV6_2() {
	int prvi, drugi;

	printf("Upisite dva broja od kojeg je drugi veci od prvog. \n");
	scanf(" %d %d", &prvi, &drugi);

	if (prvi > drugi) {
		printf("Krivi unos!");
		return 0;
	}

	for (int i = ++prvi; i < drugi; i++) {
		printf("%d ",i);
	}

	return 0;
}