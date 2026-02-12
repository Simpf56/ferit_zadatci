#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV5_4() {
	int broj;

	printf("Unesite broj koji simbolizira dan u tjednu. \n");
	scanf("%d", &broj);

	if (broj == 1) {
		printf("Ponedjeljak");
	}
	else if (broj == 2) {
		printf("Utorak");
	}
	else if (broj == 3) {
		printf("Srijeda");
	}
	else if (broj == 4) {
		printf("Cetvrtak");
	}
	else if (broj == 5) {
		printf("Petak");
	}
	else if (broj == 6) {
		printf("Subota");
	}
	else if (broj == 7) {
		printf("Nedjelja");
	}
	else {
		printf("Pogrešan unos!");
	}

	return 0;
}

/*4. Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti višestruki if-else.*/