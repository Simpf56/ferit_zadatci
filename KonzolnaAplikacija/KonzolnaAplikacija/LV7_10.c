#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VEL_NIZA 24

int LV7_10() {
	int n, i;
	int niz[VEL_NIZA];

	printf("Unesite broj elemenata niza ( 6 - 24): \n");
	scanf("%d", &n);
	if (n < 6 || n >= 25) {
		printf("Krivi unos!");
		return 2;
	}

	printf("Upisite %d cijelih brojeva: \n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &niz[i]);
	}
	

	for (i = 0; i < n/2; i++) {
		int rezerva = niz[i];
		niz[i] = niz[n - 1 - i];
		niz[n - 1 - i] = rezerva;
	}

	printf("Vas niz je: \n");
	for (i = 0; i < n; i++) {
		printf("%d ",niz[i]);
	}


	return 0;
}

/*Omogućiti korisniku unos n (6 ≤ n < 25) vrijednosti elemenata u polje cijelih brojeva. Zamijeniti
mjesta prvoj polovici polja s drugom polovicom polja. Npr. zamijeniti mjesta prvom elementu polja
sa zadnjim elementom, drugom elementu polja s predzadnjim elementom i tako skroz do polovice
polja.*/