#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV6_1() {
	int broj,i;

	printf("Upisite broj između 5 i 25\n");
	scanf("%d", &broj);

	if (broj >= 5 && broj <= 25) {
		for (i = 0; i < broj; i++) {
			printf("*");
		}
	}
	else {
		printf("Pogresan unos!");
	}

	return 0;
}