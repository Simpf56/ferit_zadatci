#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV6_5() {
	char ocjena;
	int petlja = 1;
	int brojac = 0;

	printf("Unesite ocjene: \n");

	while (petlja) {
		scanf(" %c", &ocjena);

		switch (ocjena) {
		case 'A': case 'a':
		case 'B': case 'b':
		case 'C': case 'c':
		case 'D': case 'd':
		case 'E': case 'e':
		case 'F': case 'f':
			++brojac;
			break;
		case '!':
			petlja = 0;
			break;
		default:
			printf("Unio si neko drugo slovo \n");
			break;
		}
	}

	printf("Broj unesenih ocijena je %d", brojac);	

	return 0;
}