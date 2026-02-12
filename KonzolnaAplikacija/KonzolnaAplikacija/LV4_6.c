#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV4_6() {
	int x,g,t,d;

	printf("Unesite broj dana: \n");
	scanf("%d", &x);

	g = x / 365;
	t = (x % 365) / 7;
	d = (x - (g * 365 + t * 7));
	
	printf("Godina: %d \nTjedana: %d \nDana: %d", g, t, d);
	return 0;
}