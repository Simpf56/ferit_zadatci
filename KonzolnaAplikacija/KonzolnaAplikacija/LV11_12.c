#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 17

int LV11_12() {
	int i;
	int m = 0;
	int niz[NIZ] = { 0 };
	int* p = niz;

	printf("Unesite broj elemenata niza:\n");
	do {
		scanf("%d", &m);
	} while (m < 3 || m > 16);

	for (i = 0; i < m; i++) {
		scanf("%d", &niz[i]);
	}


	printf("REZULTATI:\n");
	for (i = 0; i < m; i++) {
		if (*(p + i) == 0) {
			continue;
		}
		else if (*(p + i) % 2 == 0) {
			if (*(p + i) % 3 == 0) {
				printf("%d ", *(p + i));
			}
		}
	}


	return 0;
}

/*
Napisati program u C jeziku koji omogućava korisniku unos broja m iz intervala (3 ≤ m < 17) i s toliko brojeva popuniti polje cijelih brojeva (VPL se ponaša kao unos s tipkovnice). 
Odrediti sve parne elemente djeljive s tri te nakon poruke REZULTATI:\n ispisati ih na ekran. 
Koristiti pokazivačku notaciju za pristup elementima polja.

Napisati program prema uputi u opisu zadatka

Primjer ulaznih podataka:
5           -> broj elemenata u polju
9 2 3 6 1   -> elementi koji se unose u polje

Nakon ključne riječi "REZULTATI:\n" ispisati na ekran sve parne elemente polja djeljive s brojem 3. 
Testiranje obaviti unutar main() funkcije

Primjer ispisa:
REZULTATI:
6

Deklarirati jednodimenzionalno polje samostalno u samostalnoj liniji!

NAPOMENA! Svi zadaci se provjeravaju na laboratorijskim vježbama.

Koristiti pokazivačku notaciju za pristup elementima polja!
*/

