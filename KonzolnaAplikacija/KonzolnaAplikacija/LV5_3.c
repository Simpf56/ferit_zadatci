#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV5_3() {
	int broj;

	printf("Unesite broj koji simbolizira dan u tjednu. \n");
	scanf("%d", &broj);

	switch (broj) {
	case 1:
		printf("Ponedjeljak");
		break;
	case 2:
		printf("Utorak");
		break;
	case 3:
		printf("Srijeda");
		break;
	case 4:
		printf("Cetvrtak");
		break;
	case 5:
		printf("Petak");
		break;
	case 6:
		printf("Subota");
		break;
	case 7:
		printf("Nedjelja");
		break;
	default:
		printf("Pogrešan unos!");
		break;
	}

	return 0;
}

/*3. Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti switch-case.*/