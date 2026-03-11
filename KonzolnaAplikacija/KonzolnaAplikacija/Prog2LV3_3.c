#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define POLJA 40

int generirajBroj(void);
int brojZnamenaka(long int a);

typedef struct cijeli_broj {
	long int uneseni_broj;
	int broj_znamenaka;
}CIJELI_BROJ;


int Prog2LV3_3() {
	srand(time(NULL));
	long long min;
	long long max;
	int i;
	int clanMax = 0;
	int znamMin = 0;

	CIJELI_BROJ cijelibrojevi[POLJA] = {0};

	

	for (i = 0; i < POLJA; i++) {
		cijelibrojevi[i].uneseni_broj = generirajBroj();
		cijelibrojevi[i].broj_znamenaka = brojZnamenaka(cijelibrojevi[i].uneseni_broj);
	}

	max = cijelibrojevi[0].uneseni_broj;
	min = cijelibrojevi[0].broj_znamenaka;

	for (i = 0; i < POLJA; i++) {
		if (max < cijelibrojevi[i].uneseni_broj) {
			max = cijelibrojevi[i].uneseni_broj;
			clanMax = i;
		}
		if (min > cijelibrojevi[i].broj_znamenaka) {
			min = cijelibrojevi[i].broj_znamenaka;
			znamMin = i;
		}
	}

	printf("Clan sa najvecim generiranim brojem je:\n");
	printf("%d. clan :\n"
		"Uneseni broj: %ld\n Broj znamenaka: %d\n",
		clanMax+1, cijelibrojevi[clanMax].uneseni_broj, cijelibrojevi[clanMax].broj_znamenaka);

	printf("Clan sa najmanje znamenaka je:\n");
	printf("%d. clan :\n"
		"Uneseni broj: %ld\n Broj znamenaka: %d\n",
		znamMin+1, cijelibrojevi[znamMin].uneseni_broj, cijelibrojevi[znamMin].broj_znamenaka);

	for (i = 0; i < 40; i++) {
		printf(" %d. broj: %ld znamenke :%d\n",i+1,cijelibrojevi[i].uneseni_broj, cijelibrojevi[i].broj_znamenaka);
	}

	return 0;
}

int generirajBroj(void) {
	long long dg = -2147483648LL;
	long long gg = 2147483647LL;

	long long r = rand();
	r = r * (RAND_MAX + 1LL) + rand();
	r = r * (RAND_MAX + 1LL) + rand();
	r = r * (RAND_MAX + 1LL) + rand();

	return (long)r % (gg - dg + 1) + dg;
}

int brojZnamenaka(long int a) {
	if (a == 0) {
		return 1;
	}

	if (a < 0) {
		a = -a;
	}

	int brojac = 0;
	while (a != 0) {
		a /= 10;
		brojac++;
	}

	return brojac;
}


/*Napisati program u C jeziku u kojem se treba kreirati novi složeni tip podatka struct cijeli_broj pod
nazivom CIJELI_BROJ. Struktura CIJELI_BROJ treba sadržavati dva cijela člana tipa long za
uneseni_broj i int za broj_znamenaka. U član uneseni_broj potrebno je upisati generirani P-S broj
iz intervala [-2147483648, 2147483647], a u član broj_znamenaka potrebno je upisati koliko
generirani broj ima znamenaka. Za generiranje P-S vrijednosti potrebno je koristiti funkciju koja ne
prima argumente, a vraća P-S generiranu vrijednost, a za izračunavanje broja znamenaka potrebno
je također koristiti funkciju koja prima P-S generirani broj (član uneseni_broj) te izračunava i vraća
broj znamenaka. U glavnom dijelu programa potrebno je kreirati polje struktura CIJELI_BROJ od 40
elemenata, te pomoću ranije spomenutih funkcija popuniti članove pojedine strukture iz polja
struktura. Pronaći i ispisati sve članove strukture koja ima najveći, kao i strukturu koja ima najmanji
broj znamenaka generiranog broja.*/