#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define POLJE 11

typedef struct tocka {
	float x;
	float y;
}TOCKA;

typedef struct trokut {
	TOCKA* v1;
	TOCKA* v2;
	TOCKA* v3;
}TROKUT;

float udaljenost(TOCKA* a, TOCKA* b);

int Prog2LV4_1() {
	int m = 0;
	int n = 0;
	int brojac = 0;
	int i;
	float maxOpseg=0.0f;

	do {
		scanf("%d", &m);
	} while (m < 3 || m > 30);

	do {
		scanf("%d", &n);
	} while (n < 1 || n > 10);

	TOCKA* tocke = (TOCKA*)calloc(m, sizeof(TOCKA));
	if (tocke == NULL) {
		return 1;
	}

	TROKUT* trokuti = (TROKUT*)calloc(n, sizeof(TROKUT));
	if (trokuti == NULL) {
		return 1;
	}


	for (i = 0; i < m; i++) {
		scanf("%f %f", &(tocke+i)->x,&(tocke+i)->y);
	}

	for (i = 0; i < n; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		(trokuti + i)->v1 = tocke + a;
		(trokuti + i)->v2 = tocke + b;
		(trokuti + i)->v3 = tocke + c;
	}

	for (i = 0; i < n; i++) {
		float a = udaljenost((trokuti + i)->v1, (trokuti + i)->v2);
		float b = udaljenost((trokuti + i)->v2, (trokuti + i)->v3);
		float c = udaljenost((trokuti + i)->v3, (trokuti + i)->v1);

		float opseg = a + b + c;

		if (i == 0 || opseg > maxOpseg) {
			maxOpseg = opseg;
			brojac = i;
		}
	}

	printf("Trokut %d ima opseg %.2f s koordinatama %f %f %f %f %f %f\n",
		brojac+1,
		maxOpseg,
		(trokuti + brojac)->v1->x,
		(trokuti + brojac)->v1->y,
		(trokuti + brojac)->v2->x,
		(trokuti + brojac)->v2->y,
		(trokuti + brojac)->v3->x,
		(trokuti + brojac)->v3->y
	);
	

	free(tocke);
	free(trokuti);

	return 0;
}

float udaljenost(TOCKA* a, TOCKA* b) {
	return sqrt((a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y));
}
/*Napisati C program koji omogućuje unos dva broja m i n, gdje je m (3 ≤ 𝑚 ≤ 30), a n (1 ≤ 𝑛 <
11). Omogućiti unos m točaka i n trokuta. Dinamički zauzeti memoriju za polje točaka i polje
trokuta (u potpunosti rukovati memorijom). Pronaći i ispisati trokut koji ima najveći opseg, zajedno
s njegovim indeksom. Opseg najvećeg trokuta ispisati u formatu ("Trokut %d ima opseg %.2f s
koordinatama %f %f %f\n"). Potrebno je izračunati udaljenosti između dvije susjedne točke kako
bi se dobila jedna stranica trokuta, napraviti izračun za preostale dvije stranice i to ponoviti za svaki
trokut iz polja trokuta. Koristiti isključivo pokazivačku notaciju. Koristiti typedef.*/

