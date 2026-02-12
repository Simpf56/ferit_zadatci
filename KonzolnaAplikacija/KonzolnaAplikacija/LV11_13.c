#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include "zadaci.h"
#define NIZ 81

int LV11_13() {
	int i;
	char nizJedan[NIZ];
	char nizDva[NIZ];
	char *p = nizJedan;
	char* q = nizDva;
	int duzinaNiza;

	printf("Unesite vaš string:\n");
	scanf("%80[^\n]", nizJedan);

	duzinaNiza = strlen(nizJedan);

	for (i = 0; i < duzinaNiza; i++) {
		*(q + i) = *(p + i);
	}
	*(q + duzinaNiza) = '\0';

	printf("REZULTATI:\n");
	for (i = duzinaNiza-1; i >= 0; i--) {
		printf("%c", *(q + i));
	}



	return 0;
}


/*Napisati program u C jeziku koji omogućava korisniku unos stringa od 80 znak. 
Originalni unešeni string je potrebno upisati obrnutim redoslijedom u novo polje znakova koje je potrebno napraviti u string te nakon poruke REZULTATI:\n 
ispisati na ekran izmijenjeno polje. Koristiti isključivo pokazivačku notaciju za pristup elementima polja.*/