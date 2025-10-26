#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV4_4() {
	float i = 0;
	float m, h;

	printf("Unesite vašu težinu kg i visinu u metrima: \n");

	scanf("%f", &m);
	scanf("%f", &h);

	i = (m / (h * h));

	printf("Indeks vaše tjelesne mase je: %.1f", i);



	return 0;
}