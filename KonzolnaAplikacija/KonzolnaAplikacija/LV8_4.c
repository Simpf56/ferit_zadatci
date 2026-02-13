#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define MAX_STRING 75


int LV8_4() {
	char string[MAX_STRING];
	int i;
	int brojac = 0;
	int imaET = 0;
	int imaTocku = 0;

	printf("Unesite string od maksimalno 75 znakova:\n");
	fgets(string, MAX_STRING, stdin);

	for (i = 0; i < strlen(string); i++) {
		if (string[i] == '@') {
			imaET++;
		}
		if (string[i] == '.') {
			imaTocku++;
		}
	}

	if (imaET > 0 && imaTocku > 0) {
		printf("String je email.");
	}
	else {
		printf("String nije email.");
	}


	return 0;
}


/*Omogućiti korisniku unos jednog stringa od maksimalno 75 znakova. Provjeriti i na ekran ispisati
odgovarajuću poruku, ima li string oblik adrese e-pošte (sadrži znak @ i nakon njega točku).*/