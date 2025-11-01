#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV5_5() {
	char ocjena;

	printf("Unesite ocijenu za koji vas zanima potreban postotak. \n");
	scanf("%c", &ocjena);

	switch (ocjena) {
	case 'A':
		printf("Postotak za ocijenu A je 90 do 100 %%");
		break;
	case 'a':
		printf("Postotak za ocijenu A je 90 do 100 %%");
		break;
	case 'B':
		printf("Postotak za ocijenu B je 80 do 89 %%");
		break;
	case 'b':
		printf("Postotak za ocijenu B je 80 do 89 %%");
		break;
	case 'C':
		printf("Postotak za ocijenu C je 70 do 79 %%");
		break;
	case 'c':
		printf("Postotak za ocijenu C je 70 do 79 %%");
		break;
	case 'D':
		printf("Postotak za ocijenu D je 60 do 69 %%");
		break;
	case 'd':
		printf("Postotak za ocijenu D je 60 do 69 %%");
		break;
	case 'F':
		printf("Postotak za ocijenu F je 59 i manje %%");
		break;
	case 'f':
		printf("Postotak za ocijenu F je 59 i manje %%");
		break;
	default:
		printf("Pogrešan unos!");
		break;
	}	

	return 0;
}