#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 111
#include "zadaci.h"

int LV8_9() {
	int i, j,z;
	char niz[NIZ];
	char nizdva[NIZ];
	int duzina = 0;
	char c = ' ';

	printf("Unesite vas string sa maximalno 110 znakova: \n");
	scanf("%110[^\n]", niz);
	duzina = strlen(niz);

	for (i = 0; i < duzina; i++) {
		

		if(niz[i] >= 65 && niz[i] <=90)
			for (j = 65; j < 91; j++) {
				if (j == niz[i]) {
					nizdva[i] = niz[i]+32;
				}
			}
		else if (niz[i] >= 97 && niz[i] <= 122) {
			for (z = 97; z < 123; z++) {
				if (z == niz[i]) {
					nizdva[i] = niz[i] - 32;
				}
			}
		}
		else {
			nizdva[i] = niz[i];
		}
	}

	printf("REZULTATI:\n");
	for (i = 0; i < duzina; i++) {
		printf("%c", nizdva[i]);
	}


	return 0;
}

/*Omogućiti korisniku unos jednog stringa od maksimalno 110 znakova. Potom zamijeniti svako malo
slovo ekvivalentnim velikim slovom i obrnuto. Na kraju ispisati string na ekran. Nije dozvoljeno
koristiti funkcije standardne biblioteke za ostvarivanje zamjene slova.*/