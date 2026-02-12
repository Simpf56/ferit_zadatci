#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"


int LV4_7() {
	float a,b,c;

	printf("Unesite stranicu A: \n");
	scanf("%f", &a);
	printf("Unesite stranicu B: \n");
	scanf("%f", &b);
	printf("Unesite stranicu C: \n");
	scanf("%f", &c);
	
	if (a > c || b > c) {
		printf("0");
	}
	else {
		printf("1");
	}

	return 0;
}