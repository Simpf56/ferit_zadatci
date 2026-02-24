#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define NIZ 81

int LV8_11() {
	char string1[NIZ];
	int i;
	char x;
	float srednja = 0.00;
	int brojac = 0;

	printf("Unesite string sa maksimalno 80 znakova:\n");
	fgets(string1,NIZ,stdin);
	int duljina = strlen(string1);

	if (duljina > 0 && string1[duljina - 1] == '\n') {
		string1[duljina - 1] = '\0';
		duljina--;
	}

	printf("Unesite jedan znak:\n");
	x = getchar();
	if (x == '\n') {
		x = getchar();
	}

	for (i = 0; i < duljina; i++) {
		srednja += string1[i];
		brojac++;
	}

	srednja /= brojac;

	for (i = 0; i < duljina; i++) {
		if (string1[i] < srednja) {
			string1[i] = x;
		}
	}

	printf("%s", string1);

	return 0;
}


/*Omogućiti korisniku unos jednog stringa od maksimalno 80 znakova. Potom dodatno omogućiti
unos jednog znaka. Zamijeniti tim znakom sve znakove u stringu čija je ASCII vrijednost manja od
aritmetičke sredine svih znakova. Na ekran ispisati izmijenjeni string*/