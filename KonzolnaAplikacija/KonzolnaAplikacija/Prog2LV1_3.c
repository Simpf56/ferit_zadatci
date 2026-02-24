#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#define NIZ 32

int Prog2LV1_3() {
	int n, i,j;
	int polje[NIZ] = { 0 };
	int dg = 0;
	int gg = 1;
	long long broj = 0;

	srand((unsigned)time(NULL));


	for (i = 0; i < 32; i++) {		
		polje[i] = dg + rand() % (gg - dg + 1);
		/*do {
			scanf("%d", &polje[i]);
		} while (polje[i] < 0 || polje[i] > 1);*/
	}


	for (i = 0; i < 32; i++) {
		int potencija = 1;
		for (j = 0; j < 31 - i; j++) {
			potencija *= 2;
		}
		broj += polje[i] * potencija;
	}

	if (polje[0] == 1) {
		broj -= UINT32_MAX+1;
	}

	printf("%lld", broj);


	return 0;
}

//Napisati C program koji će iz cjelobrojnog polja koje predstavlja binarni zapis duljine 32 elemenata
//popunjenog pseudo - slučajnim vrijednostima[0, 1], pretvoriti i ispisati dekadski zapis broja.
//Pripaziti na postupak pretvorbe kada je broj negativan i kada je pozitivan.