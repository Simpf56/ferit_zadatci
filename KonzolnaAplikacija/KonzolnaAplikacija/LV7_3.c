#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VEL_POLJA 21

int LV7_3() {
	int n, i, veci = 0, manji = 0;
	float srednjaVelicina = 0;
	float niz[VEL_POLJA];
	printf("Unesite broj elemenata od 4 do 21.\n");
	scanf("%d", &n);

	printf("Unesite koje brojeve želite za elemente niza: \n");
	for (i = 0; i < n; i++) {
		scanf("%f", &niz[i]);
		srednjaVelicina += niz[i];
	}

	srednjaVelicina /= n;

	for (i = 0; i < n; i++) {
		if (srednjaVelicina <= niz[i] * 0.90) {
			manji++;
		}
		else
		{
			veci++;
		}
	}

	printf("%d broja su manja od srednje vrijednosti a %d veća.", manji, veci);
	return 0;
}



