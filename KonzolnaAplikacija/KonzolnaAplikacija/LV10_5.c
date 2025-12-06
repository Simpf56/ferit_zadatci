#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 9

int LV10_5() {
	int i, j, m;
	int niz[NIZ][NIZ] = { 0 };

	printf("Unesite dimenziju vase kvadratne matrice (min 3 max 8):\n");
	scanf("%d", &m);
	if (m < 3 || m > 8) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite broj x:\n");


	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			
		}
	}

	return 0;
}

/*Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3
≤ m < 9. Potom omogućiti mu popunjavanje te matrice. Također omogućiti korisniku unos realnog
broj 0 < x ≤ 1. Pomnožiti elemente sporedne dijagonale matrice s x te potom prepisati elemente
glavne dijagonale s njima. Ispisati matricu na ekran.*/