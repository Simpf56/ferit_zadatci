#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV10_6() {
	int i, j;
	int nizA[3][4] = { 0 };
	int nizB[3][4] = { 0 };

	printf("Unesite vase vrijednosti tablice:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &nizA[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 3; j >= 0; j--) {
			nizB[i][3 - j] = nizA[i][j];
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", nizB[i][j]);
		}
		printf("\n");
	}

	return 0;
}


/*Omogućiti korisniku unos elemenata matrice (2-D polja) A dimenzije 3 × 4. Potom izračunati i na
ekran ispisati novu matricu B u kojoj će vrijednosti svakog retka biti zapisane obrnutim
redoslijedom u odnosu na A (prvi element u retku će postati zadnji i tako redom)*/