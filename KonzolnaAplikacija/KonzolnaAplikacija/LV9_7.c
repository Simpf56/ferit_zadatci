#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV9_7() {
	char znak;
	printf("Unesite vaš znak:\n");
	scanf("%c", &znak);

	znak = veliko(znak);
	printf("REZULTAT:\n");
	printf("%c", znak);
	return 0;
}

int veliko(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + 32;
	}else{
		return c;
	}
}

//Napisati funkciju koja prima jedan znak i ako taj znak predstavlja veliko slovo potrebno ga je vratiti
//kao malo slovo.U suprotnom vratiti inicijalni(predani) znak.U svrhu testiranja u funkciji main()
//pozvati funkciju sa znakom učitanim s tipkovnice i na ekran ispisati povratnu vrijednost.