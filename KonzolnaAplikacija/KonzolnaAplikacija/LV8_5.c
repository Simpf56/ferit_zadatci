#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define MAX_STRING 80

int LV8_5() {
	char string[MAX_STRING];
	int i;
	int brojac = 0;

	printf("Unesite string od maksimalno 80 znakova\n");
	fgets(string, MAX_STRING, stdin);

	for (i = 0; i < strlen(string); i++) {
		if (string[i] == 'm' && string[i + 1] == 'a') {
			brojac++;
		}
	}

	printf("U stringu se nalazi %d puta slog ma.", brojac);

	return 0;
}


/*Omogućiti korisniku unos jednog stringa od maksimalno 80 znakova. Pronaći i na ekran ispisati
koliko se puta u njemu pojavljuje slog "ma".*/