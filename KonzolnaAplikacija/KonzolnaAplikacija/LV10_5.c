#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 9

int LV10_5() {
	int i, j, m;
	float x;
	float niz[NIZ][NIZ] = { 0 };

	printf("Unesite dimenziju vase kvadratne matrice (min 3 max 8):\n");
	scanf("%d", &m);
	if (m < 3 || m > 8) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite realan broj x(od 0 do 1):\n");
	scanf("%f", &x);
	if (x <= 0 || x>1) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite brojeve vase matrice:\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%f", &niz[i][j]);
		}
	}


	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if ((i + j)==(m - 1)) {
				niz[i][j] *= x;
			}			
		}		
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (i==j) {
				int j_sporedna = m - 1 - i;
				niz[i][j] = niz[i][j_sporedna];
			}
			printf("%.2f ", niz[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}

/*Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3
≤ m < 9. Potom omogućiti mu popunjavanje te matrice. Također omogućiti korisniku unos realnog
broj 0 < x ≤ 1. Pomnožiti elemente sporedne dijagonale matrice s x te potom prepisati elemente
glavne dijagonale s njima. Ispisati matricu na ekran.*/

//printf("%.2f ", niz[i][j]);
//printf("\n");