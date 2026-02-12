#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#define VEL_POLJA 12

int LV7_4() {
	int q,i;
	float niz[VEL_POLJA];

	
	printf("Upišite broj veličine vašeg niza od 5 do 12:\n");
	scanf("%d",&q);
	if (q <= 4 || q > 12) {
		printf("Krivi unos!");
		return 2;
	}

	printf("Unesite realne brojeve vašeg niza: \n");
	for (i = 0; i < q; i++) {
		scanf("%f", &niz[i]);
		if ((int)niz[i] % 2 != 0) {
			niz[i] /= 2;
		}
		
	}

	printf("Brojevi vašeg niza su: \n");
	for (i = 0; i < q; i++) {
		printf("%.2f ",niz[i]);
	}
	return 0;
}