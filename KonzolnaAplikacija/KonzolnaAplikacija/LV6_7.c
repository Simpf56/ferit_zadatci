#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV6_7() {
	int broj,djelitelj,i;

	printf("Upisite broj: \n");
	scanf("%d", &broj);

	for (i = 1; i <= broj; i++) {
		if (broj % i == 0) {
			printf("%d ", i);
		}
	}


	return 0;
}