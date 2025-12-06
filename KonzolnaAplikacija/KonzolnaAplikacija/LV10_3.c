#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 11

int LV10_3() {
	int i, j, m, n,zbroj,razlika;
	int min = 0;
	int nizA[NIZ][NIZ];
	int nizB[NIZ][NIZ];

	printf("Unesite broj redaka(min 2 max 5:\n");
	scanf("%d", &m);
	if (m < 2 || m >= 6) {
		printf("Krivi unos");
		return 0;
	}

	printf("Unesite broj stupaca(min 3 max 10):\n");
	scanf("%d", &n);
	if (n < 3 || n > 10) {
		printf("Krivi unos");
		return 0;
	}

	printf("Matrica A: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &nizA[i][j]);
		}
	}

	printf("Matrica B: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &nizB[i][j]);
		}
	}


	printf("\nZBROJ:\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			zbroj = nizA[i][j] + nizB[i][j];
			printf("%d ", zbroj);
		}
		printf("\n");
	}


	printf("\nRAZLIKA:\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			razlika = nizA[i][j] - nizB[i][j];
			printf("%d ", razlika);
		}
		printf("\n");
	}




	return 0;
}


/*Omogućiti korisniku unos dimenzija dvije matrice realnih brojeva m x n (1 < m ≤ 5 i 2 < n ≤ 10) kao
i njihovo popunjavanje te izračunati i na ekran ispisati zbroj i razliku tih matrica [(A ± B)i,j = (A)i,j
±(B)i,j].*/