#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV6_10() {
	int n;
	int broj;
	int obrnuto = 0;
	printf("Unesite broj: ");
	scanf("%d", &n);

	while (n > 0) {
		broj = n % 10;
		obrnuto = obrnuto * 10 + broj;
		n = n / 10;

	}

	printf("Obrnuti broj je %d.", obrnuto);

	return 0;
}