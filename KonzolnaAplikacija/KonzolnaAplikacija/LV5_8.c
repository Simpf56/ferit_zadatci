#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV5_8() {
	
	char znak;
	printf("Unesite znak koji predstavlja samoglasnik: \n");
	scanf("%c", &znak);

	switch (znak) {
	case 'A': case 'a':
		printf("Uneseni znak je prvi samoglasnik i njegova ASCII vrijednost je %d", znak);
		break;
	case 'E': case 'e':
		printf("Uneseni znak je drugi samoglasnik i njegova ASCII vrijednost je %d", znak);
		break;
	case 'I': case 'i':
		printf("Uneseni znak je treci samoglasnik i njegova ASCII vrijednost je %d", znak);
		break;
	case 'O': case 'o':
		printf("Uneseni znak je cetvrti samoglasnik i njegova ASCII vrijednost je %d", znak);
		break;
	case 'U': case 'u':
		printf("Uneseni znak je peti samoglasnik i njegova ASCII vrijednost je %d", znak);
		break;
	default:
		printf("Uneseni znak nije samoglasnik!\n");
		break;
}

	return 0;
}

/*Omogućiti korisniku unos jednog znaka te ako je unešeni znak samoglasnik ispisati koji je po redu
(od samoglasnika) i ispisati njegovu ASCII vrijednost. Ako unešeni znak nije samoglasnik ispisati
odgovarajuću poruku*/

// A E I O U