#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"
#include <string.h>
#define NIZ 201


int LV8_1() {
	int i, brojac = 0;
	char niz[NIZ];
	int duzinaRecenice;
	char c;

	printf("Upisite vasu recenicu (max 200 rijeci): \n");
	scanf("%200[^\n]", niz);
	
	duzinaRecenice = strlen(niz);
	
	for (i = 0; i < duzinaRecenice; i++) {
		c = niz[i];
		if (c == ' ') {
			brojac++;
		}
	}

	printf("REZULTAT: \n");
	printf("%d",brojac+1);;


	return 0;
}



/*Tražiti od korisnika unos jedne rečenice od maksimalno 200 znakova.Odrediti i na ekran ispisati
broj riječi u rečenici.*/


//Ovo je primjer recenice tocno dvjesto znakova dugacka, ukljucujuci sve razmake i interpunkciju, da se moze testirati program koji broji znakove u nizu bez ikakvih gresaka.

