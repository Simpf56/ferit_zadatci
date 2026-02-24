#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 8

int Prog2LV1_1() {
	int n;
	int i;
	int bit[NIZ] = {0};

	do {
		scanf("%d", &n);
	}while(n < -128 || n > 127);

	if (n > 0) {
		for (i = 7; i >= 0; i--) {
			bit[i] = n % 2;
			n /= 2;
		}
	}
	else if (n < 0) {
		n = -n;
		for (i = 7; i >= 0; i--) {
			bit[i] = n % 2;
			n = n /= 2;
		}

		for (i = 7; i >= 0; i--) {
			bit[i] = 1 - bit[i];
		}

		for (i = 7; i >= 0; i--) {
			if (bit[i] == 0) {
				bit[i] = 1; 
				break;
			}
			bit[i] = 0;
		}
	}


	for (i = 0; i < 8; i++) {
		printf("%d", bit[i]);
	}
	return 0;	
}

