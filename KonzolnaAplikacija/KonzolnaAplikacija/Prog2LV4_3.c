#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TOCKE 10

typedef struct Kordinata {
	float x;
	float y;
	float z;
}KORDINATE;

int Prog2LV4_3() {
	int i;
	float maxZ = 0;
	int index = 0;
	KORDINATE* pokNaKordinate;

	pokNaKordinate = (KORDINATE*)calloc(TOCKE, sizeof(KORDINATE));
	if (pokNaKordinate == NULL) { return 1; }

	for (i = 0; i < TOCKE; i++) {
		scanf("%f", &(pokNaKordinate + i)->x);
		scanf("%f", &(pokNaKordinate + i)->y);
		scanf("%f", &(pokNaKordinate + i)->z);

		if ((pokNaKordinate + i)->z > maxZ) {
			maxZ = (pokNaKordinate + i)->z;
			index = i;
		}
	}

	printf("Kordinata sa najvišom točkom je kordinata %d. indexa i visine %.2f.", index + 1, (pokNaKordinate + index)->z);

	return 0;
}


/*Napisati C program koji će ponuditi učitavanje 10 točaka u trodimenzionalnom prostoru. Kreirati
strukturu tocka s tri realna člana x, y, z. Dinamički zauzeti memoriju za polje točaka (u potpunosti
rukovati memorijom). Program treba pronaći i ispisati indeks i koordinate najviše točke. Najviša
točka je onaj koja ima najveću z koordinatu. Koristiti isključivo pokazivačku notaciju. Koristiti
typedef.*/