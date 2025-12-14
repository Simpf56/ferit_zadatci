#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV11_2() {
	int var = 5;
	int *pvar = &var;

	printf("Adresa pokazivaca je %p, a vrijednost na njemu je %d,\n", &pvar, var);

	(*pvar)+=10;
	printf("Adresa pokazivaca je %p, a vrijednost na njemu je %d,", &pvar, var);

	return 0;
}


/*Deklarirati i inicijalizirati cjelobrojnu varijablu te pokazivač na nju. Ispisati joj vrijednost i adresu.
Uvećati joj vrijednost za 10 preko pokazivača te joj ponovo ispisati vrijednost i adresu.*/