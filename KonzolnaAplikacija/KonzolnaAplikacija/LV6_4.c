#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV6_4() {
	int broj, produkt = 1;

	printf("Unesite broj: ");
	scanf("%d", &broj);

	int t = broj;

	while (t > 0) {
		int znamenka = t % 10;
		produkt = produkt * znamenka;
		t = t / 10;
	}

	printf("Produkt znamenki broja %d je %d\n", broj, produkt);

	return 0;
}