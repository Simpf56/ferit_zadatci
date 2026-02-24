#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#define NIZ 32

int Prog2LV1_4() {
	int i, j;
	int bit[NIZ] = { 0 };
	short n;
	long long broj=0;
	int dg = INT16_MIN;
	int gg = INT16_MAX;

	srand((unsigned)time(NULL));

	/*do {
		scanf("%hd", &n);
	} while (n<INT16_MIN || n>INT16_MAX);*/

	n = (short)(rand() % (gg - dg + 1) + dg);

	if (n > 0) {
		for (i = 31; i >= 0; i--) {
			bit[i] = n % 2;
			n /= 2;
		}
	}
	else if (n < 0) {
		n = -n;
		for (i = 31; i >= 0; i--) {
			bit[i] = n % 2;
			n = n /= 2;
		}

		for (i = 31; i >= 0; i--) {
			bit[i] = 1 - bit[i];
		}

		for (i = 31; i >= 0; i--) {
			if (bit[i] == 0) {
				bit[i] = 1;
				break;
			}
			bit[i] = 0;
		}
	}


	for (i = 0; i < 32; i++) {
		printf("%d", bit[i]);
	}

	return 0;
}

//Napisati C program koji će pseudo - slučajno generirati broj iz intervala za short tip podatka, te taj
//broj pretvoriti u binarni ekvivalent popunjavanjem cjelobrojnog polja duljine 32 elementa.Pripaziti
//na postupak pretvorbe kada je broj negativan i kada je pozitivan.