#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void randBrojevi(float *p,int n);

int LV14_3() {
	srand(1);
	int i, n;
	float *s;

	printf("Unesite željenu veličinu polja:\n");
	scanf("%d", &n);
	
	s = (float *)malloc(200 * sizeof(float));
	if (s == NULL) {
		return 1;
	}

	randBrojevi(s, n);
	float max = s[0];
	float min = s[0];


	for (i = 0; i < n; i++) {
		if (s[i] < min) min = s[i];
		if (s[i] > max) max = s[i];
	}
	printf("MIN = %.2f\nMAX = %.2f\n", min, max);

	free(s);

	return 0;
}

void randBrojevi(float* p, int n) {
	int dg = -100;
	int gg = 100;

	for (int i = 0; i < n; i++) {
		p[i]= dg + (float)rand() / RAND_MAX * (gg-dg);
	}
}

/*1. Omogućiti korisniku unos željene veličine polja realnih brojeva. Dinamički zauzeti potrebnu
memoriju. Popuniti polje pseudo-slučajnim brojevima u [−100, 100] iz R. Pronaći i na ekran ispisati
najmanju i najveću vrijednost elemenata u polju*/