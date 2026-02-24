#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 8

int Prog2LV1_2() {
	int n,i,j;
	int polje[NIZ] = { 0 };
	int broj = 0;
	

	for (i = 0; i < 8; i++) {
		do{
			scanf("%d", &n);
		} while (n < 0 || n>1);
		polje[i] = n;
	}

	
	for (i = 0; i < 8; i++) {
		int potencija = 1;
		for (j = 0; j < 7-i; j++) {
			potencija *= 2;
		}
		broj += polje[i] * potencija;
	}

	if (polje[0] == 1) {
		broj -= 256;
	}
	

	printf("%d", broj);
	return 0;
}



//Napisati C program koji s tipkovnice učitava brojeve 0 i 1 u polje cijelih brojeva duljine 8 elemenata.
//Potrebno je izračunati i na ekran ispisati dekadski zapis učitanog broja.Pripaziti na postupak
//pretvorbe kada je broj negativan i kada je pozitivan