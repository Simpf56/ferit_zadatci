#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VEL_POLJA 15

int LV7_2() {
	float srednjaVelicina = 0;
	int i, brojac = 0;
	float n;
	float niz[VEL_POLJA];
	printf("Unesite broj između 5 i 15.\n");
	scanf("%f",&n);
	if (n < 5 || n > 15) {
		printf("Krivi unos!");
		return 2;
	}
	
	
	for (i = 0; i < n; i++) {
		scanf("%f",&niz[i]);
		srednjaVelicina += niz[i];
	}

	srednjaVelicina /= n;

	for (i = 0; i < n; i++) {
		if (niz[i] > srednjaVelicina) {
			brojac++;
		}
	}
	

	printf("%d veličina je veće od srednje veličine.",brojac);
	return 0;
}