#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV11_1() {
	float varijabla = 5;
	float* pvar = &varijabla;
	(*pvar)++;

	printf("%.2f", varijabla);
	return 0;
}


/*1. Deklarirati i inicijalizirati realnu varijablu te pokazivač na nju. Koristeći operator uvećavanja
(inkrementiranja) povećati vrijednost varijable preko pokazivača. (Napomena: operator (sufiks)
uvećavanja ima veći prioritet u odnosu na operator dereferenciranja pa je potrebno koristiti
zagrade).*/