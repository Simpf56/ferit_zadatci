#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int LV14_5() {
	int i;
	int m=0;
	char* string;
	int counter = 0;
	srand((unsigned)time(NULL));

	while (m < 1 || m>499) {
	scanf(" %d", &m);
	}
	getchar();
	printf("Unesite vašu rečenicu dužine %d znakova:\n", m);
	m++;

	string = (char*)malloc(m * sizeof(char));
	if (string == NULL) {
		return 1;
	}

	fgets(string, m, stdin);
	int duljina = strlen(string);
	if (duljina > 0 && string[duljina - 1] == '\n') {
		string[duljina - 1] = '\0';
		duljina--;
	}

	for (i = 0; i < duljina; i++) {
		if (string[i] == ' ') {
			counter++;
		}
	}

	printf("%d", counter);

	free(string);



	return 0;
}


/*3. Omogućiti korisniku unos željene duljine stringa (1 ≤ m < 500). Dinamički zauzeti potrebnu
memoriju (uzeti u obzir i mjesto potrebno za null znak). Potom, omogućiti korisniku unos rečenice
od maksimalno m znakova. Odrediti i na ekran ispisati koliko se puta pojavljuje razmak.*/