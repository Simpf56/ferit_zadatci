
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 12

double aritmetickaSredina(int red[], int m);

int LV_Zadnji1() {
	int i, j;
	int matrica[NIZ][NIZ];
	int m = 0;

	while (m <= 3 || m >= 13) {
		printf("Input the length of the matrix:\n");
		scanf("%d", &m);
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			int x = 0;
			while(x % 2 == 0) {
			scanf("%d", &x);
			}
			matrica[i][j] = x;
		}
	}

	printf("REZULTATI:\n");

	for (i = 0; i < m; i++) {
		double srednja = aritmetickaSredina(matrica[i], m);
		for (j = 0; j < m; j++) {
			if (matrica[i][j] > srednja) {
				printf("%.2f ", (double)matrica[i][j]);
			}
		}
		printf("\n");
	}

	return 0;


}

double aritmetickaSredina(int red[], int m) {
	int i;
	double suma = 0;

	for (i = 0; i < m; i++) {
		suma += red[i];
	}

	return suma / m;
}