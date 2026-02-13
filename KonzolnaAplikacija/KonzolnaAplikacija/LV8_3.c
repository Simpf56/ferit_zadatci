#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "zadaci.h"

#define STRING1 100

int LV8_3() {

	char string1[STRING1];
	char string2[STRING1];

	int i;
	int prvi = 0, drugi = 0;


	printf("Unesite dva stringa:\n");
	fgets(string1, STRING1, stdin);
	
	printf("Unesite drugi string:\n");
	fgets(string2, STRING1, stdin);

	for (i = 0; i < strlen(string1); i++) {
		switch (string1[i]) {
		case 'a': case 'e': case 'i': case 'o': case'u':
		case 'A': case 'E': case 'I': case 'O': case'U':
			prvi ++;
			break;
		}
	}

	for (i = 0; i < strlen(string2); i++) {
		switch (string2[i]) {
		case 'a': case 'e': case 'i': case 'o': case'u':
		case 'A': case 'E': case 'I': case 'O': case'U':
			drugi++;
			break;
		}
	}

	if (prvi > drugi) {
		printf(string1);
	}
	else {
		printf(string2);
	}



	return 0;
}


/*Omogućiti korisniku unos dva stringa od maksimalno 100 znakova. Ispisati na ekran onaj koji sadrži
više samoglasnika.*/