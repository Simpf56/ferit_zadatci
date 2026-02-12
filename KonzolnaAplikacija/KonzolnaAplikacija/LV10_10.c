#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#define NIZ 12

int LV10_10() {
	int i, j, m, n;
	float niz[NIZ][NIZ] = { 0 };
	float suma = 0;

	printf("Unesite broj redaka vase matrice:\n");
	scanf("%d", &m);
	if (m < 2 || m > 11) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite broj stupaca vase matrice:\n");
	scanf("%d", &n);
	if (n < 5 || n > 10) {
		printf("Krivi unos!");
		return 0;
	}

	//upis brojeva
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%f", &niz[i][j]);
		}
	}
	//ispis brojeva
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%.2f\t", niz[i][j]);
		}
		printf("\n");
	}

	printf("REZULTATI:\n");
	for (i = 0; i < m; i++) {
		suma = 0;
		for (j = 0; j < n; j++) {
			suma += niz[i][j];
		}
		suma /= n;
		printf("%.2f ", suma);
	}

	return 0;
}

/*Omogućiti korisniku unos dimenzije matrice (2-D polja) realnih brojeva m × n, gdje je 2 ≤ m < 12 i
4 < n ≤ 10 te potom popunjavanje matrice. Izračunati i na ekran ispisati aritmetičku sredinu svakog
retka matrice pojedinačno.*/