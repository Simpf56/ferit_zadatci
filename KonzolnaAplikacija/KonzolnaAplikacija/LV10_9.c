#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 13

int LV10_9() {
	int i, j, m,n;
	float niz[NIZ][NIZ] = { 0 };
	float suma = 0;

	printf("Unesite broj redaka vase matrice:\n");
	scanf("%d", &m);
	if (m < 3 || m >= 13) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite broj stupaca vase matrice:\n");
	scanf("%d", &n);
	if (n < 2 || n > 14) {
		printf("Krivi unos!");
		return 0;
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%f", &niz[i][j]);
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%.2f ", niz[i][j]);
		}
		printf("\n");
	}

	printf("REZULTATI:\n");
	for (j = 0; j < n; j++) {
		suma = 0;
		for (i = 0; i < m; i++) {
			suma += niz[i][j];
		}
		suma /= m;
		printf("%.2f ", suma);
	}

	return 0;
}

/*Omogućiti korisniku unos dimenzije matrice(2 - D polja) realnih brojeva m × n, gdje je 3 ≤ m < 13 i
	2 ≤ n < 15 te potom popunjavanje matrice.Izračunati i na ekran ispisati aritmetičku sredinu svakog
	stupca matrice pojedinačno*/