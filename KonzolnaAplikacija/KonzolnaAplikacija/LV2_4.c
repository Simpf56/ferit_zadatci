#define _CRT_SECURE_NO_WARNINGS
#include "zadaci.h"
#include <stdio.h>
#include <windows.h>

int LV2_4() {
	SetConsoleOutputCP(1250);
	SetConsoleCP(1250);

	int prva = 0;
	int druga = 0;
	int treca = 0;

	printf("Upi�ite prvu stranicu trokuta: ");

	while (prva <= 0) {
		scanf_s("%d", &prva);
		if (prva <= 0) {
			printf("Unos mora biti pozitivan broj! \n");
		}
	}

	printf("Upi�ite drugu stranicu trokuta koja je dva puta ve�a od pro�le: ");

	while (druga < 2*prva) {
		scanf_s("%d", &druga);
		if (druga < 2*prva) {
			printf("Unos mora biti 2 puta ve�i od prethodnog! \n");
		}
	}

	printf("Upi�i tre�u stranicu trokuta koja je dva puta ve�a od pro�le: ");

	while (treca < 2*druga) {
		scanf_s("%d", &treca);
		if (treca < 2*druga) {
			printf("Unos mora biti 2 puta ve�i od prethodnog! \n");
		}
	}

	printf("Stranice trokuta su %d, %d, %d!", treca,druga,prva);

	return 0;
}