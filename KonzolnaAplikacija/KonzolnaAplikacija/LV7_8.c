#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV7_8() {
	int unos,i;
	int niz[20];
	int brojevi[10] = {0};

	for (i = 0; i < 10; i++) {
		brojevi[i] = 0;
	}

	printf("Upisite 20 cijelih brojeva (od 0 do 9): \n");
	for (i = 0; i < 20; i++) {
		do {
		scanf("%d", &unos);
		} while (unos < 0 || unos > 9);
		niz[i] = unos;
		brojevi[unos]++;
	}

	for (i = 0; i < 10; i++) {
		printf("Broj %d se ponavljuje %d puta\n",i, brojevi[i]);
	}
	return 0;
}

/*Omogućiti korisniku popunjavanje cjelobrojnog polja od 20 elemenata. Osigurati da svaka unesena
vrijednost bude u [0, 9], ukoliko nije, tražiti ponovni unos. Prebrojati i ispisati koliko se puta
ponovila pojedina vrijednost i za svaku ispisati broj ponavljanja*/