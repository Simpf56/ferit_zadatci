#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV7_1() {
	int i;
	int niz[10];
	printf("Unesite 10 cijelih brojeva: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &niz[i]);
	}


	printf("Brojevi koji su djeljivi sa 5: ");
	for (i = 0; i < 10; i++) {
		if (niz[i] % 5 == 0) {
			printf("%d ", niz[i]);
		}
	}
	

	return 0;
}