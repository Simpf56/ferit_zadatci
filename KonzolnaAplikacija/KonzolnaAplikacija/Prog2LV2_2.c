#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 7
#include <string.h>

int Prog2LV2_2() {
	int n = 0,i;
	int najviseSuglasnika = 0;
	int brojac = 0;
	int danSuglasnika;
	int duzinaDana;
	char* polje[NIZ] = {
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

	for (i = 0; i < NIZ; i++) {
		char* p = *(polje + i);
		while (*p != '\0') {
			if (*(polje + i) != 'a' && *(polje + i) != 'e' && *(polje + i) != 'i' && *(polje + i) != 'o' && *(polje + i) != 'u' &&
				*(polje + i) != 'A' && *(polje + i) != 'E' && *(polje + i) != 'I' && *(polje + i) != 'O' && *(polje + i) != 'U') {
				brojac++;
			}
			p++;
		}

		if (brojac > najviseSuglasnika) {
			najviseSuglasnika = brojac;
			danSuglasnika = i;
		}
		
	}

	duzinaDana = strlen(*(polje + danSuglasnika));

	printf("\n");

	for (i = duzinaDana; i > 0; i--) {
		printf("%c", *(*(polje + danSuglasnika)+i-1));
	}


	

	return 0;
}


/* Napisati C program koji omogućava unos broja n, (1 ≤ 𝑛 ≤ 7) koji predstavlja dane u tjednu.
Ukoliko je unesen broj koji ne odgovara broju dana u tjednu, ispisati poruku "Krivo uneseni broj za
dan" i zatražiti novi unos broja n. Za inicijalizaciju imena dana koristiti polje pokazivača. Ispisati
traženi dan. Koristiti isključivo pokazivačku notaciju! 
Proširiti prvi zadatak tako da se provjerio koji dan ima najviše suglasnika, te ispisati naopako dan s
najvećim brojem suglasnika. Koristiti isključivo pokazivačku notaciju! */