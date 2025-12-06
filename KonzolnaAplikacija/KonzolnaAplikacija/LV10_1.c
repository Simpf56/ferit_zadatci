#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV10_1() {
	int redovi, stupci;
	int matrica[2][4];

	for (redovi = 0; redovi < 2; redovi++) {
		for (stupci = 0; stupci < 4; stupci++) {
			scanf("%d", matrica[redovi][stupci]);
		}
	}

	for (stupci = 0; stupci < 4; stupci++) {
		for (redovi = 0; redovi < 2; redovi++) {
			printf("%d ", matrica[redovi][stupci]);
		}
		printf("\n");
	}

	return 0;
}



/*Omogućiti korisniku unos elemenata matrice A dimenzija 2 x 4. Potom, na ekran ispisati
transponiranu matricu, matrice A [(𝐴𝑇)𝑖,𝑗 = (𝐴)𝑗,𝑖]*/