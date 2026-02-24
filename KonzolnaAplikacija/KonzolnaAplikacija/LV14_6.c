#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomBroj(float* p, int n);
float* rezultatZbrajanja(float* p1, float* p2, int n);

int LV14_6() {
	srand((unsigned)time(NULL));
	int i;
	float* p1;
	float* p2;

	int n = 0;
	while (n < 3 || n>19) {
		scanf("%d", &n);
	}

	p1 = (float*)malloc(n * sizeof(float));
	if (p1 == NULL) {
		return 1;
	}

	p2 = (float*)malloc(n * sizeof(float));
	if (p2 == NULL) {
		return 1;
	}

	randomBroj(p1, n);
	randomBroj(p2, n);
	float* p3 = rezultatZbrajanja(p1, p2, n);
	
	printf("REZULTATI:\n");

	for (i = 0; i < n; i++) {
		printf("%.2f ",p1[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%.2f ", p2[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%.2f ", p3[i]);
	}



	free(p1);
	free(p2);
	free(p3);
	return 0;
}

float* rezultatZbrajanja(float* a, float* b, int x) {
	float* c = malloc(x * sizeof(float));
	if (c == NULL) {
		return 1;
	}

	for (int i = 0; i < x; i++) {
		c[i] = a[i] + b[i];
	}
	return c;
}

void randomBroj(float* p, int n) {
	float dg = -100;
	float gg = 100;

	for (int i = 0; i < n; i++) {
		p[i]= dg + (double)rand() / RAND_MAX * (gg - dg);
	}
}

/*Napisati funkciju koja računa zbroj dva vektora predstavljena poljima realnih brojeva (uzeti u obzir
kako oba polja moraju biti iste veličine). Korisnik treba unijeti duljinu polja iz 3 ≤ n < 20. Izdvojiti
korak popunjavanja polja pseudo-slučajnim brojevima u posebnu funkciju, te popuniti polja s
vrijednostima iz intervala [−100, 100] iz R. Glavna funkcija kao rezultat vraća polje koje je rezultat
zbrajanja. Na primjeru u funkciji main() pokazati uporabu napisane funkcije. Za sva polja dinamički
zauzeti potrebnu memoriju.*/