#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double razlikaMaxMin(int x);

int LV9_6() {
	int n;
	double rezultat;
	printf("Unesite vas broj: \n");
	scanf("%d", &n);

	rezultat = razlikaMaxMin(n);

	printf("REZULTAT:\n");
	printf("%.2f", rezultat);

	return 0;
}

double razlikaMaxMin(int x) {
	int max = x % 10;
	int min = x % 10;
	int ostatak = 0;
	double razlika;

	while (x > 0) {
		ostatak = x % 10;		
		if (ostatak > max) {
			max = ostatak;
		}else if (ostatak < min) {
			min = ostatak;
		}
		x /= 10;		
	}
	razlika = max - min;
	return razlika;

}
/*Napisati funkciju koja u predanom joj broju pronalazi i vraća razliku najveće i najmanje znamenke.
U svrhu testiranja u funkciji main() pozvati funkciju s brojem 31962 kao argument i na ekran ispisati
povratnu vrijednost.*/