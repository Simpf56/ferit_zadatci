#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define NIZ 120

int LV8_6() {
	char string[NIZ];
	int i;
	int brojac = 0;
	int brojacMalih = 0;
	int brojacVelikih = 0;
	float postotakMalih;
	float postotakVelikih;
	int duzina;

	printf("Unesite string sa maksimalno 120 znakova.\n");
	fgets(string, NIZ, stdin);
	duzina = strlen(string);

	for (i = 0; i < duzina; i++) {
		if (string[i] >= 'A' && string[i] <= 'Z') {
			brojacVelikih++;
		}
		if (string[i] >= 'a' && string[i] <= 'z') {
			brojacMalih++;
		}
	}

	postotakVelikih = (float)brojacVelikih / duzina * 100.0;
	postotakMalih = (float)brojacMalih / duzina * 100.0;

	printf("Postotak velikih slova u stringu je %.2f%%.\n", postotakVelikih);
	printf("Postotak malih slova u stringu je %.2f%%.", postotakMalih);

	return 0;
}

/*Omogućiti korisniku unos jednog stringa od maksimalno 120 znakova. Odrediti i na ekran ispisati
koliki postotak znakova čine mala, a koliki velika slova.*/