#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int primeNumberOfDigits(int number);

int LV_Zadnji2() {
	int m;
	int prosti;
	printf("Unesite vaš broj:\n");
	scanf("%d", &m);

	prosti = primeNumberOfDigits(m);	

	printf("REZULTATI:\n");
	printf("%d", prosti);

	return 0;
}

int primeNumberOfDigits(int number) {
	int brojac = 0;
	if (number < 0) {
		number = -number;
	}

	while (number > 0) {
		int rezerva = 0;
		rezerva = number % 10;
	if (rezerva == 2 || rezerva == 3 || rezerva == 5 || rezerva == 7) {
		brojac++;
	}
	number /= 10;
	}

	return brojac;
}