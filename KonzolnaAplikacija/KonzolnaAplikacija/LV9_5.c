#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

float sredina(int x);

int LV9_5() {
	int broj = 0;
	float rezultat;
	printf("Unesite vas broj:\n");
	while(broj<=0){
		scanf("%d", &broj);
	}

	rezultat = sredina(broj);
	printf("REZULTAT:\n");
	printf("%.2f", rezultat);
	return 0;
}

float sredina(int x) {
	int i, brojac = 0;
	float srednja = 0;

	for (i = 1; i <= x; i++) {
		if (x % i == 0) {
		brojac++;
		srednja += i;
		}
	}

	srednja /= brojac;

	return srednja;

}

/*Napisati funkciju koja računa i vraća aritmetičku sredinu pozitivnih djelitelja predanog joj cijelog
broja. U funkciji main() na primjeru prikazati uporabu napisane funkcije.*/