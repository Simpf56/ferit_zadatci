#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define POLJA 20
#define PROG 15

struct datum {
	unsigned short dan;
	unsigned short mjesec;
	unsigned short godina;
};

typedef struct programer {
	char ime[POLJA];
	char prezime[POLJA];
	long long oib;
	float placa;
	struct datum datumRodjenja;
}programer;


int Prog2LV3_2() {

	int n = 0;
	int i = 0;
	float najveca = 0.00f;
	int brojac = 0;


	do {
		scanf("%d", &n);
	}while(n < 1 || n>15);

	programer programeri[PROG];

	for (i = 0; i < n; i++) {
		printf("Unesite ime %d. programera:\n",i+1);
		scanf("%19s", programeri[i].ime);
		printf("Unesite prezime programera:\n");
		scanf("%19s", programeri[i].prezime);
		printf("Unesite oib programera:\n");
		scanf("%lld", &programeri[i].oib);
		printf("Unesite placu programera:\n");
		scanf("%f", &programeri[i].placa);
		printf("Unesite dan rodjena programera:\n");
		scanf("%hu", &programeri[i].datumRodjenja.dan);
		printf("Unesite mjesec rodjena programera:\n");
		scanf("%hu", &programeri[i].datumRodjenja.mjesec);
		printf("Unesite godinu rodjena programera:\n");
		scanf("%hu", &programeri[i].datumRodjenja.godina);
	}

	najveca = programeri[0].placa;

	for (i = 0; i < n; i++) {
		if (programeri[i].placa > najveca) {
			najveca = programeri[i].placa;
			brojac = i;
		}
	}

	printf("Najveću plaću ima %d programer :\n", brojac + 1);
	printf(	"Ime programera: %s\n"
			"Prezime programera: %s\n"
			"Oib programera: %lld\n"
			"Placa programera: %.2f\n"
			"Datum rodenja programera: %2hu.%2hu.%4hu.\n",
									programeri[brojac].ime,
									programeri[brojac].prezime,
									programeri[brojac].oib,
									programeri[brojac].placa,
									programeri[brojac].datumRodjenja.dan,
									programeri[brojac].datumRodjenja.mjesec,
									programeri[brojac].datumRodjenja.godina);

	return 0;
}



/*Napisati C program koji omogućuje unos podataka o programerima jedne IT tvrtke, kao što je ime,
prezime, OIB, plaća i datum rođenja, od ukupno 15 programera. Tražiti od korisnika unos broj n
(1 ≤ 𝑛 < 16), ponavljati sve dok unos ne odgovara traženom intervalu. Popuniti informacije o
onoliko programera ovisno o broju n, pronaći programera koji ima najbolju plaću, te ispisati sve
informacije o tome programeru. S obzirom na navedene podatke o programeru, formirati
strukturu koristeći ključnu riječ typedef i pripaziti na ispis formata za datum kako bi bio u obliku
DD.MM.GGGG.*/