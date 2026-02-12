#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV5_1() {
	float a, b, c, najveci;

	printf("Upisite tri realna broja: \n");
	scanf("%f", &a);

	printf("drugi...\n");	
	scanf("%f", &b);

	printf("treci...\n");
	scanf("%f", &c);

	if (a > b && a > c) {
		najveci = a;
	}
	else if(b > a && b > c){
		najveci = b;
	}
	else {
		najveci = c;
	}

	printf("Najveci broj je %.2f", najveci);

	return 0;
}