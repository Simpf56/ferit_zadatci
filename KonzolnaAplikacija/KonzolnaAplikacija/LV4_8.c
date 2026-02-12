#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV4_8() {
	float a, b, c;

	printf("Unesite dva realna broja:\n");
	scanf("%f",&a);
	printf("Drugi... : \n");
	scanf("%f", &b);

	printf("Prije zamjene\n");
	printf("Varijabla A iznosi %.2f \n", a);
	printf("Varijabla B iznosi %.2f \n", b);

	c = a;
	a = b;
	b = c;

	printf("Poslje zamjene\n");
	printf("Varijabla A iznosi %.2f \n", a);
	printf("Varijabla B iznosi %.2f \n", b);

	return 0;
}