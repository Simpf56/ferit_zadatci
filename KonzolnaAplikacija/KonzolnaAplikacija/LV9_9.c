#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV9_9() {
	int cijeliBroj;
	int obrnuti;
	printf("Unesite vas broj:\n");
	scanf("%d", &cijeliBroj);

	obrnuti = redoslijed(cijeliBroj);
	printf("REZULTAT:\n");
	printf("%d", obrnuti);
	return 0;
}

int redoslijed(int broj) {
	int novi = 0;
	while (broj > 0) {
		novi = novi * 10 + broj % 10;
		broj /= 10;
	}
	return novi;
}

/*Omogućiti korisniku unos jednog cijelog broja. Zatim napisati funkciju kojoj se predaje taj broj i iz
predanog cijelog broja izračunava i vraća broj u obrnutom redoslijedu, npr. Predaje se broj 1234,
a funkcija vraća 4321. Ispisati izmijenjeni broj u glavnom dijelu programa.*/