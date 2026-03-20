#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct ARTIKL {
	char ime[20];
	float cijena;
	int kolicina;
}ARTIKLI;

int Prog2LV4_2() {
	int index = 0;
	int n = 0;
	float maxCijena = 0.0f;
	ARTIKLI* max = NULL;
	ARTIKLI* pokNaArtikle = NULL;

	do {
		scanf("%d", &n);
	} while(n < 1 || n > 50);

	pokNaArtikle = (ARTIKLI*)calloc(n, sizeof(ARTIKLI));
	if (pokNaArtikle == NULL) { return 1; };

	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%s", (pokNaArtikle + i)->ime);
		scanf("%f", &(pokNaArtikle + i)->cijena);
		scanf("%d", &(pokNaArtikle + i)->kolicina);
	}

	max = pokNaArtikle;

	for (int i = 0; i < n; i++) {
		if ((pokNaArtikle + i)->cijena > max->cijena) {
			max = (pokNaArtikle + i);
			index = i;
		}
	}

	printf("Artikl %d je najskuplji artikl od %s cijene: %.2f i količine: %d", index+1, (pokNaArtikle + index)->ime, (pokNaArtikle + index)->cijena, (pokNaArtikle + index)->kolicina);

	free(pokNaArtikle);
	pokNaArtikle = NULL;

	return 0;
}


/*2 Napisati C program koji će u polje struktura artikl omogućiti unos n artikala (struktura ima članove
ime, cijena i kolicina), gdje je n (1 ≤ 𝑛 ≤ 50). Dinamički zauzeti memoriju za polje artikala (u
potpunosti rukovati memorijom). U pokazivač na strukturu artikl max spremiti memorijsku adresu
najskupljeg artikla. Ispisati podatke o najskupljem artiklu. Koristiti isključivo pokazivačku notaciju.
Koristiti typedef.*/