#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VEL_POLJA 12

int LV7_7() {
	int n, i;
	float max = 0, min = 0, rezerva;
	float niz[VEL_POLJA];

	printf("Unesite velicinu niza (3-12): \n");
	scanf("%d", &n);

	printf("Unesite vaše realne brojeve: \n");
	scanf("%f", &niz[0]);
	max = niz[0];
	min = niz[0];

	for (i = 1; i < n; i++) {
	scanf("%f", &niz[i]);
		if (niz[i] > max) max = niz[i];
		if (niz[i] < min) min = niz[i];
	}
	
	for (i = 0; i < n; i++) {
		if (niz[i] == max) niz[i] = min;
		if (niz[i] == min) niz[i] = max;
		printf("%.2f ", niz[i]);
	}

	return 0;
}



/*7. Omogućiti korisniku unos n (2 < n < 13) vrijednosti elemenata u polje realnih brojeva. Pronaći
najmanju i najveću vrijednost u polju i zamijeniti njihova mjesta u polju. Potom na ekran ispisati
izmijenjeno polje.*/