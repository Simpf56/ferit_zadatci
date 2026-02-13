#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define NIZ 220

int LV8_8() {
	char string[NIZ];
	int i;
	float srednja = 0;
	int duljina;
	int brojac = 0;

	printf("Unesite recenicu od maksimalno 220 znakova.\n");
	fgets(string, NIZ, stdin);
	duljina = strlen(string);


	if (duljina > 0 && string[duljina - 1] == '\n') {
		string[duljina - 1] = '\0';
		duljina--;
	}

	for (i = 0; i < duljina; i++) {
		if (string[i] == ' ' || string[i]== '.') {
			continue;
		}
		srednja += (unsigned char)string[i];
		brojac++;
	}

	srednja = srednja / brojac;

	printf("Srednja vrijednost je %.2f.", srednja);

	return 0;
}

/*Omogućiti korisniku unos jedne rečenice od maksimalno 220 znakova. Odrediti i na ekran ispisati
srednju vrijednost svih znakova (njihove ASCII vrijednosti) u stringu osim razmaka i točki koje treba
preskočiti prilikom izračuna.*/