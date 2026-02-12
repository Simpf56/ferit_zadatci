#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#define NIZ 13

int LV10_11() {
	int i, j, m, n,minStupac;
	float niz[NIZ][NIZ] = { 0 };
	float suma = 0,min;

	printf("Unesite broj redaka vase matrice:\n");
	scanf("%d", &m);
	if (m < 2 || m >= 10) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite broj stupaca vase matrice:\n");
	scanf("%d", &n);
	if (n < 3 || n >= 13) {
		printf("Krivi unos!");
		return 0;
	}
	//upis
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%f", &niz[i][j]);
		}
	}

	min = niz[0][0];
	minStupac = 0;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (min > niz[i][j]) {
				min = niz[i][j];
				minStupac = j;
			}
		}
	}

	printf("REZULTATI:\n");
	printf("%.2f ", min);
	for (i = 0; i < m; i++) {
		printf("%.2f ", niz[i][minStupac]);
	}
	return 0;
}


/*Napisati program u C jeziku koji omogućava korisniku unos dimenzije matrice (2-D polja) realnih brojeva m × n,
gdje je 2 ≤ m < 11 i 2 < n < 13 te potom popunjavanje matrice (VPL se ponaša kao unos s tipkovnice). 
Potrebno je pronaći najmanju vrijednost u cijeloj matrici te nakon poruke REZULTATI:\n ispisati najmanju vrijednost i 
cijeli stupac u kojem se nalazi ta najmanja vrijednost na
ekran s preciznošću na od decimalna mjesta. Testiranje obaviti unutar main() funkcije.*/