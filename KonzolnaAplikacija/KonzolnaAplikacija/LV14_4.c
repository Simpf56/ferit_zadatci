#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void randBroj(double* p, int n);

int LV14_4() {
	int n;
	int dg = 50;
	int gg = 1000;
	double* p;
	int ima=0;
	srand((unsigned)time(NULL));

	n = dg + rand() % (gg - dg + 1);

	p = (double*)malloc(n * sizeof(double));
	if (p == NULL) {
		return 1;
	}

	randBroj(p, n);
	for (int i = 0; i < n; i++) {
		if (p[i] == 1.0) {
			printf("U polju se nalazi broj 1.");
			ima++;
		}
	}

	if (ima < 1) {
		printf("U polju se ne nalazi broj 1");
	}



	free(p);
	return 0;
}

void randBroj(double* p, int n) {
	double dg = 0;
	double gg = 1;

	for (int i = 0; i < n; i++) {
		p[i] = dg + (double)rand() / RAND_MAX * (gg - dg);
	}


}
/*2. Generirati pseudo-slučajni cijeli broj u [50, 1000] iz Z te zauzeti dinamički memoriju za toliko
podataka tipa double. Popuniti dobiveno polje pseudo-slučajnim brojevima u [0, 1] iz R. Provjeriti
i na ekran ispisati odgovarajuću poruku nalazi li se u polju vrijednost 1.*/