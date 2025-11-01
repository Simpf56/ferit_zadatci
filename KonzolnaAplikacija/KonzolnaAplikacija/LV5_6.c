#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV5_6() {
	char a,b,c,najveci,najmanji;
	int rezultat;
	printf("Unesite 3 znaka: \n");
	scanf("%c %c %c", &a, &b ,&c);

	
	najmanji = a;
	if (b < najmanji) najmanji = b;
	if (c < najmanji) najmanji = c;

	if (najmanji == a) {
		printf("%c - %c = %X\n", b, najmanji, b - najmanji);
		printf("%c - %c = %X\n", c, najmanji, c - najmanji);
	}
	else if (najmanji == b) {
		printf("%c - %c = %X\n", a, najmanji, a - najmanji);
		printf("%c - %c = %X\n", c, najmanji, c - najmanji);
	}
	else if (najmanji == c) {
		printf("%c - %c = %X\n", a, najmanji, a - najmanji);
		printf("%c - %c = %X\n", b, najmanji, b - najmanji);
	}

	return 0;
}




/*6. Omogućiti korisniku unos tri znaka te odrediti koji ima najmanju ASCII vrijednost. Za svaki od
preostala dva znaka ispisati vrijednost u heksadekadskom brojevnom sustavu koja je jednaka razlici
njega i najmanjeg.*/