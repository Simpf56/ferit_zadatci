#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV6_3() {

	float broj, srednjaVrijednost;
	float ukupno = 0;
	printf("Unesite 8 realnih brojeva: \n");

	for (int i = 0; i < 8; i++) {
		scanf("%f", &broj);
		ukupno += broj;
		printf("Suma = %.2f\n", ukupno);
	}

	srednjaVrijednost = ukupno / 8;
	printf("Srednja vrijednost je %.2f", srednjaVrijednost);

	return 0;
}