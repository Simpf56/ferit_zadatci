#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#define NIZ 11

int LV10_2() {
	int i, j,m,n;
	int min = 0;
	int niz[NIZ][NIZ];
	
	printf("Unesite broj redaka(min 2 max 10:\n");
	scanf("%d", &n);
	if (n < 2 || n > 10) {
		printf("Krivi unos");
		return 0;
	}

	printf("Unesite broj stupaca(min 6 max 8):\n");
	scanf("%d", &m);
	if (m < 5 || m > 8) {
		printf("Krivi unos");
		return 0;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &niz[i][j]);
		}
	}

	min = niz[0][0];

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (niz[i][j]<min) {
				min = niz[i][j];
			}
		}
	}

	printf("%d", min);



	return 0;
}



/*Omogućiti korisniku unos dimenzija matrice realnih brojeva m x n (1 < m < 11 i 5 < n < 9) i njeno
popunjavanje. Pronaći i na ekran ispisati element matrice s najmanjom vrijednosti.*/