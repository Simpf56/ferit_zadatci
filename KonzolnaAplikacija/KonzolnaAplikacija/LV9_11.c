#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int binarno(int cijeli);

int LV9_11() {
	int broj;
	int binarniBroj;
	printf("Unesite vas broj:\n");
	while (1) {
	scanf("%d", &broj);
	if(broj >= 1 && broj <= 128){
		break;
	}
	else {
		return 0;
	}
	}
	binarniBroj = binarno(broj);
	printf("REZULTAT:\n");
	printf("%d", binarniBroj);

	return 0;
}

int binarno(int cijeli) {
	int rezultat = 0;
	int faktor = 1;
	while (cijeli > 0) {
		int binarni = cijeli % 2;
		rezultat += binarni * faktor;
		faktor *= 10;
		cijeli /= 2;
	}

	return rezultat;
}
/*Napisati funkciju koja za predani joj cijeli broj pretvara broj u binarni ekvivalent. Funkcija treba
binarni ekvivalent vratiti kao cijeli broj do maksimalno 8 znamenaka. U svrhu testiranja u funkciji
main() tražiti od korisnika unos broja iz intervala [1, 128] te pozvati funkciju s unesenim brojem
kao argumentom te na ekran ispisati povratnu vrijednost.*/