#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float razlomak(float x1, float x2, float x3);

int LV9_8() {
	float prvi, drugi, treci,rezultat;
	printf("Unesite vaše brojeve:\n");
	scanf("%f %f %f", &prvi, &drugi, &treci);
	rezultat = razlomak(prvi, drugi, treci);
	printf("REZULTAT:\n");
	printf("%f", rezultat);

	return 0;
}

float razlomak(float x1, float x2, float x3) {
	float x1kub = x1 * x1 * x1;
	float x3kvad = x3 * x3;
	float deset = 1e-3;
	float y;
	if (x2 < 0) {
		x2 = -x2;
	}
	y = x1kub - (x1 * x3) / (x2 + deset) + 5 * x3kvad;
	return y;

}

/*Napisati funkciju koja računa i vraća vrijednost 𝑦 = 𝑥1
 3 −	𝑥1∙𝑥3
	|𝑥2|+10−3 + 5 ∙ 𝑥3
2. U svrhu testiranja u
funkciji main() pozvati napisanu funkciju s 1.2, -4.1 i 2.825 kao argumentima te na ekran ispisati
povratnu vrijednost*/