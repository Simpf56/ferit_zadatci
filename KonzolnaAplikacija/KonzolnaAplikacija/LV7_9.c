#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#define VEL_NIZA 12

int LV7_9() {
	int q, i;
	float niz[VEL_NIZA];

	printf("Unesite broj elemenata niza (6-12): \n");
	scanf("%d", &q);
	if (q <= 5 || q > 12) {
		printf("Krivi unos!");
		return 2;
	}

	for (i = 0; i < q; i++) {
		scanf("%f", &niz[i]);
		if ((int)niz[i] % 2 == 0) {
			niz[i] /= 10;
		}
		else {
			niz[i] /= (-10);
		}
	}

	printf("Brojevi nizua su: \n");
	for (i = 0; i < q; i++) {
		printf("%.2f ",niz[i]);
	}
		
	return 0;
}

/*Omogućiti korisniku unos q (5 < q ≤ 12) vrijednosti elemenata u polje realnih brojeva. Podijeliti
vrijednosti svakog elementa polja koji ima parni indeks s vrijednosti 10, a koji ima neparni indeks s
vrijednosti -10. Potom na ekran ispisati izmijenjeno polje.*/