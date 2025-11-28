#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float izracun(int n);

int LV9_2() {
	int x;
	float rezultat;
	printf("Unesite vas broj: \n");
	scanf("%d", &x);

	rezultat = izracun(x);

	printf("REZULTAT:\n");
	printf("%.2f",rezultat);




	return 0;
}

float izracun(int n) {
	int i, brojac = 0;
	float srednjaVrijednost = 0;

	for (i = 1; i <=n; i++) {
		if (i % 2 != 0) {
			srednjaVrijednost += i;
			brojac++;
		}
	}

	srednjaVrijednost = srednjaVrijednost / brojac;

	return srednjaVrijednost;
}