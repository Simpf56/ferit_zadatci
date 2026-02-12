#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int trokut(int a, int b, int c);

int LV9_10() {
	int prva, druga, treca;
	int stranica;
	printf("Unesite stranice vašeg trokuta:\n");
	scanf("%d %d %d", &prva, &druga, &treca);
	stranica = trokut(prva, druga, treca);
	printf("REZULTAT:\n");
	switch (stranica) {
		case 0: printf("Stranice ne cine trokut!");
			break;
		case 1: printf("Jednakracan trokut");
			break;
		case 2: printf("Jednakostranican trokut");
			break;
		case 3: printf("Raznostranican trokut");
			break;
		default: printf("Krivi unos!");
			break;
	}
	return 0;
}

int trokut(int a, int b, int c) {
	if (b + c < a && c + a < b && a + b < c) {
		return 0;
	}
	
	if (a == b && b == c) {
		return 2;
	}
	else if (a == b || a == c || b == c ) {
		return 1;
	}
	else {
		return 3;
	}
}

/*Omogućiti korisniku unos duljine tri stranice trokuta a, b i c. Zatim te tri stranice poslati u funkciju
koja vraća 0 ako stranice ne čine trokut, 1 ako je trokut jednakostraničan, 2 ako je trokut
jednakokračan i 3 ako je trokut raznostraničan. U glavnom dijelu programa ispisati odgovarajuću
poruku, ako stranice ne tvore trokut, a ako stranice čine trokut, ispisati kakav trokuta čine stranice.*/