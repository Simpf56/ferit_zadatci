#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void changeString(char* s);

int Ispit1_3() {
	srand(1);
	int m = 0;
	char* c;

	while (m < 1 || m>25) {
		scanf("%d", &m);
	}

	c = (char*)malloc((m+1) * sizeof(char));
	if (c == NULL) {
		return 1;
	}

	getchar();

	fgets(c, m+1, stdin);
	
	changeString(c);

	printf("REZULTATI:\n");
	printf("%s", c);

	free(c);
	c == NULL;
	return 0;
}

void changeString(char* s) {
	int dg = 'a';
	int gg = 'z';
	for (char* p = s; *p != '\0';p++) {
		if (*p >= 'A' && *p <= 'Z') {
			*p = dg + rand() % (gg - dg + 1);
		}
	}
	
}
/*Napisati program koji dohvaća string duljine m gdje je m iz [1, 25], 
te stoga treba pripaziti na duljinu stringa koji se dohvaća. 
Potrebno je dinamički zauzeti memoriju za string duljine m, pripaziti duljinu i za terminirajući znak (u potpunosti upravljati memorijom). 
Dohvaćeni string je potrebno poslati funkciji koja će svako veliko slovo zamijeniti pseudo-slučajnim malim slovom. Tako izmijenjeni string ispisati na ekran nakon "REZULTATI:\n".
Koristiti isključivo pokazivačku notaciju.

[Znakovi 0, 1, . . . , 9 imaju redom ASCII vrijednosti 48, 49, . . . , 57, znakovi 'A',..., 'Z' imaju redom 
ASCII vrijednosti 65,..., 90, a znakovi 'a',..., 'z' imaju redom ASCII vrijednosti 97,..., 122].*/