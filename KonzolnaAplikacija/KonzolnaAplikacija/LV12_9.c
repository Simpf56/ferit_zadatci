#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NIZ 51

void change(char* s);

int LV12_9() {
	srand((unsigned)time(NULL));

	char niz[NIZ];
	int duzina;
	char* s = niz;
	int i;


	printf("Unesite vas string sa maximalno 50 znakova: \n");
	do {
	scanf("%50[^\n]", niz);
	duzina = strlen(niz);
	} while (duzina >= NIZ);

	change(niz);

	printf("REZULTATI:\n");
	for (i = 0; i < duzina; i++) {
		printf("%c", *(s+i));
	}

	


	return 0;
}

void change(char* s) {
	int i;
	int dg = 'A';
	int gg = 'Z';
	for(i = 0; s[i] != '\0'; i++) {
		if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))) {
			s[i] = dg + rand() % (gg - dg + 1);
		}
	};
			
}

/*Napisati program u C jeziku za koji se treba implementirati funkcija koja u predanom joj stringu postavlja sve znakove koji nisu slova u pseudo-slučajno generirano veliko slovo.
U svrhu testiranja u funkciji main() deklarirati polje od 50 elemenata tipa char.
Omogućiti korisniku unos stringa u dobiveno polje (VPL se ponaša kao unos s tipkovnice) te ga iskoristiti u pozivu napisane funkcije.
Naknadno ispisati izmijenjeni string na ekran nakon poruke REZULTATI:\n. Koristiti isključivo pokazivačku notaciju.*/

/*Napisati program prema uputi u opisu zadatka

Primjer ulaznih podataka:
Hello, World!123

Nakon ključne riječi "REZULTATI:\n" ispisati izmijenjeni string.
Testiranje obaviti unutar main() funkcije

Primjer ispisa:
REZULTATI:
HelloNWWorldLRBB

NE DIRATI deklaraciju funkcije!!!
Definiciju funkcije napisati nakon main() funkcije!!!
Deklarirati jednodimenzionalno polje samostalno u samostalnoj liniji!

NAPOMENA! Svi zadaci se provjeravaju na laboratorijskim vježbama.

Obavezno pozvati srand(1) u main funkciji!
Za generiranje P-S cijelih brojeva (znakova) koristiti isključivo formulu: dg + rand() % (gg - dg + 1)

Koristiti pokazivačku notaciju za pristup elementima polja!
*/