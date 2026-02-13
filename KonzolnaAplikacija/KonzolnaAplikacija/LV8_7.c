#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define NIZ 51

int LV8_7() {
	char string1[NIZ];
	char string2[NIZ];
	int i;
	int brojMalihPrvi = 0;
	int brojVelikihPrvi = 0;
	int brojMalihDrugi = 0;
	int brojVelikihDrugi = 0;
	int duljinaPrvi, duljinaDrugi;

	printf("Unesite dva stringa sa maksimalno 50 znakova:\n");
	fgets(string1, NIZ, stdin);
	duljinaPrvi = strlen(string1)-1;
	printf("Unesite drugi string:\n");
	fgets(string2, NIZ, stdin);
	duljinaDrugi = strlen(string2);

	for (i = 0; i < duljinaPrvi; i++) {
		if (string1[i] >= 'A' && string1[i] <= 'Z') {
			brojVelikihPrvi++;
		}
		if (string1[i] >= 'a' && string1[i] <= 'z') {
			brojMalihPrvi++;
		}
	}

	for (i = 0; i < duljinaDrugi; i++) {
		if (string2[i] >= 'A' && string2[i] <= 'Z') {
			brojVelikihDrugi++;
		}
		if (string2[i] >= 'a' && string2[i] <= 'z') {
			brojMalihDrugi++;
		}
	}

	if (brojVelikihPrvi < brojVelikihDrugi) {
		printf(string1);
	}
	else if (brojVelikihDrugi < brojVelikihPrvi) {
		printf(string2);
	}
	else if (brojVelikihPrvi == brojVelikihDrugi) {
		if (brojMalihPrvi < brojMalihDrugi) {
			printf(string1);
		}
		else if (brojMalihDrugi < brojMalihPrvi) {
			printf(string2);
		}
		else {
			printf(string1);
			printf(string2);
		}
	}



	return 0;
}

/*Omogućiti korisniku unos dva stringa od maksimalno 50 znakova. Ispisati na ekran onaj string koji
ima manje velikih slova. Ako oba imaju jednak broj velikih slova, ispisati onaj s manje malih slova
ili oba ukoliko su i u tom smislu jednaki.*/