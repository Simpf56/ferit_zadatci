#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VEL_POLJA 13

int LV7_6() {
	int n, i, brojac = 0;
	float niz[VEL_POLJA];
	float srednjaVelicina = 0;

	printf("Unesite broj elementa niza od 3 do 13: \n");
	scanf("%d", &n);
	if (n <= 2 || n > 13) {
		printf("Krivi unos!");
		return 0;
	}

	printf("Unesite realne brojeve: \n");
	for (i = 0; i < n; i++) {
		scanf("%f", &niz[i]);
		if (niz[i] > 0) {
			srednjaVelicina += niz[i];
			brojac++;
		}
	}

	srednjaVelicina /= brojac;

	printf("Vaše polje: ");
	for (i = 0; i < n; i++) {
		if (niz[i] < srednjaVelicina) {
			niz[i] = srednjaVelicina;
		}
		printf("%.2f ", niz[i]);
	}

	return 0;
}


/*Omogućiti korisniku unos n(2 < n ≤ 13) vrijednosti elemenata u polje realnih brojeva.Izračunati
aritmetičku sredinu svih pozitivnih elemenata polja.Pronaći elemente manje od aritmetičke
sredine i zamijeniti ih s izračunatom aritmetičkom sredinom.Potom na ekran ispisati izmijenjeno
polje.*/