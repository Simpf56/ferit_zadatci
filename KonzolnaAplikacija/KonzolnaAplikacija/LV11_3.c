#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define niz 21

int LV11_3() {
	int* pbroj;
	int i;
	int m = 0;
	int polje[niz];

	printf("Unesite broj elemenata polja:\n");
	while (m <= 4 || m >= 21) {
		scanf("%d", &m);
	}


	for (i = 0; i < m; i++) {
		scanf("%d", polje + i);
	}

	int* max = polje;
	int* min = polje;

	for (i = 1; i < m; i++) {
		if (*(polje + i) > *max) {
			max = polje + i;
		}
		if (*(polje + i) < *min) {
			min = polje + i;
		}
	}

	printf("Najveci broj u polju je: %d\n", *max);
	printf("Najmanji broj u polju je: %d", *min);



	return 0;
}


/*3. Omogućiti korisniku unos m (4 < m < 21) elemenata u polje cijelih brojeva. Odrediti i na ekran
ispisati element s najvećom i element s najmanjom vrijednosti. Koristiti pokazivačku notaciju za
pristup elementima polja.*/