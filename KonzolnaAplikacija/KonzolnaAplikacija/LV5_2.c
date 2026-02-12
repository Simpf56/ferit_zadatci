#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV5_2() {
	float x, y, min, rezultat;

	printf("Unesite dva realna broja:\n");
	scanf("%f %f",&x, &y);

	if (x < y) {
		min = x;
	}
	else {
		min = y;
	}

	if (x < 0) {
		x = -x;
	}

	rezultat = x * min;

	printf("Rezultat je %.2f!", rezultat);

	return 0;
}

// Omogućiti korisniku unos realnih brojeva x i y. Izračunati i ispisati na ekran vrijednost izraza
//		| x | × min{ x, y }.