#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV6_9() {
	float suma = 0, sredina;
	int i,brojac = 0;

	for (i = 100; i < 1000; ++i) {
		if (i % 3 == 0) {
			brojac++;
			suma += i;
		}
	}

	printf("Aritmeticka sredina je %.2f",suma/brojac);

	return 0;
}