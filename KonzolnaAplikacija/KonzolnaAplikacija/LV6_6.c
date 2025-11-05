#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV6_6() {
	int broj,modulo;
	printf("Upisite broj: \n");
	scanf("%d", &broj);

	if (broj <= 1) {
		printf("Broj nije prost!");
		return 0;
	}

	for (int i = 2; i < broj - 1; i++) {
		if (broj % i == 0) {
			printf("Broj nije prost");
			return 0;
		}		
	}
	
	printf("Broj je prost!");
	

	return 0;
}