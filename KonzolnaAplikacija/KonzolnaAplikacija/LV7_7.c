#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#define VEL_POLJA 12

int LV7_7() {
	int i, n = 0;
	float max = 0, min = 0;
	float niz[VEL_POLJA];
	int brojacMax = 0, brojacMin = 0;

	printf("Unesite velicinu niza (3-12): \n");
	while (n < 3 || n > 12) {
	scanf("%d", &n);
	if (n < 3 || n > 12) {
			printf("Krivi upis! \n");
		}
	}

	printf("Unesite vaše realne brojeve: \n");
	scanf("%f", &niz[0]);
	max = niz[0];
	min = niz[0];

	for (i = 1; i < n; i++) {
	scanf("%f", &niz[i]);
		if (niz[i] > max) {
			max = niz[i];
		}
		if (niz[i] < min) {
			min = niz[i];
		}
	}
	

	for (i = 0; i < n; i++) {
		if (niz[i] == max && !brojacMax) {
			niz[i] = min;
			brojacMax = 1;
		}
		else if (niz[i] == min && !brojacMin) {
			niz[i] = max;
			brojacMin = 1;
		}
	}

	printf("Rezultat:\n");
	for (i = 0; i < n; i++) {
		printf("%.2f ", niz[i]);
	}

	return 0;
}



/*7. Omogućiti korisniku unos n (2 < n < 13) vrijednosti elemenata u polje realnih brojeva. Pronaći
najmanju i najveću vrijednost u polju i zamijeniti njihova mjesta u polju. Potom na ekran ispisati
izmijenjeno polje.*/