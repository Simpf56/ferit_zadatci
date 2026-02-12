#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#define NIZ 13

int LV10_8() {
	int i, j, m;
	float niz[NIZ][NIZ];

	printf("Unesite velicinu vase matrice:\n");
	scanf("%d", &m);
	if (m < 4 || m > 12) {
		printf("Krivi unos!");
		return 0;
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%f", &niz[i][j]);
		}
	}

	printf("REZULTATI:\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i + j > m - 1 && niz[i][j] > 0) {
				printf("%.2f ",niz[i][j]);
			}
			if (i < j && niz[i][j] > 0) {
				printf("%.2f ", niz[i][j]);
			}
		}
	}

	return 0;
}

/*Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3
< m < 13 te potom popunjavanje matrice. Ispisati sve elemente ispod sporedne i iznad glavne
dijagonale čija je vrijednost veća od 0*/