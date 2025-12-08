#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 15

int LV10_12() {
	int i, j, m, n;
	float niz[NIZ][NIZ] = { 0 };
	float suma = 0;

	printf("Unesite broj redaka:\n");
	scanf("%d", &m);
	if (m < 3 || m >= 13) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite broj stupaca:\n");
	scanf("%d", &n);
	if (n < 2 || n >= 15) {
		printf("Krivi unos!");
		return 0;
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%f", &niz[i][j]);
			if (niz[i][j] < 0) {
				niz[i][j] = -niz[i][j];
			}
		}
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

/*Napisati program u C jeziku koji omogućava korisniku unos dimenzije matrice (2-D polja) realnih brojeva m × n, gdje je 3 ≤ m < 13 i 2 ≤ n < 15 
te potom popunjavanje matrice (VPL se ponaša kao unos s tipkovnice). 
Potrebno je izračunati aritmetičku sredinu svakog stupca matrice pojedinačno te nakon poruke REZULTATI:\n 
ispisati aritmetičku sredinu svakog stupca matrice pojedinačno u novom retku s preciznošću od dva decimalna mjesta.
Testiranje obaviti unutar main() funkcije.*/