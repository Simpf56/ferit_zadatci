#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV4_5() {
	float a, x;

	printf("Unesite realan broj veli�ine intervala: \n");
	scanf("%f", &a);
	printf("Unesite realan broj: \n");
	scanf( "%f", &x);

	if (x >= -a && x <= a) {
		printf("1");
	}
	else {
		printf("0");
	}

	return 0;
}