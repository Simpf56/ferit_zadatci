#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int LV7_5() {
	int n,i;
	float srednjaAVrijednost = 0, apsolutnaV;
	float niz[12];

	printf("Unesite 12 cijelih brojevau niz: \n");
	for (i = 0; i < 12; i++) {
		scanf("%f", &niz[i]);
		if (niz[i] < 0) {
			apsolutnaV = -niz[i];
		}
		else {
			apsolutnaV = niz[i];
		}
		srednjaAVrijednost += apsolutnaV;
	}

	srednjaAVrijednost /= 12;

	for (i = 0; i < 12; i++) {
		if (niz[i] > 0) {
			niz[i] = srednjaAVrijednost;
		}
		printf("%.2f ", niz[i]);
	}


	return 0;
}