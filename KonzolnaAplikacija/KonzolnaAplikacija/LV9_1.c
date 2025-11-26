#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

float volumen(float polumjer,float visina);

int LV9_1() {
	float polumjer,visina;
	float obujam = 0;
		
	printf("Unesite polumjer i visinu vašeg valjka u metrima: \n");
	printf("Polumjer:\n");
	scanf("%f", &polumjer);
	printf("Visina:\n");
	scanf("%f", &visina);

	obujam = volumen(polumjer, visina);
	printf("Obujam vašeg valjka je %.2f m³",obujam);

	return 0;
}

float volumen(float r, float h) {
	float V = PI * (r * r) * h;
	return V;
}

