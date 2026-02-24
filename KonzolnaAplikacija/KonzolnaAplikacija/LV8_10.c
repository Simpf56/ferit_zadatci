#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define NIZ 21
#define NOVI 41

int LV8_10() {
	char string1[NIZ];
	char string2[NIZ];
	char string3[NOVI];
	int i,j,duljina1,duljina2;
	int brojac = 0;

	printf("Unesite string sa maksimalno 20 znakova:\n");
	scanf(" %20s", string1);
	duljina1 = strlen(string1);

	printf("Unesite drugi string sa maksimalno 20 znakova\n");
	scanf("%20s", string2);
	duljina2 = strlen(string2);

	for (i = 0; i < duljina1; i++) {
		string3[i] = string1[i];
		brojac++;
	}

	for (i = brojac; i < duljina2+brojac; i++) {
		string3[i] = string2[i-brojac];
	}

	string3[brojac + duljina2] = '\0';

	printf("%s", string3);


	return 0;
}

/*Omogućiti korisniku unos dva stringa od maksimalno 20 znakova. Spojiti ta dva stringa u jedan novi
string te ga potom ispisati na ekran. Nije dozvoljeno koristiti funkcije standardne biblioteke za
ostvarivanje zamjene slova.*/