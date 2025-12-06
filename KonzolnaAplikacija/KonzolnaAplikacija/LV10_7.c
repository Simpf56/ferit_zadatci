#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 16

int LV10_7() {
	int i, j,m;
	float niz[NIZ][NIZ];
	int flag = 0;
	float max = 0;
	float min = 0;

	printf("Unesite velicinu vase matrice:\n");
	scanf("%d", &m);
	if (m < 4 || m > 15) {
		printf("Krivi unos!");
		return 0;
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%f", &niz[i][j]);
		}
	}

	max = niz[1][0];
	min = niz[0][m - 2];

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i + j < m - 1 && niz[i][j] < min) {
				min = niz[i][j];
			}
			if (i > j && niz[i][j] > max) {
				max = niz[i][j];
			}
		}
	}

	printf("Najmanji element iznad sporedne dijagonale: %.2f\n", min);
	printf("Najveci element ispod glavne dijagonale: %.2f\n", max);

	printf("%.2f", max);
	return 0;
}



/*Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3
< m < 16 te potom popunjavanje matrice. Pronaći i na ekran ispisati element matrice iznad
sporedne dijagonale s najmanjom vrijednosti te element ispod glavne dijagonale s najvećom
vrijednosti.*/