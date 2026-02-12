#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "zadaci.h"

float povrsina(float a, float b, float c);

int LV9_4() {
	float prva, druga, treca, rezultat;

	printf("Unesite 3 stranice vaseg trokuta: \n");
	scanf("%f %f %f", &prva,&druga,&treca);

	rezultat = povrsina(prva, druga, treca);
	printf("REZULTAT:\n");
	printf("%.2f", rezultat);
	return 0;
}

float povrsina(float a, float b, float c) {
	if (c + b <= a || c + a <= b || a + b <= c) {
		return 0;
	}

	float P, S;
	S = (a + b + c) / 2;
	P = sqrt(S * (S - a) * (S - b) * (S - c));
	return P;
}


/*Napisati funkciju koja će izračunati i vratiti površinu trokuta zadanog duljinama stranica. Ukoliko
predane stranice ne čine trokut funkcija vraća vrijednost 0. U main() funkciji na primjeru prikazati
uporabu napisane funkciju. Za izračun površine trokuta koristiti Heronovu formulu:
	 _____________________
𝑃 = √𝑠(𝑠 − 𝑎)(𝑠 − 𝑏)(𝑠 − 𝑐)   */