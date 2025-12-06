#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 10

int LV10_4() {
	int i, j, m;
	int niz[NIZ][NIZ] = {0};
	int min, max;

	printf("Unesite dimenziju vase kvadratne matrice (min 2 max 10):\n");
	scanf("%d", &m);
	if (m < 2 || m > 10) {
		printf("Krivi unos!");
		return 0;
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &niz[i][j]);
		}
	}

	min = niz[0][0];

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i == j) {
				if (min > niz[i][j]) {
					min = niz[i][j];
				}
			}
		}
	}

	max = niz[0][m - 1];

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if ((i + j) == (m-1)) {
				if (max < niz[i][j]) {
					max = niz[i][j];
				}
			}
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", niz[i][j]);
		}
		printf("\n");
	}

	printf("Najmanji broj glavne dijagonale :%d \nNajveci broj sporedne dijagonale :%d", min, max);

	return 0;
}


/*Omogućiti korisniku unos dimenzija kvadratne matrice m x m (2 ≤ m ≤ 10) i njeno popunjavanje.
Odrediti i na ekran ispisati najmanju vrijednost na glavnoj te najveću vrijednost na sporednoj
dijagonali.*/