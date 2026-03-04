#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 7

int Prog2LV2_1() {
	int n = 0;
	char* polje[NIZ]={
		"Ponedjeljak",
		"Utorak",
		"Srijeda",
		"Četvrtak",
		"Petak",
		"Subota",
		"Nedjelja"
	};

	
	while (1) {
		scanf("%d", &n);
		if (n >= 0 && n <= 7) {
			break;
		}
		printf("Krivo uneseni broj za dan.\n");
	}

	printf("%s", *(polje + (n - 1)));

	return 0;
}


/*1. Napisati C program koji omogućava unos broja n, (1 ≤ 𝑛 ≤ 7) koji predstavlja dane u tjednu.
Ukoliko je unesen broj koji ne odgovara broju dana u tjednu, ispisati poruku "Krivo uneseni broj za
dan" i zatražiti novi unos broja n. Za inicijalizaciju imena dana koristiti polje pokazivača. Ispisati
traženi dan. Koristiti isključivo pokazivačku notaciju!*/