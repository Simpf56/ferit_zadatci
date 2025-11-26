#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float srednjaVrijednost(int a, int b);

int LV9_3() {
	int m = 0;
	int n = 0;
	float rezultat;
	while (1) {
	printf("Unesite dva broja ali pripazite da drugi bude veci od prvog ali ne za 1!\n");
		scanf("%d", &m);
		scanf("%d", &n);
		if (m >= n) {
			printf("Krivi unos!\n");
		}
		else if(m+1) {
			printf("Premali razmak unos!\n");
		}
		else {
			break;
		}
	}

	rezultat = srednjaVrijednost(m, n);
	printf("REZULTATI:\n");
	printf("%.2f", rezultat);





	return 0;
}

float srednjaVrijednost(int a, int b) {
	int i, brojac = 0;
	float srednja = 0; 
	for (i = a+1; i < b; i++) {
		srednja += i;
		brojac++;
	}	

	srednja /= brojac;
	return srednja;
}