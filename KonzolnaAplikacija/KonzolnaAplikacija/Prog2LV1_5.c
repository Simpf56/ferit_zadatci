#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define POLJE 32

int Prog2LV1_5() {
	int polje[POLJE] = { 0 };
	int i, expo = 0;
	float dec = 0.0f;
	int pomak = 0;

	while (1) {
		scanf("%f", &dec);

		if (dec >= 2 && (dec * 100) != (int)(dec * 100)) {
			break;
		}

		printf("Broj mora biti veci ili jednak dva i imati barem 3 decimale.\n");
	}

	if (dec < 0) {
		polje[0] = 1;
		dec = -dec;
	}
	else {
		polje[0] = 0;
	}

	while (dec >= 2.0f) {
		dec /= 2.0f;
		pomak++;
	}

	expo = pomak + 127;

	for (i = 8; i >= 1; i--) {
		polje[i] = expo % 2;
		expo /= 2;
	}

	dec = dec - 1.0f;

	for (i = 9; i < 32; i++) {
		dec *= 2;
		if (dec >= 1.0f) {
			polje[i] = 1;
			dec -= 1.0f;

		}
		else {
			polje[i] = 0;
		}
	}

	for (i = 0; i < 32; i++) {
		printf("%d", polje[i]);
	}





	return 0;
}

/*Napisati C program koji će korisniku omogućiti unos realnog broja koji je veći ili jednak 2 s barem
tri decimalna mjesta i pomoću standarda IEEE 754 jednostruke preciznosti pretvoriti broj u binarni
ekvivalent popunjavanjem cjelobrojnog polja duljine 32 elementa. Pripaziti na postupak pretvorbe
kada je broj negativan i kada je pozitivan.*/