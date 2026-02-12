#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define NIZ 51

int LV8_2() {
	int i, brojac = 0;
	char niz[NIZ];
	char znak;
	int duzina;

	printf("Unesite 50 znakova: \n");
	scanf("%50[^\n]", niz);

	duzina = strlen(niz);

	printf("Unesite znak koji tražite: \n");
	scanf(" %c", &znak);

	for (i = 0; i < duzina; i++) {
		if (niz[i]==znak) {
			brojac++;
		}
	}	

	printf("Znak %c se pojavljuje: %d puta.\n",znak,brojac);

	printf("Znak se nalazi na mjestima: \n");
	for (i = 0; i < duzina; i++) {
		if (niz[i] == znak) {
			printf("%d ", i + 1);
		}
	}



	return 0;
}


//Tražiti od korisnika unos jednog stringa od maksimalno 50 znakova.Provjeriti i na ekran ispisati
//koliko se puta pojavljuje neka znamenka te na kojim mjestima.